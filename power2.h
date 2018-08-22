#ifndef power2_h
#define power2_h

#if defined(__AVR_HAVE_PRR0_PRSPI0) && !defined(power_spi0_enable)
#define power_spi0_enable()      (PRR0 &= (uint8_t)~(1 << PRSPI0))
#define power_spi0_disable()     (PRR0 |= (uint8_t)(1 << PRSPI0))
#endif

#if defined(__AVR_HAVE_PRR1_PRSPI1) && !defined(power_spi1_enable)
#define power_spi1_enable()      (PRR1 &= (uint8_t)~(1 << PRSPI1))
#define power_spi1_disable()     (PRR1 |= (uint8_t)(1 << PRSPI1))
#endif

#if defined(__AVR_HAVE_PRR0_PRTWI0) && !defined(power_twi0_enable)
#define power_twi0_enable()      (PRR0 &= (uint8_t)~(1 << PRTWI0))
#define power_twi0_disable()     (PRR0 |= (uint8_t)(1 << PRTWI0))
#endif

#if defined(__AVR_HAVE_PRR1_PRTWI1) && !defined(power_twi1_enable)
#define power_twi1_enable()      (PRR1 &= (uint8_t)~(1 << PRTWI1))
#define power_twi1_disable()     (PRR1 |= (uint8_t)(1 << PRTWI1))
#endif

#if defined(__AVR_HAVE_PRR1_PRPTC) && !defined(power_ptc_enable)
#define power_ptc_enable()      (PRR1 &= (uint8_t)~(1 << PRPTC))
#define power_ptc_disable()     (PRR1 |= (uint8_t)(1 << PRPTC))
#endif

#if defined (__AVR_HAVE_PRR1_PRUSART3) && !defined(power_usart3_enable)
#define power_usart3_enable() (PRR1 &= (uint8_t) ~ (1 << PRUSART3))
#define power_usart3_disable() (PRR1 |= (uint8_t) (1 << PRUSART3))
#endif

#endif
