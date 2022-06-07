#include <Wire.h>

int led = 13;                      // LED connected to pin 13
int sound = 10;                     // piezo buzzer connected to pin 10.

void setup() {
    pinMode(led, OUTPUT);           // sets the LED as output
    pinMode(sound, OUTPUT);         // sets the buzzer alarm as output

    Serial.begin(9600);

}

void loop() {
    Serial.print("\tVarme detekteret: "); // Serial.print(mlx.readObjectTempC()); Serial.print(" C"); - SKAL ÆNDRES

    Serial.println();
    delay(500);

    if // (mlx.readObjectTempC() > 30) { - SKAL ÆNDRES

        Serial.print("\t WARNING:");
        digitalWrite(led, HIGH);        // turn the LED on
        tone(sound, 2000, 250);         // play a tone with 1000 Hz for 250 ms
        delay(100);                    // wait for 0,1 seconds
        digitalWrite(led, LOW);         // turn the LED off
        tone(sound, 3000, 250);         // play a tone with 3000 Hz for 250 ms
        delay(100);
    }
    else if // (mlx.readObjectTempC() < 15) { - SKAL ÆNDRES

        Serial.print("\t COLD BEER");
        digitalWrite(led, HIGH);        // turn the LED on
        tone(sound, 1000, 250);         // play a tone with 1000 Hz for 250 ms
        delay(100);                    // wait for 0,1 seconds
        digitalWrite(led, LOW);         // turn the LED off
        tone(sound, 4000, 250);         // play a tone with 4000 Hz for 250 ms
    }
}