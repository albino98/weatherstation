#define WiFi_Logo_width 60
#define WiFi_Logo_height 36
const uint8_t WiFi_Logo_bits[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 0x07, 0x00, 0x00, 0x00,
  0x00, 0x00, 0xE0, 0xFF, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF,
  0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0x00, 0x00, 0x00,
  0x00, 0x00, 0xFE, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF,
  0xFF, 0x03, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00,
  0x00, 0xFF, 0xFF, 0xFF, 0x07, 0xC0, 0x83, 0x01, 0x80, 0xFF, 0xFF, 0xFF,
  0x01, 0x00, 0x07, 0x00, 0xC0, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x0C, 0x00,
  0xC0, 0xFF, 0xFF, 0x7C, 0x00, 0x60, 0x0C, 0x00, 0xC0, 0x31, 0x46, 0x7C,
  0xFC, 0x77, 0x08, 0x00, 0xE0, 0x23, 0xC6, 0x3C, 0xFC, 0x67, 0x18, 0x00,
  0xE0, 0x23, 0xE4, 0x3F, 0x1C, 0x00, 0x18, 0x00, 0xE0, 0x23, 0x60, 0x3C,
  0x1C, 0x70, 0x18, 0x00, 0xE0, 0x03, 0x60, 0x3C, 0x1C, 0x70, 0x18, 0x00,
  0xE0, 0x07, 0x60, 0x3C, 0xFC, 0x73, 0x18, 0x00, 0xE0, 0x87, 0x70, 0x3C,
  0xFC, 0x73, 0x18, 0x00, 0xE0, 0x87, 0x70, 0x3C, 0x1C, 0x70, 0x18, 0x00,
  0xE0, 0x87, 0x70, 0x3C, 0x1C, 0x70, 0x18, 0x00, 0xE0, 0x8F, 0x71, 0x3C,
  0x1C, 0x70, 0x18, 0x00, 0xC0, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x08, 0x00,
  0xC0, 0xFF, 0xFF, 0x1F, 0x00, 0x00, 0x0C, 0x00, 0x80, 0xFF, 0xFF, 0x1F,
  0x00, 0x00, 0x06, 0x00, 0x80, 0xFF, 0xFF, 0x0F, 0x00, 0x00, 0x07, 0x00,
  0x00, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0xF8, 0xFF, 0xFF,
  0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0xFF, 0x01, 0x00, 0x00,
  0x00, 0x00, 0xFC, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF,
  0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFF, 0x1F, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x80, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  };

const uint8_t activeSymbole[] PROGMEM = {
    B00000000,
    B00000000,
    B00011000,
    B00100100,
    B01000010,
    B01000010,
    B00100100,
    B00011000
};

const uint8_t inactiveSymbole[] PROGMEM = {
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00011000,
    B00011000,
    B00000000,
    B00000000
};
#define logo_width 128
#define logo_height 64
static const uint8_t logo[] PROGMEM= {
  0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x01, 
  0xF0, 0x01, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x03, 0xBC, 0x07, 
  0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x03, 0x0E, 0x06, 0x20, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x60, 0x03, 0x06, 0x0E, 0x20, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x30, 0x03, 0x06, 0x06, 0x20, 0x00, 0x18, 0x80, 0x1F, 0x00, 
  0x30, 0x06, 0x03, 0x00, 0x20, 0x00, 0x18, 0xC0, 0x3F, 0x00, 0x30, 0x06, 
  0x03, 0x00, 0x20, 0x00, 0x30, 0xE0, 0x3F, 0x00, 0x10, 0x06, 0x03, 0x00, 
  0x20, 0x00, 0x30, 0xE0, 0x7F, 0x00, 0x18, 0x06, 0x03, 0x00, 0x20, 0x00, 
  0x30, 0xE0, 0x3F, 0x00, 0x18, 0x0C, 0x03, 0x00, 0x20, 0x00, 0x30, 0xE0, 
  0x3F, 0x00, 0x98, 0x0E, 0x03, 0x00, 0x20, 0x00, 0x30, 0xC0, 0x3F, 0x00, 
  0xFC, 0x0F, 0x07, 0x00, 0x20, 0x00, 0x70, 0xC0, 0x1F, 0x00, 0x0C, 0x1C, 
  0x06, 0x00, 0x20, 0x00, 0x78, 0x00, 0x0F, 0x00, 0x0C, 0x18, 0x06, 0x00, 
  0x20, 0x00, 0x6C, 0x00, 0x60, 0x00, 0x06, 0x18, 0x0E, 0x0E, 0x20, 0x00, 
  0x64, 0x00, 0xF8, 0x01, 0x0F, 0x3C, 0xFC, 0x07, 0x20, 0x00, 0x64, 0x00, 
  0xFC, 0x03, 0x0F, 0x78, 0xF8, 0x03, 0x20, 0x00, 0xC2, 0x00, 0xFE, 0x07, 
  0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0xC2, 0x00, 0xFE, 0x07, 0x00, 0x00, 
  0x00, 0x00, 0x20, 0x00, 0xC3, 0x00, 0xFF, 0x0F, 0x00, 0x00, 0x00, 0x00, 
  0x20, 0x00, 0x81, 0x00, 0xFF, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 
  0x01, 0x00, 0xFF, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x20, 0x80, 0x01, 0x1F, 
  0xFF, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x20, 0x80, 0x80, 0x9F, 0xFF, 0x3F, 
  0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0xFF, 0xBF, 0xFF, 0x7F};
