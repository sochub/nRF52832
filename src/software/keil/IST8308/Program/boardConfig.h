/**
 *      __            ____
 *     / /__ _  __   / __/                      __  
 *    / //_/(_)/ /_ / /  ___   ____ ___  __ __ / /_ 
 *   / ,<  / // __/_\ \ / _ \ / __// _ \/ // // __/ 
 *  /_/|_|/_/ \__//___// .__//_/   \___/\_,_/ \__/  
 *                    /_/   github.com/KitSprout    
 * 
 *  @file    boardConfig.h
 *  @author  KitSprout
 *  @date    25-Nov-2017
 *  @brief   
 * 
 */

/* Define to prevent recursive inclusion ---------------------------------------------------*/
#ifndef __BOARDCONFIG_H
#define __BOARDCONFIG_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes --------------------------------------------------------------------------------*/
/* Exported types --------------------------------------------------------------------------*/
/* Exported constants ----------------------------------------------------------------------*/

#define KS_HW_BOARD_NAME              "KSDK"
#define KS_HW_MCU_NAME                "NRF52832"

#define KS_HW_USE_CLOCK_SOUCE_HSI     (0U)
#define KS_HW_USE_CLOCK_SOUCE_HSE     (1U)
#define KS_HW_CLOCK_SOUCE             KS_HW_USE_CLOCK_SOUCE_HSE

#define KS_FW_UART_HAL_LIBRARY        (0U)
#define KS_FW_SPI_HAL_LIBRARY         (0U)
#define KS_FW_I2C_HAL_LIBRARY         (0U)
#define KS_FW_USB_ENABLE              (0U)

#define KS_SYSCLK                     SystemCoreClock


/* -------- LED and KEY */

#define LED_R_PIN                     6
#define LED_R_Set()                   __GPIO_SET(LED_R_PIN)
#define LED_R_Reset()                 __GPIO_RST(LED_R_PIN)
#define LED_R_Toggle()                __GPIO_TOG(LED_R_PIN)

#define LED_G_PIN                     7
#define LED_G_Set()                   __GPIO_SET(LED_G_PIN)
#define LED_G_Reset()                 __GPIO_RST(LED_G_PIN)
#define LED_G_Toggle()                __GPIO_TOG(LED_G_PIN)

#define LED_B_PIN                     8
#define LED_B_Set()                   __GPIO_SET(LED_B_PIN)
#define LED_B_Reset()                 __GPIO_RST(LED_B_PIN)
#define LED_B_Toggle()                __GPIO_TOG(LED_B_PIN)

#define KEY_PIN                       11
#define KEY_Read()                    (__GPIO_READ(KEY_PIN) == 1)
#define KEY_IRQx_LINE                 0
#define KEY_IRQx_INT_LINE             NRF_GPIOTE_INT_IN0_MASK
#define KEY_IRQx_POLARITY             NRF_GPIOTE_POLARITY_LOTOHI


/* -------- UART Serial */

#define SERIAL_UARTx                  NRF_UART0
#define SERIAL_UARTx_IRQn             UARTE0_UART0_IRQn
#define SERIAL_UARTx_IRQn_PRIORITY    1

#define SERIAL_TXD_PIN                13
#define SERIAL_RXD_PIN                12
#define SERIAL_RTS_PIN                23
#define SERIAL_CTS_PIN                22

#define SERIAL_BAUDRATE               NRF_UART_BAUDRATE_115200
#define SERIAL_PARITY                 NRF_UART_PARITY_EXCLUDED
#define SERIAL_HARDWARECTRL           NRF_UART_HWFC_DISABLED
#define SERIAL_INTERRUPT_MODE         NRF_UART_INT_MASK_RXDRDY


/* -------- Inertial Sensor */

#define IMU_SCL_PIN                   30
#define IMU_SDA_PIN                   31
#define IMU_I2C_FREQ                  16

/* Exported functions ----------------------------------------------------------------------*/

#ifdef __cplusplus
}
#endif

#endif

/*************************************** END OF FILE ****************************************/
