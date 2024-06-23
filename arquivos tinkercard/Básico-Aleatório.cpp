// C++ code
//
// Nome: Júlia Téles Cruz	RA: 200558	3ºINFD
// Disponível em https://www.tinkercad.com/things/fjlx2zgpqj4

int led = 13;
int x, y;
int numbAleatorio;

void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop()
{
  while(y<1)
  {
    while(x<10)
    {
      // Gera um número aleatório de 50 a 100 
      // Assim:(50 =< numbAleatorio >=100)
      numbAleatorio = random(50,101); 
      Serial.println(numbAleatorio);
      	if(numbAleatorio%2==0)
    	{
          digitalWrite(13, HIGH);
          delay(300);
          digitalWrite(13, LOW);
          delay(300);
        }
      	else
        {
          digitalWrite(13, LOW);
        }

      delay(2000);
      x++;
    }
    Serial.println("ACABOU!");
    digitalWrite(13, LOW);
    y++;
  }


}
