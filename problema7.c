#include <stdio.h>
#include <stdint.h>

#define ECO_MODE_MASK       (1 << 2)
#define SPORT_MODE_MASK     (1 << 3)
#define TRACTION_CTRL_MASK  (1 << 8)
#define ABS_SYSTEM_MASK     (1 << 9)


/**
 * @brief Modifica un conjunto de bits de configuración en el registro de la ECU.
 *
 * @param current_config El valor actual del registro de configuración de 16 bits.
 * @param mask Una máscara que indica cuáles bits se van a modificar (e.g., SPORT_MODE_MASK | TRACTION_CTRL_MASK).
 * @param values Un valor donde los bits correspondientes en la máscara contienen el nuevo estado (1 para activar, 0 para desactivar).
 *
 * @return El nuevo valor del registro de configuración.
 */
uint16_t set_ecu_config(uint16_t current_config, uint16_t mask, uint16_t values)
{
    uint16_t new_config = (current_config & ~mask) | (values & mask);
    return new_config;

}


// ========================================= No tocar ================================================= //
int main()
{
    // Estado inicial: Modo Eco y ABS activados.
    // 0b0000001000000100
    uint16_t config = ECO_MODE_MASK | ABS_SYSTEM_MASK;
    // Test 1: Activar Modo Sport y desactivar Modo Eco.
    // Máscara: Se modificarán los bits de Eco y Sport.
    uint16_t modification_mask  = ECO_MODE_MASK | SPORT_MODE_MASK;
    // Valores: Queremos Sport en 1 y Eco en 0.
    uint16_t new_values   = SPORT_MODE_MASK; // Bit de Eco es 0, bit de Sport es 1.
    // Resultado esperado: Modo Sport y ABS activados.
    // 0b0000001000001000
    
    uint16_t new_config = set_ecu_config(config, modification_mask, new_values);
    // VERIFICAR: new_config debe ser igual a (SPORT_MODE_MASK | ABS_SYSTEM_MASK).
    
    printf("%d", new_config);
}
// ========================================= No tocar ================================================= //