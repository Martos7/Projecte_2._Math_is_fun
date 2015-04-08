/*************************************************************************
**                                                                      **
**    Programa 8                                                        **
**                                                                      **
*************************************************************************/
//Raúl Martos


int drive_gb = 100;
long drive_mb;
long drive_kb=104857600;
long real_drive_mb=100000;
long real_drive_kb=100000000;


void setup()               
{
  Serial.begin(9600);       

  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large.");

  drive_mb = drive_gb;
  drive_mb = drive_mb * 1024;

  Serial.print("In theory, it can store ");
  Serial.print(drive_mb);
  Serial.print(" Megabytes, ");
  Serial.print(drive_kb);
  Serial.println(" Kilobytes.");
  Serial.print ("But it really store ");
  Serial.print(real_drive_mb);
  Serial.print(" Megabytes, ");
 Serial.print(real_drive_kb);
 Serial.println(" Kilobytes.");
 Serial.print("You are missing 4857600 Kilobytes!");
}

void loop()      //we need this to be here even though its empty
{
}


