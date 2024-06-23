// C++ code
//
// Nome: Júlia Téles Cruz 3ºINFD
// Disponível em https://www.tinkercad.com/things/hYcQvT19PvZ

const int LM35 = A0;
float temperatura;

int ledVermelho = 5;
int ledAmarelo = 4;
int ledVerde = 3;


void setup()
{
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  float valor = analogRead(LM35);
  float tensao = ((valor/1024)*5);
  float temperatura = ((tensao-0.5)/0.01);
  Serial.println(temperatura);
  
  if (temperatura<=25){
  	digitalWrite(ledVerde,HIGH);
    digitalWrite(ledAmarelo,LOW);
    digitalWrite(ledVermelho,LOW);
    
  }else if(temperatura>25 && temperatura<35){
  	digitalWrite(ledVerde,LOW);
    digitalWrite(ledAmarelo,HIGH);
    digitalWrite(ledVermelho,LOW);
    
  }else if(temperatura>=35){
  	digitalWrite(ledVerde,LOW);
    digitalWrite(ledAmarelo,LOW);
    digitalWrite(ledVermelho,HIGH);
    
    tone(9, 698, 140);
    
  }else{
  	Serial.println("Deu erro viu");
  }
  
  delay(1000);
}
