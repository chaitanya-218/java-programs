#include <pic18f4550.h>
#include<stdio.h>

#define LCD_EN LATAbits.LA1
#define LCD_RS LATAbits.LA0
#define LCDPORT LATB


void lcd_delay(unsigned int time)
{
 unsigned int i , j ;

    for(i = 0; i < time; i++)
    {
            for(j=0;j<100;j++);
    }
}


void SendInstruction(unsigned char command)
{
     LCD_RS = 0;		// RS low : Instruction
     LCDPORT = command;
     LCD_EN = 1;		// EN High
     lcd_delay(10);
     LCD_EN = 0;		// EN Low; command sampled at EN falling edge
     lcd_delay(10);
}

void SendData(unsigned char lcddata)
{
     LCD_RS = 1;		// RS HIGH : DATA
     LCDPORT = lcddata;
     LCD_EN = 1;		// EN High
     lcd_delay(10);
     LCD_EN = 0;		// EN Low; data sampled at EN falling edge
     lcd_delay(10);
}

void InitLCD(void)
{
    ADCON1 = 0x0F;
    TRISB = 0x00; //set data port as output
    TRISAbits.RA0 = 0; //RS pin
    TRISAbits.RA1 = 0; // EN pin

    SendInstruction(0x38);      //8 bit mode, 2 line,5x7 dots
    SendInstruction(0x06);	// entry mode
    SendInstruction(0x0C);	//Display ON cursor OFF
    SendInstruction(0x01);      //Clear display
    SendInstruction(0x80);      //set address to 1st line
    
}
/****************************************/

unsigned char *String1 = "Microembedded";
unsigned char *String2 = "PIC-18F Board";

void main(void)
{
    ADCON1 = 0x0F;
    TRISB = 0x00;       //set data port as output
    TRISAbits.RA0 = 0;  //RS pin
    TRISAbits.RA1 = 0;  // EN pin

    SendInstruction(0x38);      //8 bit mode, 2 line,5x7 dots
    SendInstruction(0x06);      // entry mode
    SendInstruction(0x0C);      //Display ON cursor OFF
    SendInstruction(0x01);      //Clear display
    SendInstruction(0x80);      //set address to 1st line

 while(*String1)
 {
  SendData(*String1);
  String1++;
 }

 SendInstruction(0xC0);      //set address to 2nd line
 while(*String2)
 {
  SendData(*String2);
  String2++;
 }

 while(1);
 
}




/*


Theory:

Temperature Sensor: A temperature sensor is a device that measures temperature. It can be an analog sensor that outputs a voltage proportional to the temperature or a digital sensor that communicates the temperature value digitally.

ADC (Analog-to-Digital Converter): The ADC converts an analog voltage (from the temperature sensor) into a digital value that can be processed by the microcontroller. In this example, the ADC is configured to read the analog input signal from the temperature sensor.

LCD (Liquid Crystal Display): The LCD is used to display the temperature value. It is a popular output device that can display characters and graphical symbols. The code initializes the LCD module and provides functions to send instructions and data to display text.

Initialization: The InitLCD() function initializes the LCD module, configuring it for 8-bit mode, 2 lines, and 5x7 dots. It also clears the display and sets the address to the first line. The InitADC() function initializes the ADC module, setting the analog input pin (AN0) and configuring the acquisition time and conversion clock.

Reading ADC: The ReadADC() function starts the ADC conversion and waits for it to complete. It then returns the ADC result, which represents the analog voltage from the temperature sensor.

Displaying Temperature: The DisplayTemperature() function takes the ADC value, converts it to a temperature value, and formats it into a string. It then sends the string to the LCD using the SendData() function to display the temperature on the LCD.

Main Loop: The main() function initializes the LCD and ADC modules. It enters an infinite loop where it reads the ADC value, displays the temperature on the LCD, and repeats the process continuously.

This program demonstrates the basic concept of temperature sensor interfacing using ADC and displaying the temperature on an LCD. You may need to modify the code depending on the specific temperature sensor and microcontroller you are using

LCD Functions:

lcd_delay(unsigned int time): This function introduces a delay of time units by running nested loops. It acts as a delay function for the LCD operations.
SendInstruction(unsigned char command): Sends an instruction to the LCD module. It sets the RS pin low (for instruction mode), sends the command to the LCDPORT, sets the EN pin high, introduces a delay, sets the EN pin low, and introduces another delay.
SendData(unsigned char lcddata): Sends data to the LCD module. It sets the RS pin high (for data mode), sends the data to the LCDPORT, sets the EN pin high, introduces a delay, sets the EN pin low, and introduces another delay.
InitLCD(void): Initializes the LCD module. It configures the ADC, sets the data port (TRISB) as output, sets the RS and EN pins (TRISAbits) as output, and sends a sequence of instructions to configure the LCD for operation.


Main Function:

The main function starts by initializing the ADC and configuring the TRISB and TRISAbits for the LCD.
It then sends a series of instructions to initialize the LCD, including setting it to 8-bit mode, configuring the entry mode, turning on the display, clearing the display, and setting the address to the first line.
The first string, "Microembedded," is sent to the LCD line by line using the SendData function.
The address is set to the second line (SendInstruction(0xC0)), and the second string, "PIC-18F Board," is sent to the LCD in the same manner.
The program then enters an infinite loop (while(1)) to keep the display on.


*/
