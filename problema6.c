#include <stdio.h>
#include <stdint.h>

/**
 * @brief Convierte el valor crudo de 10 bits de un ADC a temperatura en grados Celsius.
 * @param adc_value El valor leído del ADC (rango 0-1023).
 * @return La temperatura calculada en grados Celsius (float).
 */
float convert_adc_to_celsius(uint16_t adc_value)
{
  // Modificar esta funcion
  return (adc_value / 1023.0f) * 190.0f - 40.0f;
}
    
    




// ========================================= No tocar ================================================= //
int main()
{
    uint16_t value = 0;
    scanf("%hu", &value);
    float temp = convert_adc_to_celsius(value);
    printf("%.0f", temp);
}
// ========================================= No tocar ================================================= //