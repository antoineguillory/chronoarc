void phase120_()
{
  if (volee==1 && (secondes <= 262 && secondes > 142)){phase120=1;}
  if (volee==1 && secondes <=142) {phase120=2;}
  if (volee==2 && (secondes <= 262 && secondes > 142)){phase120=3;}
  if (volee==2 && secondes <=142) {phase120=4;}
}

