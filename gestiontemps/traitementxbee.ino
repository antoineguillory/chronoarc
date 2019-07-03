void traitementxbee()
{
  valxbee = xbeeSerial.read();
     Serial.print("Etat de la batterie ");
     Serial.println('2');
  xbeeSerial.print(2);
  if (valxbee == 56)// ACCIDENT
  {
    if (phase120 == 1) {secondes= 172;}
    if (phase120 == 2) {secondes= 42;}
    if (phase120 == 3) {secondes= 172;}
    if (phase120 == 4) {secondes= 42;}
  }
  
  if (valxbee == 49) // START
  {
    switch (bpstart)
    {
      case 1: 
      bpstart = 0;
      break;
      
      case 0:
      bpstart = 1;
      break;
    }
  }
  
  if (valxbee == 50) // STOP
  {
    if (phase120 == 1) {secondes=142;}
    if (phase120 == 2) {secondes=12;}
    if (phase120 == 3) {secondes=142;}
    if (phase120 == 4) {secondes=12;}
  }
  
  if (valxbee == 52) // PAUSE
  {
    delay (1000);
    while (valxbee != 52)
    {
     valxbee = xbeeSerial.read();
     Serial.print("LA TELECOMMANDE A MIS LE PROGRAMME EN PAUSE");
    }
  }
}


