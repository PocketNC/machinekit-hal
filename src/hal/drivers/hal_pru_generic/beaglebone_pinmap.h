#ifndef _BEAGLEBONE_PINMAP_H_
#define _BEAGLEBONE_PINMAP_H_

typedef enum {
  BBB,
  BBAI
} hpg_board_t;

// pruI and pruO
// 0 - pr1_pru0
// 1 - pr1_pru1
// 2 - pr2_pru0
// 3 - pr2_pru1
typedef struct {
    int gpio_pin_num;
    int pruI_pin_num;
    int pruI;
    int pruO_pin_num;
    int pruO;
} bone_pinmap;

// Pin value look up table
// Resulting pin value is computed to match historical hal_pru_generic pin numbering:
//        -1 = Error (unusable pin)
// 000 - 031 = reserved
// 032 - 063 = GPIO bank 0
// 064 - 095 = GPIO bank 1
// 096 - 127 = GPIO bank 2
// 128 - 159 = GPIO bank 3
// 160 - 191 = PRU Direct I/O

const bone_pinmap p8bbb_pins[47] = {
//   GPIO   PRU-In  PRU-Out            Pin  Pad Name
    {  -1,  -1, -1,  -1, -1 },      //  0  <placeholder>
    {  -1,  -1, -1,  -1, -1 },      //  1       GND 
    {  -1,  -1, -1,  -1, -1 },      //  2       GND 
    {  70,  -1, -1,  -1, -1 },      //  3   R9  GPMC_AD6
    {  71,  -1, -1,  -1, -1 },      //  4   T9  GPMC_AD7
    {  66,  -1, -1,  -1, -1 },      //  5   R8  GPMC_AD2
    {  67,  -1, -1,  -1, -1 },      //  6   T8  GPMC_AD3
    {  98,  -1, -1,  -1, -1 },      //  7   R7  GPMC_ADVn_ALE
    {  99,  -1, -1,  -1, -1 },      //  8   T7  GPMC_OEn_REn
    { 101,  -1, -1,  -1, -1 },      //  9   T6  GPMC_BEn0_CLE
    { 100,  -1, -1,  -1, -1 },      // 10   U6  GPMC_WEn
    {  77,  -1, -1, 175,  0 },      // 11   R12 GPMC_AD13
    {  76,  -1, -1, 174,  0 },      // 12   T12 GPMC_AD12
    {  55,  -1, -1,  -1, -1 },      // 13   T10 GPMC_AD9
    {  58,  -1, -1,  -1, -1 },      // 14   T11 GPMC_AD10
    {  79, 175,  0,  -1, -1 },      // 15   U13 GPMC_AD15
    {  78, 174,  0,  -1, -1 },      // 16   V13 GPMC_AD14
    {  59,  -1, -1,  -1, -1 },      // 17   U12 GPMC_AD11
    {  97,  -1, -1,  -1, -1 },      // 18   V12 GPMC_CLK
    {  54,  -1, -1,  -1, -1 },      // 19   U10 GPMC_AD8
    {  95, 173,  1, 173,  1 },      // 20   V9  GPMC_CSn2
    {  94, 172,  1, 172,  1 },      // 21   U9  GPMC_CSn1
    {  69,  -1, -1,  -1, -1 },      // 22   V8  GPMC_AD5
    {  68,  -1, -1,  -1, -1 },      // 23   U8  GPMC_AD4
    {  65,  -1, -1,  -1, -1 },      // 24   V7  GPMC_AD1
    {  64,  -1, -1,  -1, -1 },      // 25   U7  GPMC_AD0
    {  93,  -1, -1,  -1, -1 },      // 26   V6  GPMC_CSn0
    { 118, 168,  1, 168,  1 },      // 27   U5  LCD_VSYNC
    { 120, 170,  1, 170,  1 },      // 28   V5  LCD_PCLK
    { 119, 169,  1, 169,  1 },      // 29   R5  LCD_HSYNC
    { 121, 171,  1, 171,  1 },      // 30   R6  LCD_AC_BIAS_EN
    {  42,  -1, -1,  -1, -1 },      // 31   V4  LCD_DATA14
    {  43,  -1, -1,  -1, -1 },      // 32   T5  LCD_DATA15
    {  41,  -1, -1,  -1, -1 },      // 33   V3  LCD_DATA13
    { 113,  -1, -1,  -1, -1 },      // 34   U4  LCD_DATA11
    {  40,  -1, -1,  -1, -1 },      // 35   V2  LCD_DATA12
    { 112,  -1, -1,  -1, -1 },      // 36   U3  LCD_DATA10
    { 110,  -1, -1,  -1, -1 },      // 37   U1  LCD_DATA8
    { 111,  -1, -1,  -1, -1 },      // 38   U2  LCD_DATA9
    { 108, 166,  1, 166,  1 },      // 39   T3  LCD_DATA6
    { 109, 167,  1, 167,  1 },      // 40   T4  LCD_DATA7
    { 106, 164,  1, 164,  1 },      // 41   T1  LCD_DATA4
    { 107, 165,  1, 165,  1 },      // 42   T2  LCD_DATA5
    { 104, 162,  1, 162,  1 },      // 43   R3  LCD_DATA2
    { 105, 163,  1, 163,  1 },      // 44   R4  LCD_DATA3
    { 102, 160,  1, 160,  1 },      // 45   R1  LCD_DATA0
    { 103, 161,  1, 161,  1 }       // 46   R2  LCD_DATA1
};

