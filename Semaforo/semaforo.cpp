// Código em C++
/*
  O programa pisca os leds embutidos no Arduino
*/

void setup()
{ // Coloca o pino do arduino como saida
  pinMode(13, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() // Estrutura de repetição
{
  // Ligar o LED (HIGH é o nível de tensão)
  digitalWrite(13, HIGH);
  delay(1000); // Aguarde 1000 millisecond(s)
  // Desligue o LED tornando a tensão baixa
  digitalWrite(13, LOW);
  delay(1000); // Aguarde 1000 millisecond(s)
  // Ligar o LED (HIGH é o nível de tensão)
  digitalWrite(10, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  // Desligue o LED tornando a tensão baixa
  digitalWrite(10, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  // Ligar o LED (HIGH é o nível de tensão)
  digitalWrite(8, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  // Desligue o LED tornando a tensão baixa
  digitalWrite(8, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}