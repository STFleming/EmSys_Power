// Floating point dot-product

#define SIZE 4000
#define ITERS 1000 

// ----------------------- Floating point ---------------------
volatile float a[SIZE];
volatile float c;

void div_stuff() {
   for(int i=0; i<SIZE; i++) {
      c += a[i] / 2.0;
   }    
}

void randomize(){
  for(int i=0; i<SIZE; i++) {
      a[i] = esp_random();
  }
}

// -------------------------------------------------------------


// ----------------------- Fixed point ---------------------
// fixed point format
// taken from : https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/ 
#define FIXED_POINT_FRACTIONAL_BITS 8
inline uint32_t float_to_fixed(float input) {
        return (uint32_t)(input * (1<<FIXED_POINT_FRACTIONAL_BITS));
}

volatile uint32_t a_fixed[SIZE];
volatile uint32_t b_fixed[SIZE];
volatile uint32_t c_fixed;

void div_stuff_fixed() {
   for(int i=0; i<SIZE; i++) {
      c_fixed += a_fixed[i] >> 1;
   }    
}

void randomize_fixed(){
  for(int i=0; i<SIZE; i++) {
      a_fixed[i] = float_to_fixed(esp_random());
  }
}
// -------------------------------------------------------------

void setup(){
   randomize(); 
   randomize_fixed(); 
}

void loop() {
      for(int i=0; i<ITERS/10; i++) {
           div_stuff();
      }

      for(int i=0; i<ITERS; i++) {
           div_stuff_fixed();
      }

}