const bone_pinmap p9bbb_pins[49] = {
//   GPIO   PRU-In  PRU-Out            Pin  Pad Name
    {  -1,  -1, -1,  -1, -1 },      //  0  <placeholder>
    {  -1,  -1, -1,  -1, -1 },      //  1       GND 
    {  -1,  -1, -1,  -1, -1 },      //  2       GND 
    {  -1,  -1, -1,  -1, -1 },      //  3       3.3V    
    {  -1,  -1, -1,  -1, -1 },      //  4       3.3V    
    {  -1,  -1, -1,  -1, -1 },      //  5       VDD_5V  
    {  -1,  -1, -1,  -1, -1 },      //  6       VDD_5V  
    {  -1,  -1, -1,  -1, -1 },      //  7       SYS_5V  
    {  -1,  -1, -1,  -1, -1 },      //  8       SYS_5V  
    {  -1,  -1, -1,  -1, -1 },      //  9       PWR_BUT 
    {  -1,  -1, -1,  -1, -1 },      // 10   A10 WARMRSTn
    {  62,  -1, -1,  -1, -1 },      // 11   T17 GPMC_WAIT0
    {  92,  -1, -1,  -1, -1 },      // 12   U18 GPMC_BEn1
    {  63,  -1, -1,  -1, -1 },      // 13   U17 GPMC_WPn
    {  82,  -1, -1,  -1, -1 },      // 14   U14 GPMC_A2
    {  80,  -1, -1,  -1, -1 },      // 15   R13 GPMC_A0
    {  83,  -1, -1,  -1, -1 },      // 16   T14 GPMC_A3
    {  37,  -1, -1,  -1, -1 },      // 17   A16 SPI0_CS0
    {  36,  -1, -1,  -1, -1 },      // 18   B16 SPI0_D1
    {  45,  -1, -1,  -1, -1 },      // 19   D17 UART1_RTSn
    {  44,  -1, -1,  -1, -1 },      // 20   D18 UART1_CTSn
    {  35,  -1, -1,  -1, -1 },      // 21   B17 SPI0_D0
    {  34,  -1, -1,  -1, -1 },      // 22   A17 SPI0_SCLK
    {  81,  -1, -1,  -1, -1 },      // 23   V14 GPMC_A1
    {  47, 176,  0,  -1, -1 },      // 24   D15 UART1_TXD
    { 149, 167,  0, 167,  0 },      // 25   A14 MCASP0_AHCLKX
    {  46, 176,  1,  -1, -1 },      // 26   D16 UART1_RXD
    { 147, 165,  0, 165,  0 },      // 27   C13 MCASP0_FSR
    { 145, 163,  0, 163,  0 },      // 28   C12 MCASP0_AHCLKR
    { 143, 161,  0, 161,  0 },      // 29   B13 MCASP0_FSX
    { 144, 162,  0, 162,  0 },      // 30   D12 MCASP0_AXR0
    { 142, 160,  0, 160,  0 },      // 31   A13 MCASP0_ACLKX
    {  -1,  -1, -1,  -1, -1 },      // 32       VADC    
    {  -1,  -1, -1,  -1, -1 },      // 33   C8  AIN4
    {  -1,  -1, -1,  -1, -1 },      // 34       AGND    
    {  -1,  -1, -1,  -1, -1 },      // 35   A8  AIN6
    {  -1,  -1, -1,  -1, -1 },      // 36   B8  AIN5
    {  -1,  -1, -1,  -1, -1 },      // 37   B7  AIN2
    {  -1,  -1, -1,  -1, -1 },      // 38   A7  AIN3
    {  -1,  -1, -1,  -1, -1 },      // 39   B6  AIN0
    {  -1,  -1, -1,  -1, -1 },      // 40   C7  AIN1
    {  52, 176,  0,  -1, -1 },      // 41   D14 XDMA_EVENT_INTR1
    {  39,  -1, -1,  -1, -1 },      // 42   C18 ECAP0_IN_PWM0_OUT
    {  -1,  -1, -1,  -1, -1 },      // 43       GND 
    {  -1,  -1, -1,  -1, -1 },      // 44       GND 
    {  -1,  -1, -1,  -1, -1 },      // 45       GND 
    {  -1,  -1, -1,  -1, -1 },      // 46       GND 
    { 148, 166,  0, 166,  0 },      // 41.1 D13 MCASP0_AXR1
    { 146, 164,  0, 164,  0 }       // 42.1 B12 MCASP0_ACLKR
};


