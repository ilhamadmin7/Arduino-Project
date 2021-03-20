#define C 2093
#define D 2349
#define E 2637
#define F 2794
#define G 3136


const int notes[] = {C, D, E, F, G};
const int SPEAKER_PIN = 3;
const int BUTTON_PIN[] = {8, 9, 10, 11, 12};

void setup() {
    pinMode(SPEAKER_PIN, OUTPUT);
    for(int i=0; i<5; i++)
    {
        pinMode(BUTTON_PIN[1], INPUT_PULLUP);
    }
}

void loop() {
    bool mario_tune = true;

    for(int i=0; i<5; i++)
    {
        if(digitalRead(BUTTON_PIN[i] == LOW))
        {
            tone(SPEAKER_PIN, notes[i], 20);
        }
        else
        {
            mario_tune = true;
        }
    }
}
