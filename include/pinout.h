/* ======= Teensy 4.1 PIN assignment ======== */
#define UART_DISP Serial1

#define BAND_A 2
#define BAND_B 3
#define BAND_C 4
#define BAND_D 5
#define ONE_WIRE_BUS 6
#define CAT_RX 7
#define CAT_TX 8
#define GPIO_O9 9
#define ANT2 10
#define ANT_RXTX 11
#define RF_IN 12
#define GPIO_13 13
#define IN_REF A0
#define IN_FWD A1
#define VCC A3
#define ID A2
#define ROTARY_POS A4
#define NTC1 A5
#define NTC2 A6
#define BAND_V A7
#define FAN_1 22
#define FAN_2 23

//#define I2C_SCL 24
//#define I2C_SDA 25
#define PTT_SENSE 26
#define INT_PROT 27
#define ESP_TX 28
#define ESP_RX 29
#define CAN_RX 30
#define CAN_TX 31
#define Relay_1 32
#define PROT_OUT 33
//#define BIAS_ON 34
const int BIAS_ON = 34;
#define INT_ANT 35
//#define INT_IN 36
const int INT_IN = 36;
#define INT_LPF 37
#define ANT_REF A14
#define ANT_FWD A15
#define LPF_REF A16
#define LPF_FWD A17