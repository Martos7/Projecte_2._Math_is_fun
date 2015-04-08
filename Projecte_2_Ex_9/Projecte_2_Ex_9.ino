/*************************************************************************
**                                                                      **
**    Programa 9                                                        **
**                                                                      **
*************************************************************************/
//Raúl Martos


float a = 3;
float b = 2;
float d;

void setup()               
{
  Serial.begin(9600);      

  Serial.println("Here is division: ");

  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  
  d = a / b;
 
  Serial.print("a / b = ");
  Serial.println(d);
}

void loop()    // we need this to be here even though its empty
{
}

//No dona 1,5 perque en l’int no están definits els decimals per a que surti 1,5 hem de canviar els int per float.

