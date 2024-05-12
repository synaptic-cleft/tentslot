void song(int buzzerPin){
  
  tone(buzzerPin, 2217);
  delay(35);
  noTone(buzzerPin);

  tone(buzzerPin, 2349);
  delay(35);
  noTone(buzzerPin);

  tone(buzzerPin, 2489);
  delay(35);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(81);
  noTone(buzzerPin);

  tone(buzzerPin, 1865);
  delay(35);
  noTone(buzzerPin);

  tone(buzzerPin, 2960);
  delay(47);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(23);
  noTone(buzzerPin);

  tone(buzzerPin, 1109);
  delay(35);
  noTone(buzzerPin);

  tone(buzzerPin, 2217);
  delay(35);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(81);
  noTone(buzzerPin);

  tone(buzzerPin, 1480);
  delay(35);
  noTone(buzzerPin);

  tone(buzzerPin, 1865);
  delay(35);
  noTone(buzzerPin);

  tone(buzzerPin, 2960);
  delay(35);
  noTone(buzzerPin);

  tone(buzzerPin, 1109);
  delay(35);
  noTone(buzzerPin);

  tone(buzzerPin, 1175);
  delay(47);
  noTone(buzzerPin);

  tone(buzzerPin, 1245);
  delay(35);
  noTone(buzzerPin);
}

void setup() {
  // put your setup code here, to run once:
  // call the song function with digital pin
  song(11);
}

void loop() {
  // put your main code here, to run repeatedly:
}