#ifndef _BSP_H_
#define _BSP_H_
#include <msp430g2553.h>

#define del200us 210        
#define del15ms  15728
#define del5ms   5242

#define ENctrl   0x20
#define RSctrl   0x40
#define RWctrl   0x80

#define LCD_DIR  &P1DIR
#define LCD_OUT  &P1OUT
#define LCD_SEL  &P1SEL

#define PB_IN    &P2IN
#define PB_OUT   &P2OUT
#define PB_DIR   &P2DIR
#define PB_SEL   &P2SEL
#define PB_IE    &P2IE
#define PB_IES   &P2IES
#define PB_IFG   &P2IFG

#define PB0      0x01
#define PB1      0x02
#define PB2      0x08
#endif