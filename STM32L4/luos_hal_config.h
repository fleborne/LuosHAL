/******************************************************************************
 * @file luosHAL_Config
 * @brief This file allow you to configure LuosHAL according to your design
 *        this is the default configuration created by Luos team for this MCU Family
 *        Do not modify this file if you want to ovewrite change define in you project
 * @MCU Family STM32L4
 * @author Luos
 * @version 0.0.0
 ******************************************************************************/
#ifndef _LUOSHAL_CONFIG_H_
#define _LUOSHAL_CONFIG_H_

#include "stm32L4xx_hal.h"

#define DISABLE 0x00
#define DISABLE 0x00
/*******************************************************************************
 * PINOUT CONFIG
 ******************************************************************************/
#ifndef PORT_CLOCK_ENABLE
#define PORT_CLOCK_ENABLE()         do { \
                                    __HAL_RCC_GPIOA_CLK_ENABLE();\
                                    __HAL_RCC_GPIOB_CLK_ENABLE();\
                                      } while(0U)
#endif

//PTP pin definition
#ifndef PTPA_PIN
#define PTPA_PIN                    GPIO_PIN_8
#endif
#ifndef PTPA_PORT
#define PTPA_PORT                   GPIOA
#endif
#ifndef PTPA_IRQ
#define PTPA_IRQ                    EXTI9_5_IRQn
#endif

#ifndef PTPB_PIN
#define PTPB_PIN                    GPIO_PIN_13
#endif
#ifndef PTPB_PORT
#define PTPB_PORT                   GPIOB
#endif
#ifndef PTPB_IRQ
#define PTPB_IRQ                    EXTI15_10_IRQn
#endif

//COM pin definition
#ifndef TX_LOCK_DETECT_PIN
#define TX_LOCK_DETECT_PIN          DISABLE
#endif
#ifndef TX_LOCK_DETECT_PORT
#define TX_LOCK_DETECT_PORT         DISABLE
#endif
#ifndef TX_LOCK_DETECT_IRQ
#define TX_LOCK_DETECT_IRQ         DISABLE
#endif

#ifndef RX_EN_PIN
#define RX_EN_PIN                   GPIO_PIN_14
#endif
#ifndef RX_EN_PORT
#define RX_EN_PORT                  GPIOB
#endif

#ifndef TX_EN_PIN
#define TX_EN_PIN                   GPIO_PIN_15
#endif
#ifndef TX_EN_PORT
#define TX_EN_PORT                  GPIOB
#endif

#ifndef COM_LVL_DOWN_PIN
#define COM_LVL_DOWN_PIN            GPIO_PIN_5
#endif
#ifndef COM_LVL_DOWN_PORT
#define COM_LVL_DOWN_PORT           GPIOA
#endif

#ifndef COM_LVL_UP_PIN
#define COM_LVL_UP_PIN              GPIO_PIN_6
#endif
#ifndef COM_LVL_UP_PORT
#define COM_LVL_UP_PORT             GPIOA
#endif

#ifndef COM_TX_PIN
#define COM_TX_PIN                  GPIO_PIN_9
#endif
#ifndef COM_TX_PORT
#define COM_TX_PORT                 GPIOA
#endif
#ifndef COM_TX_AF
#define COM_TX_AF                   GPIO_AF7_USART1
#endif

#ifndef COM_RX_PIN
#define COM_RX_PIN                  GPIO_PIN_10
#endif
#ifndef COM_RX_PORT
#define COM_RX_PORT                 GPIOA
#endif
#ifndef COM_RX_AF
#define COM_RX_AF                   GPIO_AF7_USART1
#endif

#ifndef PINOUT_IRQHANDLER
#define PINOUT_IRQHANDLER(PIN)      HAL_GPIO_EXTI_Callback(PIN)
#endif

/*******************************************************************************
 * COM CONFIG
 ******************************************************************************/
#ifndef LUOS_COM_CLOCK_ENABLE
#define LUOS_COM_CLOCK_ENABLE()     __HAL_RCC_USART1_CLK_ENABLE()
#endif
#ifndef LUOS_COM
#define LUOS_COM                    USART1
#endif
#ifndef LUOS_COM_IRQ
#define LUOS_COM_IRQ                USART1_IRQn
#endif
#ifndef LUOS_COM_IRQHANDLER
#define LUOS_COM_IRQHANDLER()       USART1_IRQHandler()
#endif

/*******************************************************************************
 * FLASH CONFIG
 ******************************************************************************/
#ifndef PAGE_SIZE
#define PAGE_SIZE                   (uint32_t) FLASH_PAGE_SIZE
#endif
#ifndef ADDRESS_LAST_PAGE_FLASH
#define ADDRESS_LAST_PAGE_FLASH     ((uint32_t)0x0801F800)
#endif

#endif /* _LUOSHAL_CONFIG_H_ */

