/*************************************************************************
**                                                                      **
**    Programa que escriu "Hellow World" cada segon                     **
**                                                                      **
*************************************************************************/
//Raúl Martos

int drive_gb = 5;
int drive_mb;
void setup()             // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Your HD is "); // Escriu "Your HD is"
  Serial.print(drive_gb);      // Tot seguit escriu el valor de drive_gb
  Serial.println(" GB large."); // Al costat torna a escriure "GB large" i com te un ln lo seguent ho escriura a baix

  drive_mb = 1024 * drive_gb; // Operació a fer

  Serial.print("It can store "); //Escriu "It can store"
  Serial.print(drive_mb); // al costat escriu el resultat de l'operació de dalt
  Serial.println(" Megabytes!"); // I tot seguit escriu "Megabytes!"
}

void loop()     // we need this to be here even though its empty
{
}

