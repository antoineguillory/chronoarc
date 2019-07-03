void sortieunit ()
{
if (Unit == 0)
  {
digitalWrite(Au,LOW); //zÃ©ro
digitalWrite(Bu,LOW);
digitalWrite(Cu,LOW);
digitalWrite(Du,LOW);
  }
if (Unit == 1)
  {
digitalWrite(Au,HIGH); //un
digitalWrite(Bu,LOW);
digitalWrite(Cu,LOW);
digitalWrite(Du,LOW);
  }
 if (Unit == 2)
  {
digitalWrite(Au,LOW); //deux
digitalWrite(Bu,HIGH);
digitalWrite(Cu,LOW);
digitalWrite(Du,LOW);
  }
 if (Unit == 3)
 {
digitalWrite(Au,HIGH); //trois
digitalWrite(Bu,HIGH);
digitalWrite(Cu,LOW);
digitalWrite(Du,LOW);
 }
 if (Unit == 4)
 {
digitalWrite(Au,LOW); //quatre
digitalWrite(Bu,LOW);
digitalWrite(Cu,HIGH);
digitalWrite(Du,LOW);
 }
 if (Unit == 5)
 {
digitalWrite(Au,HIGH); //cinq
digitalWrite(Bu,LOW);
digitalWrite(Cu,HIGH);
digitalWrite(Du,LOW);
 }
 if (Unit == 6)
 {
digitalWrite(Au,LOW); //six
digitalWrite(Bu,HIGH);
digitalWrite(Cu,HIGH);
digitalWrite(Du,LOW);
 }
 if (Unit == 7)
 {
digitalWrite(Au,HIGH); // sept
digitalWrite(Bu,HIGH);
digitalWrite(Cu,HIGH);
digitalWrite(Du,LOW);
 }
 if (Unit == 8)
 {
digitalWrite(Au,LOW); //huit
digitalWrite(Bu,LOW);
digitalWrite(Cu,LOW);
digitalWrite(Du,HIGH);
 }
 if (Unit == 9)
 {
digitalWrite(Au,HIGH); //neuf
digitalWrite(Bu,LOW);
digitalWrite(Cu,LOW);
digitalWrite(Du,HIGH);
 }
}

