void pwm()// dÃ©claration des constantes et des variables
{
 vitesse = (255*Coeffglob)/100;
 vitesse = 255-vitesse; //inverser pour uln2003A
 
 if (vitesse > 255)
 {
   vitesse = 255;
 }
  if (vitesse < 0)
 {
   vitesse = 0;
 }
analogWrite(pwmMot, 0); // générer un signal PWM sur la broche de vitesse du moteur
}

