float a=3;
float b=4;
float h;

void setup ()
{
  
  Serial.begin(9600);     // set up Serial library at 9600 bps

  Serial.println("La hipotenusa es");
  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
 
 h = sqrt( a*a + b*b );
 
 Serial.print("h = ");
 Serial.println(h);
}


void loop()
{

}

