int Cent;
int Dix;
int Unit;
int nb;
void calcul()
{
 if (secondes <= 262 && secondes >=253)
 {
   nb = secondes-252;
 } 
 if (secondes <= 252 && secondes >132)
 {
   nb = secondes - 132;
 }
 if (secondes <= 132 && secondes > 122)
 {
   nb = secondes-122;
 }
 if (secondes <= 122 && secondes >=2)
 {
   nb = secondes - 2;
 }
 if (secondes == 1 || secondes == 0)
 {
   nb = 0;
 }
Cent = nb/100;
Dix = (nb%100)/10;
Unit = (nb%10);
Serial.print(Cent);
Serial.print(" - ");
Serial.print(Dix);
Serial.print(" - ");
Serial.println(Unit);
sortieunit();
sortiedizaine();
sortiecentaine();
}

