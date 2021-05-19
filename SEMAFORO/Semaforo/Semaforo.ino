/*
 * SEMAFORO, para ver las salidas digitales y un led 
 * el cual se le puede controlar la intensidad con un potenciometro
 */

//creacion de variables para los semaforos de tipo int
int rojo = 5;
int ama = 6;
int verde = 7;

 
void setup() {
  // put your setup code here, to run once:
  //haciendo que los pines esten en modo salida
  pinMode(rojo, OUTPUT);
  pinMode(ama, OUTPUT);
  pinMode(verde, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(verde, HIGH); //Encender el led verde
  delay(4000); //Encendido por 4 segundos
  //PRIMER PARPADEO
  digitalWrite(verde,LOW); //Apagar el verde
  delay(500); //Apagado por medio segundo
  digitalWrite(verde, HIGH); //Volver a encender el led verde
  delay(500); //Apagado por medio segundo
  //SEGUNDO PARPADEO
  digitalWrite(verde,LOW);
  delay(500);
  digitalWrite(verde, HIGH); //Volver a encender el led verde
  delay(500);
  digitalWrite(verde,LOW);

  //ENCENDIENDO LED AMARILLO
  digitalWrite(ama,HIGH); //Encender led amarillo
  delay(2000); //Encendido por 2 segundos
  digitalWrite(ama,LOW); //Apagado el amarillo

  //ENCENDIENDO LED ROJO
  digitalWrite(rojo,HIGH); //Encender led rojo
  delay(3000); //Encendido por 3 segundos
  digitalWrite(rojo,LOW); //Apagar led rojo
}