// The 4 GPIO chips that we need for the Pocket NC 
// GPIO chip 2 for p9.15, p8.11, and p8.12
// GPIO chip 3 for p8.15, p8.16, p9.27, p9.28
// GPIO chip 4 for p9.29, p9.30
// GPIO chip 6 for p9.23
//
// hal_pru_generic code supports 4 GPIO ports, so we'll map them as follows:
// 032 - 063 = GPIO chip 2
// 064 - 095 = GPIO chip 3
// 096 - 127 = GPIO chip 4
// 128 - 159 = GPIO chip 6

const bone_pinmap p8ai_pins[47] = {
//   GPIO   PRU-In  PRU-Out            Pin
    {  -1,  -1, -1,  -1, -1 },      //  0 
    {  -1,  -1, -1,  -1, -1 },      //  1 
    {  -1,  -1, -1,  -1, -1 },      //  2 
    {  -1, 170,  2, 170,  2 },      //  3 
    {  -1, 171,  2, 171,  2 },      //  4 
    { 129, 166,  2, 166,  2 },      //  5 
    { 130, 167,  2, 167,  2 },      //  6 
    {  -1, 176,  3, 176,  3 },      //  7 
    {  -1, 180,  2, 180,  2 },      //  8 
    {  -1, 166,  3, 166,  3 },      //  9 
    {  -1, 175,  3, 175,  3 },      // 10  
    {  43, 164,  0, 164,  0 },      // 11  
    {  42, 163,  0, 163,  0 },      // 12  
    {  75, 167,  1, 167,  1 },      // 13  
    {  77, 169,  1, 169,  1 },      // 14  
    {  67, 176,  1, 176,  1 },      // 15  
    {  93, 178,  1, 178,  1 },      // 16  
    {  -1, 175,  2, 175,  2 },      // 17  
    {  73, 165,  1, 165,  1 },      // 18  
    {  74, 166,  1, 166,  1 },      // 19  
    {  -1, 163,  2, 163,  2 },      // 20  
    {  -1, 162,  2, 162,  2 },      // 21  
    {  -1, 169,  2, 169,  2 },      // 22  
    {  -1, 168,  2, 168,  2 },      // 23  
    { 128, 165,  2, 165,  2 },      // 24  
    {  -1, 164,  2, 164,  2 },      // 25  
    {  92, 167,  1, 167,  1 },      // 26  
    {  -1, 177,  1, 177,  1 },      // 27  
    {  -1, 177,  2, 177,  2 },      // 28  
    {  -1, 178,  2, 178,  2 },      // 29  
    {  84, 179,  2, 179,  2 },      // 30
    {  -1, 161,  2, 161,  2 },      // 31  
    {  -1, 172,  2, 172,  2 },      // 32  
    {  -1, 170,  2, 170,  2 },      // 33  
    {  -1, 168,  2, 168,  2 },      // 34  
    {  -1, 169,  2, 169,  2 },      // 35  
    {  -1, 167,  2, 167,  2 },      // 36  
    {  -1, 165,  2, 165,  2 },      // 37  
    {  -1, 166,  2, 166,  2 },      // 38  
    {  -1, 163,  2, 163,  2 },      // 39  
    {  -1, 164,  2, 164,  2 },      // 40  
    {  -1, 161,  2, 161,  2 },      // 41  
    {  -1, 162,  2, 162,  2 },      // 42  
    {  -1, 180,  3, 180,  3 },      // 43  
    {  -1, 160,  2, 160,  2 },      // 44  
    {  -1, 178,  3, 178,  3 },      // 45  
    {  -1, 179,  3, 179,  3 }       // 46  
};

