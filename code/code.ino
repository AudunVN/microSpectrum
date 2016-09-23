#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>
#include <Adafruit_GFX.h>
#include <gfxfont.h>
#include <Adafruit_SSD1331.h>

#define BLACK 0x0000
#define BLUE 0x001F
#define CYAN 0x07FF
#define WHITE 0xFFFF

void setup() {
  // GUItool: begin automatically generated code
  AudioInputAnalog         adc1;           //xy=102,276
  AudioAnalyzeRMS          rms1;           //xy=405,20
  AudioAnalyzeFFT256       audioFFT;       //xy=410,299
  AudioAnalyzePeak         peak1;          //xy=411,98
  AudioAnalyzeNoteFrequency notefreq1;      //xy=415,188
  AudioConnection          patchCord1(adc1, notefreq1);
  AudioConnection          patchCord2(adc1, audioFFT);
  AudioConnection          patchCord3(adc1, peak1);
  AudioConnection          patchCord4(adc1, rms1);
  // GUItool: end automatically generated code

  double lastPeakValue = 0;
  double lastRMSValue = 0;
  
}

void loop() {
  /* draw main window graphics */
  void drawRect(uint16_t 0, uint16_t 0, uint16_t 95, uint16_t 10, uint16_t GLC_BLUE);
  void fillRect(uint16_t 1, uint16_t 1, uint16_t 94, uint16_t 9, uint16_t WHITE);
  void drawRect(uint16_t 0, uint16_t 10, uint16_t 95, uint16_t 63, uint16_t GLC_BLUE);
  void fillRect(uint16_t 1, uint16_t 11, uint16_t 94, uint16_t 62, uint16_t BLACK);
  /* draw FFT */
  for(int i = 0; i < 127; i++) {
    
  }
  /* overlay SPACE and Glaceon */
}
