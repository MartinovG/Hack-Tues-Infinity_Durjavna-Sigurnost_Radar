#include <Average.h>

// Reserve space for 10 entries in the average bucket.
// Change the type between < and > to change the entire way the library works.
Average<float> ave(10);

void setup() {
    Serial.begin(9600);
}

void loop() {
    int minat = 0;
    int maxat = 0;

    // Add a new random value to the bucket
    ave.push(60.37413 * pow(map(analogRead(A0), 0, 1023, 0, 5000) / 1000.0,  -1.16));
    Serial.println(ave.mean()+String(';'));

    delay(100);
}
