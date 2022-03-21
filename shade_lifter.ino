const int LED = 9;
int val = 0;

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  val = analogRead(0);
//  val = 0;

  if (val > 600){
    Serial.println("high");
    digitalWrite(LED, HIGH);
  } else {
    Serial.println("low");
    digitalWrite(LED, LOW);
  }

//  Serial.println(val);
//  delay(1000);
//  Serial.print("hello");
//  

//  delay(val);

//  delay(val);
}
