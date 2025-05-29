#include <Arduino.h>
#include "Tone.h"

int notes[] = {262, 277, 294, 311, 330, 349, 370, 392, 415, 440, 466, 494};
void setup()
{
    Serial.begin(9600);
}

void loop()
{
    int keyval = analogRead(A5);
    Serial.println(keyval);

    if (keyval == 1023)
    {
        tone(8, notes[0]);
    }
    else if (keyval >= 900 && keyval <= 1000)
    {
        tone(8, notes[1]);
    }
    else if (keyval >= 850 && keyval <= 900)
    {
        tone(8, notes[2]);
    }
    else if (keyval >= 760 && keyval <= 850)
    {
        tone(8, notes[3]);
    }
    else if (keyval >= 650 && keyval <= 760)
    {
        tone(8, notes[4]);
    }
    else if (keyval >= 590 && keyval <= 650)
    {
        tone(8, notes[5]);
    }
    else if (keyval >= 500 && keyval <= 590)
    {
        tone(8, notes[6]);
    }
    else if (keyval >= 420 && keyval <= 500)
    {
        tone(8, notes[7]);
    }
    else if (keyval >= 335 && keyval <= 420)
    {
        tone(8, notes[8]);
    }
    else if (keyval >= 250 && keyval <= 335)
    {
        tone(8, notes[9]);
    }
    else if (keyval >= 160 && keyval <= 250)
    {
        tone(8, notes[10]);
    }
    else if (keyval >= 80 && keyval <= 160)
    {
        tone(8, notes[11]);
    }
    else
    {
        noTone(8);
    }
}