const bone_pinmap p9ai_pins[49] = {
//   GPIO   PRU-In  PRU-Out            Pin  Pad Name
    {  -1,  -1, -1,  -1, -1 },      //  0  <placeholder>
    {  -1,  -1, -1,  -1, -1 },      //  1       GND 
    {  -1,  -1, -1,  -1, -1 },      //  2       GND 
    {  -1,  -1, -1,  -1, -1 },      //  3       3.3V    
    {  -1,  -1, -1,  -1, -1 },      //  4       3.3V    
    {  -1,  -1, -1,  -1, -1 },      //  5       VDD_5V  
    {  -1,  -1, -1,  -1, -1 },      //  6       VDD_5V  
    {  -1,  -1, -1,  -1, -1 },      //  7       SYS_5V  
    {  -1,  -1, -1,  -1, -1 },      //  8       SYS_5V  
    {  -1,  -1, -1,  -1, -1 },      //  9       PWR_BUT 
    {  -1,  -1, -1,  -1, -1 },      // 10   
    {  -1, 174,  2, 174,  2 },      // 11   
    {  96,  -1, -1,  -1, -1 },      // 12   
    {  -1, 175,  2, 175,  2 },      // 13   
    {  89, 174,  1, 174,  1 },      // 14   
    {  44, 165,  0, 165,  0 },      // 15   
    {  90, 175,  1, 175,  1 },      // 16   
    { 145, 169,  3, 169,  3 },      // 17   
    { 144, 168,  3, 168,  3 },      // 18   
    { 131, 162,  1, 162,  1 },      // 19   
    { 132, 161,  1, 161,  1 },      // 20   
    {  35,  -1, -1,  -1, -1 },      // 21   
    {  -1,  -1, -1,  -1, -1 },      // 22   
    { 139,  -1, -1,  -1, -1 },      // 23   
    {  -1,  -1, -1,  -1, -1 },      // 24   
    {  -1, 165,  3, 165,  3 },      // 25   
    {  -1, 177,  1, 177,  1 },      // 26   
    {  79, 171,  1, 171,  1 },      // 27   
    {  81, 173,  3, 173,  3 },      // 28   
    { 107, 171,  3, 171,  3 },      // 29   
    { 108, 172,  3, 172,  3 },      // 30   
    { 106, 170,  3, 170,  3 },      // 31   
    {  -1,  -1, -1,  -1, -1 },      // 32   
    {  -1,  -1, -1,  -1, -1 },      // 33   
    {  -1,  -1, -1,  -1, -1 },      // 34   
    {  -1,  -1, -1,  -1, -1 },      // 35   
    {  -1,  -1, -1,  -1, -1 },      // 36   
    {  -1,  -1, -1,  -1, -1 },      // 37   
    {  -1,  -1, -1,  -1, -1 },      // 38   
    {  -1,  -1, -1,  -1, -1 },      // 39   
    {  -1,  -1, -1,  -1, -1 },      // 40   
    {  -1, 163,  1, 163,  1 },      // 41  
    {  82, 174,  3, 174,  3 },      // 42 
    {  -1,  -1, -1,  -1, -1 },      // 43   
    {  -1,  -1, -1,  -1, -1 },      // 44   
    {  -1,  -1, -1,  -1, -1 },      // 45   
    {  -1,  -1, -1,  -1, -1 },      // 46   
    {  -1,  -1, -1,  -1, -1 },      // 41.1 ???
    {  -1,  -1, -1,  -1, -1 }       // 42.1 ???
};

