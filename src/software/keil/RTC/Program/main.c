/* Includes --------------------------------------------------------------------------------*/
#include "drivers\nrf5x_system.h"
#include "drivers\nrf5x_rtc.h"
#include "nrf5x_bsp.h"

/** @addtogroup NRF5x_Program
 *  @{
 */

/* Private typedef -------------------------------------------------------------------------*/
/* Private define --------------------------------------------------------------------------*/
/* Private macro ---------------------------------------------------------------------------*/
/* Private variables -----------------------------------------------------------------------*/
/* Private function prototypes -------------------------------------------------------------*/
void IRQEvent_RTCTick( void );
void IRQEvent_RTCCompare( void );

/* Private functions -----------------------------------------------------------------------*/

int main( void )
{
  BSP_CLOCK_Config();
  BSP_GPIO_Config();
  BSP_RTC_Config(IRQEvent_RTCTick, IRQEvent_RTCCompare);   // tick 50 Hz, compare 1 Hz

  while (1) {
//    LED_R_Toggle();
//    delay_ms(100);
  }
}

void IRQEvent_RTCTick( void )
{
  LED_B_Toggle();
}

void IRQEvent_RTCCompare( void )
{
  LED_G_Toggle();
}

/*************************************** END OF FILE ****************************************/
