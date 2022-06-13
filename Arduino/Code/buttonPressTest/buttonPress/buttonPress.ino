#define LED_PIN 7
#define buttonPin 8

int startPressed = 0;
int endPressed = 0;
int holdTime = 0;
int idleTime = 0;
int buttonState = 0;
int lastButtonState = 0;
int led = 0;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if(buttonState != lastButtonState) {
    Serial.println("mudou Estado!");
    updateState();
  }
  
  lastButtonState = buttonState;
}

void updateState() {
  if (buttonState == HIGH){
    startPressed = millis();
    idleTime = startPressed - endPressed;
    
  } else {
    endPressed = millis();
    holdTime = endPressed - startPressed;

    if (holdTime >=2000 && holdTime < 5000){
      Serial.println("button was held for two seconds");
      digitalWrite(LED_PIN, HIGH);
      Serial.println("Led aceso!");
    } 

    if (holdTime >= 5000){
      Serial.println("Button was held for five seconds");
      digitalWrite(LED_PIN, LOW);
      Serial.println("Led apagado!");
    }
  }
}