/*
// The 4 GPIO chips with the most pins on P8 and P9 headers are:
// GPIO chip 3 with 13 pins
// GPIO chip 5 with 12 pins
// GPIO chip 6 with  8 pins
// GPIO chip 7 with 20 pins
//
// hal_pru_generic code supports 4 GPIO ports, so we'll map them as follows:
// 032 - 063 = GPIO chip 3
// 064 - 095 = GPIO chip 5
// 096 - 127 = GPIO chip 6
// 128 - 159 = GPIO chip 7
const bone_pinmap p8ai_pins[47] = {
//   GPIO   PRU-In  PRU-Out            Pin
    {  -1,  -1, -1,  -1, -1 },      //  0 
    {  -1,  -1, -1,  -1, -1 },      //  1 
    {  -1,  -1, -1,  -1, -1 },      //  2 
    {  -1, 170,  2, 170,  2 },      //  3 
    {  -1, 171,  2, 171,  2 },      //  4 
    {  97, 166,  2, 166,  2 },      //  5 
    {  98, 167,  2, 167,  2 },      //  6 
    {  69, 176,  3, 176,  3 },      //  7 
    {  70, 180,  2, 180,  2 },      //  8 
    {  82, 166,  3, 166,  3 },      //  9 
    {  68, 175,  3, 175,  3 },      // 10  
    {  -1, 164,  0, 164,  0 },      // 11  
    {  -1, 163,  0, 163,  0 },      // 12  
    {  43, 167,  1, 167,  1 },      // 13  
    {  45, 169,  1, 169,  1 },      // 14  
    {  35, 176,  1, 176,  1 },      // 15  
    {  61, 178,  1, 178,  1 },      // 16  
    { 146, 175,  2, 175,  2 },      // 17  
    {  41, 165,  1, 165,  1 },      // 18  
    {  42, 166,  1, 166,  1 },      // 19  
    {  94, 163,  2, 163,  2 },      // 20  
    {  93, 162,  2, 162,  2 },      // 21  
    {  -1, 169,  2, 169,  2 },      // 22  
    {  -1, 168,  2, 168,  2 },      // 23  
    {  96, 165,  2, 165,  2 },      // 24  
    {  95, 164,  2, 164,  2 },      // 25  
    {  60, 167,  1, 167,  1 },      // 26  
    { 147, 177,  1, 177,  1 },      // 27  
    { 148, 177,  2, 177,  2 },      // 28  
    { 149, 178,  2, 178,  2 },      // 29  
    {  52, 179,  2, 179,  2 },      // 30
    { 142, 161,  2, 161,  2 },      // 31  
    { 143, 172,  2, 172,  2 },      // 32  
    { 141, 170,  2, 170,  2 },      // 33  
    { 139, 168,  2, 168,  2 },      // 34  
    { 140, 169,  2, 169,  2 },      // 35  
    { 138, 167,  2, 167,  2 },      // 36  
    { 136, 165,  2, 165,  2 },      // 37  
    { 137, 166,  2, 166,  2 },      // 38  
    { 134, 163,  2, 163,  2 },      // 39  
    { 135, 164,  2, 164,  2 },      // 40  
    { 132, 161,  2, 161,  2 },      // 41  
    { 133, 162,  2, 162,  2 },      // 42  
    { 130, 180,  3, 180,  3 },      // 43  
    { 131, 160,  2, 160,  2 },      // 44  
    { 128, 178,  3, 178,  3 },      // 45  
    { 129, 179,  3, 179,  3 }       // 46  
};

const bone_pinmap p9ai_pins[49] = {
//   GPIO   PRU-In  PRU-Out            Pin  Pad Name
    {  -1,  -1, -1,  -1, -1 },      //  0  <placeholder>
    {  -1,  -1, -1,  -1, -1 },      //  1       GND 
    {  -1,  -1, -1,  -1, -1 },      //  2       GND 
    {  -1,  -1, -1,  -1, -1 },      //  3       3.3V    
    {  -1,  -1, -1,  -1, -1 },      //  4       3.3V    
    {  -1,  -1, -1,  -1, -1 },      //  5       VDD_5V  
    {  -1,  -1, -1,  -1, -1 },      //  6       VDD_5V  
    {  -1,  -1, -1,  -1, -1 },      //  7       SYS_5V  
    {  -1,  -1, -1,  -1, -1 },      //  8       SYS_5V  
    {  -1,  -1, -1,  -1, -1 },      //  9       PWR_BUT 
    {  -1,  -1, -1,  -1, -1 },      // 10   
    {  -1, 174,  2, 174,  2 },      // 11   
    {  -1,  -1, -1,  -1, -1 },      // 12   
    {  -1, 175,  2, 175,  2 },      // 13   
    {  57, 174,  1, 174,  1 },      // 14   
    {  -1, 165,  0, 165,  0 },      // 15   
    {  58, 175,  1, 175,  1 },      // 16   
    { 113, 169,  3, 169,  3 },      // 17   
    { 112, 168,  3, 168,  3 },      // 18   
    {  99, 162,  1, 162,  1 },      // 19   
    { 100, 161,  1, 161,  1 },      // 20   
    {  -1,  -1, -1,  -1, -1 },      // 21   
    {  83,  -1, -1,  -1, -1 },      // 22   
    { 107,  -1, -1,  -1, -1 },      // 23   
    {  79,  -1, -1,  -1, -1 },      // 24   
    {  81, 165,  3, 165,  3 },      // 25   
    {  78, 177,  1, 177,  1 },      // 26   
    {  47, 171,  1, 171,  1 },      // 27   
    {  49, 173,  3, 173,  3 },      // 28   
    {  -1, 171,  3, 171,  3 },      // 29   
    {  -1, 172,  3, 172,  3 },      // 30   
    {  -1, 170,  3, 170,  3 },      // 31   
    {  -1,  -1, -1,  -1, -1 },      // 32   
    {  -1,  -1, -1,  -1, -1 },      // 33   
    {  -1,  -1, -1,  -1, -1 },      // 34   
    {  -1,  -1, -1,  -1, -1 },      // 35   
    {  -1,  -1, -1,  -1, -1 },      // 36   
    {  -1,  -1, -1,  -1, -1 },      // 37   
    {  -1,  -1, -1,  -1, -1 },      // 38   
    {  -1,  -1, -1,  -1, -1 },      // 39   
    {  -1,  -1, -1,  -1, -1 },      // 40   
    {  84, 163,  1, 163,  1 },      // 41  
    {  50, 174,  3, 174,  3 },      // 42 
    {  -1,  -1, -1,  -1, -1 },      // 43   
    {  -1,  -1, -1,  -1, -1 },      // 44   
    {  -1,  -1, -1,  -1, -1 },      // 45   
    {  -1,  -1, -1,  -1, -1 },      // 46   
    {  -1,  -1, -1,  -1, -1 },      // 41.1 ???
    {  -1,  -1, -1,  -1, -1 }       // 42.1 ???
};
*/

#endif
