// Can we measure the switching activity of this program?
// author: stf

#define ITERS 12800000

void setup() {

}

volatile unsigned int alpha;

void loop() {

        for(int i=0; i<ITERS; i++) {
                alpha = 0xFFFFFFFF;
                alpha = 0xFFFFFFFF;
        }

        for(int i=0; i<ITERS; i++) {
                alpha = 0xFFFFFFFF;
                alpha = 0;
        }
}

