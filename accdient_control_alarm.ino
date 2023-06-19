const int RELAY_PIN = 3;
const int irsensorPin = 2;
const int buzzer = 4;

void setup(){
  Serial.begin(9600);
  pinMode(irsensorPin, INPUT);
  pinMode(RELAY_PIN, OUTPUT);
  pinMode(buzzer, OUTPUT);
  }
  
  void loop(){
    int sensorvalue = digitalRead(irsensorPin);
    if(sensorvalue == LOW){
      
      Serial.println("object detected!");
      digitalWrite(buzzer, HIGH);
      delay(500);
      digitalWrite(buzzer, LOW);
      delay(50);
      digitalWrite(buzzer, HIGH);
      delay(1000);
      digitalWrite(buzzer, LOW);
      delay(100);
      digitalWrite(buzzer, HIGH);
      delay(2000);
      digitalWrite(buzzer, LOW);
      delay(200);
      if (sensorvalue == LOW) {
        digitalWrite(RELAY_PIN, LOW);
        digitalWrite(buzzer, LOW);
        }
    }
    else
    {
      digitalWrite(RELAY_PIN, HIGH);
      Serial.println("object not detected");
    }
    digitalWrite(buzzer, LOW);
    delay(200);
    }
  
