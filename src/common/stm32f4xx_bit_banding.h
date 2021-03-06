/*********************************************************************************************************
**
**                                北京翼辉信息技术有限公司
**
**                                  微型安全实时操作系统
**
**                                      MS-RTOS(TM)
**
**                               Copyright All Rights Reserved
**
**--------------文件信息--------------------------------------------------------------------------------
**
** 文   件   名: stm32f4xx_bit_banding.h
**
** 创   建   人: Jiao.jinxing
**
** 文件创建日期: 2020 年 04 月 07 日
**
** 描        述: STM32F4xx 位带
*********************************************************************************************************/

#ifndef __STM32F4XX_BIT_BANDING_H
#define __STM32F4XX_BIT_BANDING_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************************************************************************************************
  位带操作: 具体实现请参考<<Cortex-M4 Devices Generic User Guide.pdf>>
  The Cortex-M4 Processor (2.2 Memory model) 章节. M4 同 M3 类似, 只是寄存器地址变
*********************************************************************************************************/

/*********************************************************************************************************
  IO口操作宏定义
*********************************************************************************************************/

#define BITBAND(addr, bitnum)    ((addr & 0xF0000000) + 0x2000000 + ((addr &0xFFFFF) << 5) + (bitnum << 2))
#define MEM_ADDR(addr)           *((volatile unsigned long *)(addr))
#define BIT_ADDR(addr, bitnum)   MEM_ADDR(BITBAND(addr, bitnum))

/*********************************************************************************************************
  IO 口地址映射
*********************************************************************************************************/

#define GPIOA_ODR_Addr      (GPIOA_BASE + 20) //0x40020014
#define GPIOB_ODR_Addr      (GPIOB_BASE + 20) //0x40020414
#define GPIOC_ODR_Addr      (GPIOC_BASE + 20) //0x40020814
#define GPIOD_ODR_Addr      (GPIOD_BASE + 20) //0x40020C14
#define GPIOE_ODR_Addr      (GPIOE_BASE + 20) //0x40021014
#define GPIOF_ODR_Addr      (GPIOF_BASE + 20) //0x40021414
#define GPIOG_ODR_Addr      (GPIOG_BASE + 20) //0x40021814
#define GPIOH_ODR_Addr      (GPIOH_BASE + 20) //0x40021C14
#define GPIOI_ODR_Addr      (GPIOI_BASE + 20) //0x40022014
#define GPIOJ_ODR_ADDr      (GPIOJ_BASE + 20) //0x40022414
#define GPIOK_ODR_ADDr      (GPIOK_BASE + 20) //0x40022814

#define GPIOA_IDR_Addr      (GPIOA_BASE + 16) //0x40020010
#define GPIOB_IDR_Addr      (GPIOB_BASE + 16) //0x40020410
#define GPIOC_IDR_Addr      (GPIOC_BASE + 16) //0x40020810
#define GPIOD_IDR_Addr      (GPIOD_BASE + 16) //0x40020C10
#define GPIOE_IDR_Addr      (GPIOE_BASE + 16) //0x40021010
#define GPIOF_IDR_Addr      (GPIOF_BASE + 16) //0x40021410
#define GPIOG_IDR_Addr      (GPIOG_BASE + 16) //0x40021810
#define GPIOH_IDR_Addr      (GPIOH_BASE + 16) //0x40021C10
#define GPIOI_IDR_Addr      (GPIOI_BASE + 16) //0x40022010
#define GPIOJ_IDR_Addr      (GPIOJ_BASE + 16) //0x40022410
#define GPIOK_IDR_Addr      (GPIOK_BASE + 16) //0x40022810

/*********************************************************************************************************
  IO 口操作,只对单一的 IO 口! 确保 n 的值小于 16!
*********************************************************************************************************/

#define PAout(n)            BIT_ADDR(GPIOA_ODR_Addr, n)  //输出
#define PAin(n)             BIT_ADDR(GPIOA_IDR_Addr, n)  //输入

#define PBout(n)            BIT_ADDR(GPIOB_ODR_Addr, n)  //输出
#define PBin(n)             BIT_ADDR(GPIOB_IDR_Addr, n)  //输入

#define PCout(n)            BIT_ADDR(GPIOC_ODR_Addr, n)  //输出
#define PCin(n)             BIT_ADDR(GPIOC_IDR_Addr, n)  //输入

#define PDout(n)            BIT_ADDR(GPIOD_ODR_Addr, n)  //输出
#define PDin(n)             BIT_ADDR(GPIOD_IDR_Addr, n)  //输入

#define PEout(n)            BIT_ADDR(GPIOE_ODR_Addr, n)  //输出
#define PEin(n)             BIT_ADDR(GPIOE_IDR_Addr, n)  //输入

#define PFout(n)            BIT_ADDR(GPIOF_ODR_Addr, n)  //输出
#define PFin(n)             BIT_ADDR(GPIOF_IDR_Addr, n)  //输入

#define PGout(n)            BIT_ADDR(GPIOG_ODR_Addr, n)  //输出
#define PGin(n)             BIT_ADDR(GPIOG_IDR_Addr, n)  //输入

#define PHout(n)            BIT_ADDR(GPIOH_ODR_Addr, n)  //输出
#define PHin(n)             BIT_ADDR(GPIOH_IDR_Addr, n)  //输入

#define PIout(n)            BIT_ADDR(GPIOI_ODR_Addr, n)  //输出
#define PIin(n)             BIT_ADDR(GPIOI_IDR_Addr, n)  //输入

#define PJout(n)            BIT_ADDR(GPIOJ_ODR_Addr, n)  //输出
#define PJin(n)             BIT_ADDR(GPIOJ_IDR_Addr, n)  //输入

#define PKout(n)            BIT_ADDR(GPIOK_ODR_Addr, n)  //输出
#define PKin(n)             BIT_ADDR(GPIOK_IDR_Addr, n)  //输入

#ifdef __cplusplus
}
#endif

#endif                                                                  /*  __STM32F4XX_BIT_BANDING_H   */
/*********************************************************************************************************
  END
*********************************************************************************************************/
