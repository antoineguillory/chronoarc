void buzzeur()
{
 if (bip1==0 && bip2==0 && bip3==0) digitalWrite(buzz,LOW);
 if (bip1==1) digitalWrite(buzz,HIGH);
 if (bip2==1)
    {
     if ((millis()-temps)<400) digitalWrite(buzz,HIGH);
     if ((millis()-temps)>=400 && (millis()-temps)<600) digitalWrite(buzz,LOW);
     if ((millis()-temps)>=600) digitalWrite(buzz,HIGH);
    }
 if (bip3==1)
    {
     if ((millis()-temps)<200) digitalWrite(buzz,LOW);
     if ((millis()-temps)>=200 && (millis()-temps)<600) digitalWrite(buzz,HIGH);
     if ((millis()-temps)>=600) digitalWrite(buzz,LOW);
    }
}

