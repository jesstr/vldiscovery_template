/* Generated by startup_generator */

#include <stm32f0xx.h>

extern void _estack(void);  // to force type checking
void Reset_Handler(void);
void default_handler (void) { while(1); }

void __attribute__ ((weak)) __libc_init_array(void){}

// Linker supplied pointers

extern unsigned long _sidata;
extern unsigned long _sdata;
extern unsigned long _edata;
extern unsigned long _sbss;
extern unsigned long _ebss;

extern int main(void);

void Reset_Handler(void) {

   unsigned long *src, *dst;

   src = &_sidata;
   dst = &_sdata;

   // Copy data initializers

    while (dst < &_edata)
      *(dst++) = *(src++);

   // Zero bss

   dst = &_sbss;
   while (dst < &_ebss)
       *(dst++) = 0;

  SystemInit();
  __libc_init_array();
  main();
  while(1) {}
}

/* Vector Table */

void NMI_Handler (void) __attribute__ ((weak,  alias ("default_handler")));
void HardFault_Handler (void) __attribute__ ((weak,  alias ("default_handler")));
void MemMange_Handler (void) __attribute__ ((weak,  alias ("default_handler")));
void BusFault_Handler (void) __attribute__ ((weak,  alias ("default_handler")));
void UsageFault_Handler (void) __attribute__ ((weak,  alias ("default_handler")));
void SVC_Handler (void) __attribute__ ((weak,  alias ("default_handler")));
void DebugMon_Handler (void) __attribute__ ((weak,  alias ("default_handler")));
void PendSV_Handler (void) __attribute__ ((weak,  alias ("default_handler")));
void SysTick_Handler (void) __attribute__ ((weak,  alias ("default_handler")));
void WWDG_IRQHandler (void) __attribute__ ((weak,  alias ("default_handler")));
void PVD_IRQHandler (void) __attribute__ ((weak,  alias ("default_handler")));
void TAMPER_STAMP_IRQHandler (void) __attribute__ ((weak,  alias ("default_handler")));
void RTC_WKUP_IRQHandler (void) __attribute__ ((weak,  alias ("default_handler")));
void FLASH_IRQHandler (void) __attribute__ ((weak,  alias ("default_handler")));
void RCC_IRQHandler (void) __attribute__ ((weak,  alias ("default_handler")));
void EXTI0_1_IRQHandler (void) __attribute__ ((weak,  alias ("default_handler")));
void EXTI2_3_IRQHandler (void) __attribute__ ((weak,  alias ("default_handler")));
void EXTI4_15_IRQHandler (void) __attribute__ ((weak,  alias ("default_handler")));
void TS_IRQHandler (void) __attribute__ ((weak,  alias ("default_handler")));
void EXTI4_IRQHandler (void) __attribute__ ((weak,  alias ("default_handler")));
void DMA1_Channel1_IRQHandler (void) __attribute__ ((weak,  alias ("default_handler")));
void DMA1_Channel2_3_IRQHandler (void) __attribute__ ((weak,  alias ("default_handler")));
void DMA1_Channel4_5_IRQHandler (void) __attribute__ ((weak,  alias ("default_handler")));
void ADC1_COMP_IRQHandler (void) __attribute__ ((weak,  alias ("default_handler")));
void TIM1_BRK_UP_TRG_IRQHandler (void) __attribute__ ((weak,  alias ("default_handler")));
void TIM1_CC_IRQHandler (void) __attribute__ ((weak,  alias ("default_handler")));
void TIM2_IRQHandler (void) __attribute__ ((weak,  alias ("default_handler")));
void TIM3_IRQHandler (void) __attribute__ ((weak,  alias ("default_handler")));
void TIM6_DAC_IRQHandler (void) __attribute__ ((weak,  alias ("default_handler")));
void TIM14_IRQHandler (void) __attribute__ ((weak,  alias ("default_handler")));
void TIM15_IRQHandler (void) __attribute__ ((weak,  alias ("default_handler")));
void TIM16_IRQHandler (void) __attribute__ ((weak,  alias ("default_handler")));
void TIM17_IRQHandler (void) __attribute__ ((weak,  alias ("default_handler")));
void I2C1_IRQHandler (void) __attribute__ ((weak,  alias ("default_handler")));
void I2C2_IRQHandler (void) __attribute__ ((weak,  alias ("default_handler")));
void SPI1_IRQHandler (void) __attribute__ ((weak,  alias ("default_handler")));
void SPI2_IRQHandler (void) __attribute__ ((weak,  alias ("default_handler")));
void USART1_IRQHandler (void) __attribute__ ((weak,  alias ("default_handler")));
void USART2_IRQHandler (void) __attribute__ ((weak,  alias ("default_handler")));
void CEC_IRQHandler (void) __attribute__ ((weak,  alias ("default_handler")));



__attribute__ ((section(".isr_vector")))

void (* const g_pfnVectors[])(void) = {
  [0]  = _estack,
  [1]  = Reset_Handler,
  [2]  = NMI_Handler,
  [3]  = HardFault_Handler,
  [4]  = MemMange_Handler,
  [5]  = BusFault_Handler,
  [6]  = UsageFault_Handler,
  [11] = SVC_Handler,
  [12] = DebugMon_Handler,
  [14] = PendSV_Handler,
  [15] = SysTick_Handler,
  [16] = WWDG_IRQHandler,
  [17] = PVD_IRQHandler,
  [18] = TAMPER_STAMP_IRQHandler,
  [19] = RTC_WKUP_IRQHandler,
  [20] = FLASH_IRQHandler,
  [21] = RCC_IRQHandler,
  [22] = EXTI0_1_IRQHandler,
  [23] = EXTI2_3_IRQHandler,
  [24] = EXTI4_15_IRQHandler,
  [25] = TS_IRQHandler,
  [26] = EXTI4_IRQHandler,
  [27] = DMA1_Channel1_IRQHandler,
  [28] = DMA1_Channel2_3_IRQHandler,
  [29] = DMA1_Channel4_5_IRQHandler,
  [30] = ADC1_COMP_IRQHandler,
  [31] = TIM1_BRK_UP_TRG_IRQHandler,
  [32] = TIM1_CC_IRQHandler,
  [33] = TIM2_IRQHandler,
  [34] = TIM3_IRQHandler,
  [35] = TIM6_DAC_IRQHandler,
  [37] = TIM14_IRQHandler,
  [38] = TIM15_IRQHandler,
  [39] = TIM16_IRQHandler,
  [40] = TIM17_IRQHandler,
  [41] = I2C1_IRQHandler,
  [42] = I2C2_IRQHandler,
  [43] = SPI1_IRQHandler,
  [44] = SPI2_IRQHandler,
  [45] = USART1_IRQHandler,
  [46] = USART2_IRQHandler,
  [48] = CEC_IRQHandler,
};
