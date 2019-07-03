void calcul2()
{
  lumiere();
  batterie();
  Coeffbatt = 100*((0.3*Valeur10v)/(Valeur-(0.75*Valeur10v)));
  Coefflum = (100*photocellReading)/(ValeurJour);
  Coeffglob = (Coeffbatt*((Coefflum/2)+50))/100;
  pwm();
}

