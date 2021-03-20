const int BT = 11;
const int LED = 8;

bool LED_ON = false;
bool BT_Ready = true;

void setup() {
    pinMode(BT, INPUT_PULLUP);
    pinMode(LED, OUTPUT);
}

void loop() {
    if(digitalRead(BT) == LOW && BT_Ready)
    {
        if(LED_ON)
        {
            digitalWrite(LED, LOW);
            LED_ON = false;
        }
        else
        {
            digitalWrite(LED, HIGH);
            LED_ON = true;
        }
        BT_Ready = false;
    }
    
    else if(digitalRead(BT) == HIGH && !BT_Ready)
    {
        BT_Ready = true;
    }
    delay(10);
}
