
/*
Fecha: 19/02/2018

Autor:Amado Ramos Zuñiga .

Nombre de la practica 1: Semaforos con arduino.

Descripcion: Practica que realice el funcionamiento de 2 semaforos: semaforo de peatones y semaforo de carros con
el funcinamiento de tiempo de duracion de cada semaforo utilizando un potenciometro y activando esta funcion presionando
un boton el cual cambiara el estado de los semaforos.

El estado iniciaal sera en encendido el led verde de los carros y encendido el led rojo de los peatones.
*/

int contador=0; // contador para saber si se presiono el boton y que leds prender o apagar.
int valorPot; // saber que valor tiene el potenciometro.
int rapidez; // rapidez que varia con el potenciometro.
int pinPot= A5; // pin donde se encuentra el potenciometro.
int estadoAnt=HIGH; // estado anterior del boton.
void setup() {
  pinMode(11,OUTPUT);  //  Led Rojo Carros
  pinMode(12,OUTPUT);  // Led Amarillo Carros
  pinMode(13,OUTPUT);  // Led verde Carros
   pinMode(8,OUTPUT);  // Led Rojo Peatones
  pinMode(9,OUTPUT);  // Led verde Peatones
  pinMode(4,INPUT_PULLUP); // Botón INPUT_PULLUP

}

void loop() {// loop donde se repetira el codigo que contenga.
   valorPot= analogRead(pinPot); // se toma el valor del potenciometro.
   rapidez = map(valorPot, 0, 70, 0, 500);//se ejecuta la funcion para variar la rapidez o el tiempo del potenciometro.

  estadoAnt=digitalRead(4); // toma el valor del boton.
 
  if((contador==0 && estadoAnt==HIGH)  ){ // decision para poner en verde el semaforo de los carros.
    digitalWrite(13,HIGH); // prender el led verde de los carros
    digitalWrite(8,HIGH); // prender el led Rojo de los peatones
    digitalWrite(9,LOW); // Apagar el led Verde de los peatones.
    
    contador=1;
  }
  
  if((contador==1 && estadoAnt==LOW)  ){// cambir a semaforo en verde de carros a  rojo, para encender el verde del semaforo de peatones. 
    digitalWrite(13,HIGH);// prender el led verde de los carros.
    digitalWrite(8,HIGH);// prender el led rojo de los peatones.
    delay(2000);// tiempo de duracion
    digitalWrite(13,LOW); //apagar el led verde de los carros.
    ///////////////////////////
    //el verde de los carros prenda y apague
    /////////////////////////
    delay(1000);
    digitalWrite(13,HIGH);// prender el led verde de los carros.
    delay(1000);// tiempo de duracion
    digitalWrite(13,LOW);// apagar el led verde de los carros.
    delay(1000);// tiempo de duracion
    digitalWrite(13,HIGH);// prender el led verde de los carros.
    delay(1000);// tiempo de duracion
    digitalWrite(13,LOW);
    delay(1000);// tiempo de duracion.
    ////////////////////////
    digitalWrite(12,HIGH);// prender el led aparillo de los carros
    delay(2000);  //dar tiempo de duracion de prendido al Led amarillo de los carros.
    digitalWrite(8,LOW);// apagar el led rojo de los peatones
    digitalWrite(12,LOW);// apagar el led amarillo de los carros
    digitalWrite(11,HIGH); // prender el Led rojo de los Carros.
    
    if(digitalRead(11)== HIGH){ // decision para aplicar el tiempo de duracion de cambio de un semaforo a otro
    digitalWrite(9,HIGH);// prender el led verde de los peatones.
    delay (rapidez); // se utiliza la variable rapidez para asignar el tiempo de duracion.
    }
    digitalWrite(11,LOW);// apagar el led rojo de los carros.
    contador=0;
  }

  }
