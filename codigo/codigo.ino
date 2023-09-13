int sinaldosensor = 5; // o  pino digital 5 receberá o sinal do sensor como entrada

void setup() {
  // put your setup code here, to run once:
  pinMode(sinaldosensor, INPUT); // declarando o sinal do sensor como entrada do arduino
}

void loop() {
  // put your main code here, to run repeatedly:
  while(digitalRead(sinaldosensor)==HIGH) { // enquanto o sinal do sensor for 'alto' 
      for(int freq = 500; freq<2000; freq+=1){ // a gente liga o alarme atraves da funçao tone, e vamos alterando a frequencia
      tone(8, freq);
      delay(6);
      }
    }
   noTone(8);
}
