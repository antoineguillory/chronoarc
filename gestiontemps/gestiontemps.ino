#include <SoftwareSerial.h>
SoftwareSerial xbeeSerial(3,4) ;

  //Variables calcul intensité
  #define photocellPin A0
  int32_t photocellReading;
  #define brocheVbatt 21
  int Valeur;//valeur d'entree de la batterie.
  int Valeur10v = 584;
  int ValeurJour = 975;
  int32_t Coeffbatt;
  int32_t Coefflum;
  int32_t Coeffglob;
  int Test;
  #define pwmMot 2
  int vitesse; // variable de consigne de luminosité
  volatile int nombre=0; // variable comptage nombre d'impulsions
  int rotat;

//Variables buzzer
 #define buzz 13 
 int bip1=0;
 int bip2=0;
 int bip3=0;
 
//Variables gestion temps
   long temps;
   int secondes = 262;
   int volee = 1;
   
// XBEE
  int valxbee;
  int bpstart;
  int phase120;
  int battled;
  
// Variables feu tricolore
  int rouge = 17;
  int orange = 16;
  int vert = 15;
  
// Variables AB CD
  int AB = 20;
  int CD = 19;
  int perm = 18;
  int phase = 1;
  int boutonLocal;
  
//Variables Afficher nombre
  int Au = 34;
  int Bu = 38;
  int Cu = 40;
  int Du = 36;
  int Ad = 50;
  int Bd = 46;
  int Cd = 44;
  int Dd = 48;
  int Ac = 14;
 
 
void setup()
{
   Serial.begin(9600);
   xbeeSerial.begin(9600);  
 //Setup buzzer
   pinMode(buzz,OUTPUT);
   
 //Setup Afficher nombre
   pinMode (Au, OUTPUT); 	
   pinMode (Bu, OUTPUT);	
   pinMode (Cu, OUTPUT);
   pinMode (Du, OUTPUT);
   pinMode (Ad, OUTPUT); 	
   pinMode (Bd, OUTPUT);	
   pinMode (Cd, OUTPUT);
   pinMode (Dd, OUTPUT);
   pinMode (Ac, OUTPUT);
   
 //Setup feu tricolore
   pinMode(rouge, OUTPUT);
   pinMode(orange, OUTPUT);
   pinMode(vert, OUTPUT);
   
 //Setup AB CD
   pinMode(AB, OUTPUT);
   pinMode(CD, OUTPUT);
   pinMode(perm, OUTPUT);
   
  // Setup gestion temps
   temps = millis();
  
 //Setup Intensité lum
 pinMode (brocheVbatt,INPUT);
 pinMode (pwmMot,OUTPUT); // broche pwm Moteur configurée en sortie
 
 //setup xbee
   Serial.println("setup Xbee"); 
   //setXBEE();
   Serial.println("Done");
}

void loop()
{
  if (millis() - temps >= 1000)
  {
   secondes--;
   temps = millis();
   Serial.print("Secondes : ");
   Serial.println(secondes);
  // Serial.print("Volée :");
   //Serial.println(volee);
  }
     calcul();
     ABCD();
     feuTricolore();
     bip();
     buzzeur();
     calcul2();
     traitementxbee();
     phase120_();
    while (secondes == 0)
    {
       traitementxbee();
       Serial.print("Bouton :");
       Serial.println(bpstart);
       digitalWrite(rouge, HIGH);
       digitalWrite(vert, LOW);
       digitalWrite(orange, LOW);
       digitalWrite(buzz,LOW);
       if (bpstart == 1 && volee == 2)
       {
         secondes = 262;
         volee = 1;
       }
       
       if (bpstart == 1 && volee == 1)
       {
         secondes = 262;
         volee = 2;
       }
       bpstart = 0;
    }
}

void setXBEE() { 
 // Serial.println("debut setup xbee");
  xbeeSerial.print("+++");           // positionne le Xbee en mode commande AT:
  delay(1);
  xbeeSerial.print("+++");           // positionne le Xbee en mode commande AT:
  // attend la réponse du Xbee"OK\r"
  char thisByte = 0;
  while (thisByte != '\r') {       // en réalité le programme ne controle que le <CR>
    if (xbeeSerial.available() > 0) {
       Serial.print("test2");
      thisByte = xbeeSerial.read(); 
    }
  }
  Serial.println("configuration AT");
  xbeeSerial.print("ATRE\r");        // configuration usine par defaut
  xbeeSerial.print("ATDL1234\r");    
  xbeeSerial.print("ATMY5678\r");    
  xbeeSerial.print("ATID1107\r");    // adresse du reseau PAN
  xbeeSerial.print("ATCN\r");        // put the radio in data mode:
  Serial.println("end");
} 
