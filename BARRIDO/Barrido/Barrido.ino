/*
 * BARRIDO DE LETRAS
 */ 
void setup() {
  // put your setup code here, to run once:
  //DECLARANDO PINES DIGITALES COMO SALIDA 
  for(int i=2; i<19; i++){
    pinMode(i,OUTPUT);
  }
}

//filas voltaje y columnas tierra

void loop() {
  // put your main code here, to run repeatedly:
  for(int filas =2; filas < 10; filas++){ //inicia en 2 por el pin 2 y termina en 9 por el pin 9
    digitalWrite(filas, HIGH); //enciende toda la fila
    for(int col =10; col <18; col ++){
      digitalWrite(col, LOW); //encendiendo el punto [fila,col]
      delay(1000);//encendiendo por un segundo
      //SI ESTA LINEA DE ABAJO SE COMENTA LAS FILAS VAN BAJANDO UNA POR UNA
      digitalWrite(col, HIGH); //se apaga el punto [fila,col] 
    }
    //SI ESTA LINEA DE ABAJO SE COMENTA, SE VAN ENCENDIENDO LAS FILAS SIN APAGARSE HASTA ENCENDER TODA LA MATRIZ
    digitalWrite(filas, LOW); //se apagan las filas
  }
}
