#include "esp32-hal-cpu.h"

#define ITERS 800000

void setup() {
}

volatile int alpha = 0;

void loop () {

        // ----------- 240MHz -------------
        setCpuFrequencyMhz(240);
        for(int i=0; i<ITERS; i++) {
                alpha = 0xFFFFFFFF;
                alpha = 0;
        }


        // ----------- 120MHz -------------
        setCpuFrequencyMhz(120);
        for(int i=0; i<ITERS; i++) {
                alpha = 0xFFFFFFFF;
                alpha = 0;
        }

        // ----------- 80MHz -------------
        setCpuFrequencyMhz(80);
        for(int i=0; i<ITERS; i++) {
                alpha = 0xFFFFFFFF;
                alpha = 0;
        }

        // ----------- 40MHz -------------
        setCpuFrequencyMhz(40);
        for(int i=0; i<ITERS; i++) {
                alpha = 0xFFFFFFFF;
                alpha = 0;
        }

        // ----------- 20MHz -------------
        setCpuFrequencyMhz(20);
        for(int i=0; i<ITERS; i++) {
                alpha = 0xFFFFFFFF;
                alpha = 0;
        }

        // ----------- 10MHz -------------
        setCpuFrequencyMhz(10);
        for(int i=0; i<ITERS; i++) {
                alpha = 0xFFFFFFFF;
                alpha = 0;
        }
}
