 void ABCD ()
    {
      if ( (secondes <= 262 && secondes >= 132) && (volee == 1) )
      {
         digitalWrite(AB, HIGH);
         digitalWrite(CD, LOW);
      }
       if ((secondes < 132 && secondes >=0) && (volee ==1) )
      {
         digitalWrite(AB, LOW);
         digitalWrite(CD, HIGH);
      }
       if ( (secondes <= 262 && secondes >= 132) && (volee == 2) )
      {
         digitalWrite(AB, LOW);
         digitalWrite(CD, HIGH);
      }
       if (secondes < 132 && secondes >=0 && (volee == 2) )
      {
         digitalWrite(AB, HIGH);
         digitalWrite(CD, LOW);
      }
    }


