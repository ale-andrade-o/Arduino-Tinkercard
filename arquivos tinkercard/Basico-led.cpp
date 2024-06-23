// C++ code
//
// Disponível em https://www.tinkercad.com/things/bIgoD6UlUMa-aula-2-exemplo-1/editel?sharecode=auFu-KTIaQEKkxRzH5sf129vZkEdk00mP8jCjKwzMD0

int led = 13;
int time = 0;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  if(time<10)
  {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(300);
    digitalWrite(LED_BUILTIN, LOW);
  	delay(300);
    time++;
  }
  else
  {
    digitalWrite(LED_BUILTIN, HIGH);
  }
  
}
