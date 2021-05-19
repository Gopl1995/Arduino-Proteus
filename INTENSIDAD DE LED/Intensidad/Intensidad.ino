/*
 * Cambio de intensidad de luz en un led por medio
 * de un potenciometro
 */

//DECLARAR VARIABLE
int valor = 0; //ciclo util
 
void setup() {
  // put your setup code here, to run once:
pinMode(11,OUTPUT); //pin pwm que sirve para regular intensidades
}

void loop() {
  // put your main code here, to run repeatedly:
//LOS PINES ANALOGOS NO SON NECESARIOS DECLARARLOS COMO SALIDA/ENTRADA
  valor = analogRead(A0)/4.01176; //el numero es la lectura del canal analogo
  analogWrite(11,valor);
}
