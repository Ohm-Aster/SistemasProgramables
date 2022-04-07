//zona de variables globales
int pines[] = {2, 3, 4, 5, 6, 7};  //declaro una matriz con los numeros de pines a usar
int contador = 0;                  //Una variable contador
int tiempo = 100;                  //Una variable guarda el tiempo de activacion de los pines

void setup(){
  for (contador=0; contador<6; contador++) {    //Uso un for para declarar todos los pines
    pinMode(pines[contador], OUTPUT); }       
}
 void loop() {
  for (contador =0; contador <6; contador ++) { //Uso un for para encender leds conectados
   digitalWrite(pines [contador], HIGH);        //a los pines, y uso una matriz para acceder
   delay(tiempo);                               //a ellos secuencialmente
   digitalWrite(pines [contador], LOW);
   delay(tiempo);
  }
  for (contador =5; contador >=0; contador --) {
   digitalWrite(pines [contador], HIGH);
   delay(tiempo);
   digitalWrite(pines [contador], LOW);
   delay(tiempo);
  }
}
