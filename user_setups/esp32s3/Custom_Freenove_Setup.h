// File: Custom_Freenove_Setup.h
// Thông số dành riêng cho mạch Freenove ESP32-S3 2.8" (PSRAM Octal)
#define USER_SETUP_INFO "Freenove_ESP32S3_28"

// 1. CHIP MÀN HÌNH
#define ILI9341_DRIVER
#define TFT_WIDTH  240
#define TFT_HEIGHT 320

// 2. CHÂN KẾT NỐI (Chính xác theo config cũ của bạn)
#define TFT_MISO 13
#define TFT_MOSI 11
#define TFT_SCLK 12
#define TFT_CS   10  
#define TFT_DC   46  
#define TFT_RST  4  

// 3. ĐÈN NỀN
#define TFT_BL   45
#define TFT_BACKLIGHT_ON HIGH

// 4. CHÂN CẢM ỨNG (Trường hợp build custom tích hợp I2C Touch)
#define TOUCH_DRIVER 0x6336 // Chip FT6336
#define TOUCH_SDA 16
#define TOUCH_SCL 15
#define TOUCH_IRQ 17
#define TOUCH_RST 18

// 5. CÁC FONT CHỮ BẮT BUỘC CỦA TFE_eSPI
#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
#define LOAD_FONT6
#define LOAD_FONT7
#define LOAD_FONT8
#define LOAD_GFXFF
#define SMOOTH_FONT

// 6. ÉP XUNG ĐỂ KHÔNG BỊ TRỄ
#define SPI_FREQUENCY  40000000
#define SPI_TOUCH_FREQUENCY  2500000

