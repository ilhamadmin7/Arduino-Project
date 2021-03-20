#define lampuA 2
#define lampuB 3
#define lampuC 4
#define tombolA 5
#define tombolB 6
#define tombolC 7
#define bel 8

void setup() {               
  pinMode(2, OUTPUT);  
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, OUTPUT);

  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH); 
}
   
void loop() {
  if(digitalRead(tombolA)==LOW){    
    digitalWrite(bel,HIGH);
    digitalWrite(lampuA,HIGH);
    delay(500);
    while(!digitalRead(tombolA));
    digitalWrite(bel,LOW);
    digitalWrite(lampuA,LOW);
    }  
  else if(digitalRead(tombolB)==LOW){    
    digitalWrite(bel,HIGH);
    digitalWrite(lampuB,HIGH);
    delay(500);
    while(!digitalRead(tombolB));
    digitalWrite(bel,LOW);
    digitalWrite(lampuB,LOW);
    } 
   else if(digitalRead(tombolC)==LOW){    
    digitalWrite(bel,HIGH);
    digitalWrite(lampuC,HIGH);
    delay(500);
    while(!digitalRead(tombolC));
    digitalWrite(bel,LOW);
    digitalWrite(lampuC,LOW);
    }     
}

