#include <stdio.h>
#include <stdint.h>

/**
 * @brief Extrae la velocidad del motor (RPM) de un paquete de datos CAN.
 * La velocidad es un entero de 16 bits en formato Big-Endian en los bytes 0 y 1.
 * @param can_data Un puntero a un arreglo de 8 bytes con los datos del mensaje.
 * @return El valor de la velocidad del motor en RPM.
 */
uint16_t get_engine_rpm(const uint8_t* can_data)
{
  // Modifica esta funcion
  uint16_t rpm = ((uint16_t)can_data[0] << 8) | can_data[1];
  return rpm;
}


// ========================================= No tocar ================================================= //
int main()
{
    // Caso 1: RPM = 850 (0x0352)
    // Byte 0 = 0x03, Byte 1 = 0x52
    uint8_t can_message[8] = {0x03, 0x52, 0x1A, 0xFF, 0x34, 0x88, 0x90, 0x1B};
    uint16_t rpm = get_engine_rpm(can_message);
    printf("%ld", rpm);
}

// ========================================= No tocar ================================================= //