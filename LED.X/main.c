/* 
 * File:   main.c
 * Author: talash.ganvir
 *
 * Created on 3 December, 2019, 11:45 AM
 */
#include<xc.h>
#pragma config XINST = OFF      // Extended Instruction Set (Disabled)
// CONFIG1H
#pragma config FOSC = HS1       // Oscillator (HS oscillator (Medium power, 4 MHz - 16 MHz))
// CONFIG2H
#pragma config WDTEN = OFF      // Watchdog Timer (WDT disabled in hardware; SWDTEN bit disabled) 
#define _XTAL_FREQ 8000000

void main()
{
    TRISD = 0;
    LATD = 0;

    while (1)
    {
        LATD = 1;
        __delay_ms(500);
        LATD = 0;
        __delay_ms(500);
    }
}