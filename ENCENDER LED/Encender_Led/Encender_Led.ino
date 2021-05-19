void setup() {
  // put your setup code here, to run once:
  //INICIALIZANDO EL PIN DIGITAL 2 como salida
  pinMode(2,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2, HIGH); //se encendera el led
  delay(1000); //tiempo de encendido 1 segundo
  digitalWrite(2, LOW); //se apagara el led
  delay(1000); //tiempo de apagado 1 segundo
  digitalWrite(2, HIGH); //se encendera el led de nuevo
  delay(1000); //tiempo de encendido 1 segundo
  digitalWrite(2, LOW); //se apagara el led
  
}
