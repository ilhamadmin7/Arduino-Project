int LEDwhite = 13;
int LEDred = 12;
int LEDgreen = 11;
int LEDblue = 10;
int LEDyellow = 9;
int LEDblink = 8;

void setup() {
  pinMode(LEDwhite, OUTPUT);
  pinMode(LEDred, OUTPUT);
  pinMode(LEDgreen, OUTPUT);
  pinMode(LEDblue, OUTPUT);
  pinMode(LEDyellow, OUTPUT);
  pinMode(LEDblink, OUTPUT);
}

void loop() {
  digitalWrite(LEDwhite, HIGH);
  delay(100);
  digitalWrite(LEDred, HIGH);
  delay(100);
  digitalWrite(LEDgreen, HIGH);
  delay(100);
  digitalWrite(LEDblue, HIGH);
  delay(100);
  digitalWrite(LEDyellow, HIGH);
  delay(100);
  digitalWrite(LEDyellow, LOW);
  delay(50);
  digitalWrite(LEDblue, LOW);
  delay(50);
  digitalWrite(LEDgreen, LOW);
  delay(50);
  digitalWrite(LEDred, LOW);
  delay(50);
  digitalWrite(LEDwhite, LOW);
  delay(50);
}
