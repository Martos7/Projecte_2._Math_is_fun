/*************************************************************************
**                                                                      **
**    Programa 7                                                        **
**                                                                      **
*************************************************************************/
//Raúl Martos

int test = 32767;

void setup()              
{
  Serial.begin(9600);     
  Serial.print("Test value is: ");
  Serial.println(test);

  test = test +1;
 
  Serial.print("Now it is ");
  Serial.println(test);
}

void loop()   
{
}

//L’int compren els números de -32.768 a 32.767 i si li sumem 1 torna a començar desde el principi.  La solución es canviar l’int per un long.

