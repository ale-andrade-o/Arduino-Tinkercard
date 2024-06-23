// C++ code
//
// Nome: Júlia Téles Cruz	RA:200558	3ºINFD
// Disponível em https://www.tinkercad.com/things/6XYWXRQXkqO

int recebido = 0;
int led = 13;

void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop()
{
  if(Serial.available()>0)
  {
    recebido = Serial.read();
    	if(recebido == 'a')
        {
          digitalWrite(led,HIGH);
        } else if (recebido == 'b')
          {
          	digitalWrite(led, LOW);
          }
    	  else
          {
            Serial.write("Caractere inválido: ");
            Serial.write(recebido);
          }
    }
  
}
