void bip()
{
  if (secondes ==262) bip2=1;
  if (secondes ==261) bip2=0;
  if (secondes ==252) bip1=1;
  if (secondes ==251) bip1=0;
  if (secondes ==132) bip2=1;
  if (secondes ==131) bip2=0;
  if (secondes ==122) bip1=1;
  if (secondes ==121) bip1=0;
  if (secondes ==2) bip2=1;
  if (secondes ==1) 
  {
    bip2=0;
    bip3=1;
  }
  if (secondes ==0)
   {
    bip3=0;
   }
}

