

int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;
int led5 = 9;

void setup () {
  pinMode (led1, OUTPUT); // saída
  pinMode (led2, OUTPUT);
  pinMode (led3, OUTPUT);
  pinMode (led4, OUTPUT);
  pinMode (led5, OUTPUT);
  
}

void loop () {
  
 digitalWrite(led1, HIGH);
  digitalWrite(led4,HIGH);
 delay(3000);
 digitalWrite(led1, LOW);
 digitalWrite(led2, HIGH);
 delay(2000);
 digitalWrite(led2,LOW);
 digitalWrite(led3, HIGH);
 delay(500);
  digitalWrite(led4,LOW);
  digitalWrite(led5, HIGH);
 delay(5000);
 digitalWrite(led3,LOW);
 digitalWrite(led4,HIGH);
 digitalWrite(led5,LOW);
 
}
