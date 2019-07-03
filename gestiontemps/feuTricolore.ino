     void feuTricolore ()
    {
     if ( (secondes <= 252 && secondes > 162) || (secondes <= 122 && secondes >= 32) )
     {
     digitalWrite(rouge, LOW);
     digitalWrite(vert, HIGH);
     digitalWrite(orange, LOW);
     }
     if ( (secondes <= 162 && secondes >=131 ) || (secondes <= 32 && secondes >=3) )
     {  
     digitalWrite(rouge, LOW); 
     digitalWrite(vert, LOW);
     digitalWrite(orange, HIGH);
     }
     if ( (secondes <= 132 && secondes >= 122) || (secondes > 252) || (secondes < 3))
     {  
     digitalWrite(rouge, HIGH); 
     digitalWrite(vert, LOW);
     digitalWrite(orange, LOW);
     }
    }


