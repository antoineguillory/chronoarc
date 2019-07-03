void sortiedizaine ()
{
if (Dix == 0)
  {
digitalWrite(Ad,LOW); //zÃ©ro
digitalWrite(Bd,LOW);
digitalWrite(Cd,LOW);
digitalWrite(Dd,LOW);
  }
if (Dix == 1)
  {
digitalWrite(Ad,HIGH); //un
digitalWrite(Bd,LOW);
digitalWrite(Cd,LOW);
digitalWrite(Dd,LOW);
  }
 if (Dix == 2)
  {
digitalWrite(Ad,LOW); //deux
digitalWrite(Bd,HIGH);
digitalWrite(Cd,LOW);
digitalWrite(Dd,LOW);
  }
 if (Dix == 3)
 {
digitalWrite(Ad,HIGH); //trois
digitalWrite(Bd,HIGH);
digitalWrite(Cd,LOW);
digitalWrite(Dd,LOW);
 }
 if (Dix == 4)
 {
digitalWrite(Ad,LOW); //quatre
digitalWrite(Bd,LOW);
digitalWrite(Cd,HIGH);
digitalWrite(Dd,LOW);
 }
 if (Dix == 5)
 {
digitalWrite(Ad,HIGH); //cinq
digitalWrite(Bd,LOW);
digitalWrite(Cd,HIGH);
digitalWrite(Dd,LOW);
 }
 if (Dix == 6)
 {
digitalWrite(Ad,LOW); //six
digitalWrite(Bd,HIGH);
digitalWrite(Cd,HIGH);
digitalWrite(Dd,LOW);
 }
 if (Dix == 7)
 {
digitalWrite(Ad,HIGH); // sept
digitalWrite(Bd,HIGH);
digitalWrite(Cd,HIGH);
digitalWrite(Dd,LOW);
 }
 if (Dix == 8)
 {
digitalWrite(Ad,LOW); // huit
digitalWrite(Bd,LOW);
digitalWrite(Cd,LOW);
digitalWrite(Dd,HIGH);
 }
 if (Dix == 9)
 {
digitalWrite(Ad,HIGH); // neuf
digitalWrite(Bd,LOW);
digitalWrite(Cd,LOW);
digitalWrite(Dd,HIGH);
 }
}

