[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/JQNgAmP4)
# Ejercicios de Programación en C para Sistemas Embebidos Automotrices

¡Bienvenido! Este repositorio contiene una colección de ejercicios prácticos de programación diseñados para aplicar los fundamentos del lenguaje C a escenarios realistas del mundo de los **sistemas embebidos en la industria automotriz**.

El objetivo principal es cerrar la brecha entre la teoría de la programación y los desafíos prácticos que enfrentan los ingenieros al desarrollar software para una **Unidad de Control Electrónico (ECU)** de un vehículo moderno.

---

## Conceptos Clave que Practicarás

A través de estos ejercicios, fortalecerás tus habilidades en áreas cruciales para el desarrollo de software embebido:

* **Manipulación de Registros:** Uso de operaciones a nivel de bit (`bitwise`) para controlar hardware de manera eficiente.
* **Decodificación de Datos:** Interpretación de mensajes crudos de sensores y buses de comunicación como la red CAN.
* **Lógica de Control:** Implementación de algoritmos para la toma de decisiones en sistemas del vehículo.
* **Procesamiento de Señales:** Conversión de lecturas de sensores analógicos a unidades físicas y comprensibles.
* **Código Modular y Robusto:** Escritura de funciones claras, específicas y fiables.

---

## Estructura de los Ejercicios

Cada ejercicio está diseñado para enfocarse en un problema específico dentro del dominio automotriz.

| Ejercicio                    | Descripción                                                                                                       | Habilidades Clave                          |
| :--------------------------- | :---------------------------------------------------------------------------------------------------------------- | :----------------------------------------- |
| **1. Control de Luces** | Manipulación de un registro de 8 bits para encender, apagar y consultar el estado de las luces del vehículo.       | `Operaciones Bitwise (AND, OR, NOT)`       |
| **2. Decodificación CAN** | Extracción de la velocidad del motor (RPM) a partir de un mensaje crudo del bus CAN, manejando el formato Big-Endian. | `Desplazamiento de bits`, `Casting de tipos` |
| **3. Sensores de Estacionamiento** | Implementación de una lógica de alarma con diferentes niveles de prioridad basada en el estado de múltiples sensores. | `Máscaras de bits`, `Lógica condicional`    |
| **4. Temperatura del Refrigerante** | Conversión del valor digital de un sensor (ADC) a una unidad física (°C) mediante una fórmula de interpolación lineal. | `Aritmética de punto flotante`             |
| **5. Configuración de la ECU** | Modificación segura y selectiva de múltiples parámetros de configuración en un registro de 16 bits.               | `Patrones de modificación de registros`    |

---

## ¿Cómo Empezar?

### ### Requisitos
* Un compilador de C (se recomienda **GCC**).
* Un editor de texto o IDE (ej. VS Code, CLion, etc.).
* Git para clonar el repositorio.

### ### Instrucciones
1.  **Clona el repositorio en tu máquina local:**
    ```bash
    git clone [link de tu repo]
    ```

2.  **Navega al directorio del proyecto:**
    ```bash
    cd <tu_repositorio>
    ```

3.  **Abre los archivos `.c` y completa el código:**
    Tu tarea es rellenar la lógica dentro de las funciones de esqueleto provistas en cada ejercicio.

4.  **Compila y ejecuta para probar tu solución:**
    ```bash
    # Compila tu archivo (reemplaza 'main.c' por el nombre de tu archivo)
    gcc main.c -o programa -std=c99 -Werror -Wall

    # Ejecuta el programa para ver los resultados de las pruebas
    ./programa
    ```

---
