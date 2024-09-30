/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define BUTTON_Pin GPIO_PIN_13
#define BUTTON_GPIO_Port GPIOC
#define BUTTON1_Pin GPIO_PIN_14
#define BUTTON1_GPIO_Port GPIOC
#define BUTTON2_Pin GPIO_PIN_15
#define BUTTON2_GPIO_Port GPIOC
#define GREEN_1_Pin GPIO_PIN_1
#define GREEN_1_GPIO_Port GPIOA
#define YELLOW_1_Pin GPIO_PIN_2
#define YELLOW_1_GPIO_Port GPIOA
#define RED_1_Pin GPIO_PIN_3
#define RED_1_GPIO_Port GPIOA
#define LED_RED_Pin GPIO_PIN_5
#define LED_RED_GPIO_Port GPIOA
#define GREEN_2_Pin GPIO_PIN_6
#define GREEN_2_GPIO_Port GPIOA
#define YELLOW_2_Pin GPIO_PIN_7
#define YELLOW_2_GPIO_Port GPIOA
#define SEGLED1_0_Pin GPIO_PIN_0
#define SEGLED1_0_GPIO_Port GPIOB
#define SEGLED1_1_Pin GPIO_PIN_1
#define SEGLED1_1_GPIO_Port GPIOB
#define SEGLED1_2_Pin GPIO_PIN_2
#define SEGLED1_2_GPIO_Port GPIOB
#define SEGLED2_3_Pin GPIO_PIN_10
#define SEGLED2_3_GPIO_Port GPIOB
#define SEGLED2_4_Pin GPIO_PIN_11
#define SEGLED2_4_GPIO_Port GPIOB
#define SEGLED2_5_Pin GPIO_PIN_12
#define SEGLED2_5_GPIO_Port GPIOB
#define SEGLED2_6_Pin GPIO_PIN_13
#define SEGLED2_6_GPIO_Port GPIOB
#define EN1_Pin GPIO_PIN_14
#define EN1_GPIO_Port GPIOB
#define EN2_Pin GPIO_PIN_15
#define EN2_GPIO_Port GPIOB
#define RED_2_Pin GPIO_PIN_8
#define RED_2_GPIO_Port GPIOA
#define SEGLED1_3_Pin GPIO_PIN_3
#define SEGLED1_3_GPIO_Port GPIOB
#define SEGLED1_4_Pin GPIO_PIN_4
#define SEGLED1_4_GPIO_Port GPIOB
#define SEGLED1_5_Pin GPIO_PIN_5
#define SEGLED1_5_GPIO_Port GPIOB
#define SEGLED1_6_Pin GPIO_PIN_6
#define SEGLED1_6_GPIO_Port GPIOB
#define SEGLED2_0_Pin GPIO_PIN_7
#define SEGLED2_0_GPIO_Port GPIOB
#define SEGLED2_1_Pin GPIO_PIN_8
#define SEGLED2_1_GPIO_Port GPIOB
#define SEGLED2_2_Pin GPIO_PIN_9
#define SEGLED2_2_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
