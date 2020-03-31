//-----INFO-----
  //Paul McWhorter tutorials
   //New Arduino Tutorial 7
   
  //Date : March 31 2020
  //By   : Grant Kendrick
   //With help from Paul Mcwhorter Tutorial

//-----Variables-----

  //LEDs
int LED1       = 9    ;

  //Brightness Levels
int brightOff  = 0    ;
int bright1    = 10   ;
int bright2    = 50   ;
int bright3    = 75   ;
int bright4    = 100  ;
int bright5    = 125  ;
int bright6    = 175  ;
int bright7    = 200  ;
int bright8    = 225  ;
int brightFull = 255  ;

  //Delay Time
int dy1        = 0500 ;
int dy2        = 2000 ;
int dy3        = 3000 ;
int dy4        = 4000 ;
int dy5        = 5000 ;

//-----Setup-----

void setup() {
  pinMode(LED1, OUTPUT); //Swtting the first LED pin as Output
}

void loop() {
  analogWrite(LED1 , bright1) ;
   delay(dy5)                 ;
   
  analogWrite(LED1 , bright5) ;
   delay(dy5)                 ;
   
  analogWrite(LED1 , bright8) ;
   delay(dy5)                 ;
}
