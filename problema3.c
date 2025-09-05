#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

// Se usan macros para hacer el código más legible y fácil de mantener.
// Representan la máscara de bits para cada luz.
#define LOW_BEAMS_MASK      (1 << 0) // 0b00000001
#define HIGH_BEAMS_MASK     (1 << 1) // 0b00000010
#define FRONT_FOG_MASK      (1 << 2) // 0b00000100
#define REAR_FOG_MASK       (1 << 3) // 0b00001000
#define LEFT_INDICATOR_MASK (1 << 4) // 0b00010000
#define RIGHT_INDICATOR_MASK (1 << 5) // 0b00100000

/**
 * @brief Verifica si un conjunto de luces está encendido.
 * @param current_state El valor actual del registro de luces.
 * @param light_mask La máscara del bit de las luces a verificar.
 * @return true si las luces están encendidas, false en caso contrario.
 */
bool are_lights_on(uint8_t current_state, uint8_t light_mask)
{
  // Modificar aqui
  return (current_state & light_mask) != 0;
}


// ========================================= No tocar ================================================= //
int main()
{
    uint8_t register_state = LOW_BEAMS_MASK | REAR_FOG_MASK | RIGHT_INDICATOR_MASK; // 0b00101001
    uint8_t mask = 0;
    scanf("%hhu", &mask); // Leer estado inicial
    
    // Test 3: Verificar luces
    printf("%s\n", are_lights_on(register_state, mask) ? "true" : "false");
}
// ========================================= No tocar ================================================= //