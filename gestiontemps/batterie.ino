void batterie()
{
  Valeur = analogRead(A1);
 // if (Valeur <= 642 && Valeur >=0)   battled = '1';  // valeur 642 pour 11v
 // if (Valeur <= 700 && Valeur >642)  battled = '2';  // rappel valeur 584 pour 10V
 // if (Valeur >700)                   battled = '3'; // valeur 700 pour 12v
 battled = 2;
 }  


