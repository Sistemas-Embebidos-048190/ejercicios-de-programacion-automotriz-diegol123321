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
 * @brief Enciende un conjunto específico de luces.
 * @param current_state El valor actual del registro de luces.
 * @param light_mask La máscara del bit de las luces a encender.
 * @return El nuevo valor del registro con las luces especificadas encendidas.
 */
uint8_t turn_on_lights(uint8_t current_state, uint8_t light_mask)
{
  // Modificar aqui
  return current_state | light_mask;
  
}


// No tocar
int main()
{
    uint8_t register_state = LOW_BEAMS_MASK | REAR_FOG_MASK; // 0b00001001
    uint8_t mask = 0;
    scanf("%hhu", &mask); // Leer estado inicial

    // Test 1:
    uint8_t new_state = turn_on_lights(register_state, mask);
    printf("%d\n", new_state);

}