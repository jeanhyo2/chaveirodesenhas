//chaveiro digispark para armazenamento de senhas


//Configurações---------------------------------------------
#define Senha1 "senha1"
#define Senha2 "senha2"
 
#define LongPressDelay 1000
#define ButtonPin1  0
#define ButtonPin2  2
//----------------------------------------------------------
 
#include <DigiKeyboard.h>
 
void setup() 
{
  //Configurando Pinos dos Botões
  pinMode(2, OUTPUT);
  digitalWrite(2, LOW);
  pinMode(0 ,INPUT_PULLUP);
}
 
void loop() 
{
  DigiKeyboard.sendKeyStroke(0);
 
  if(!digitalRead(0))                     //Botão foi apertado
  {
    DigiKeyboard.delay(LongPressDelay);
    if(!digitalRead(0))                   //Clique Longo
      DigiKeyboard.print(Senha2);
    else                                  //Clique Curto
      DigiKeyboard.print(Senha1);
    DigiKeyboard.delay(500);
  }
 
  DigiKeyboard.delay(10);         
}