#include <Keyboard.h> //Librería para envíar keypresses
char myString[] = "Mas projectos interesantes en el Blog del Agente 404\nagente404.com\n\nVISITANOS!"; //String que vamos a escribir

// Solo caracteres del layout ANSI-US

void setup() {
  pinMode(16, INPUT_PULLUP); //Declaramos el pin 16 como entrada
  Keyboard.begin(); //Iniciamos la librería de teclado
}

void loop() {
  if (digitalRead(16) == LOW) { //Si pulsamos la tecla
    
    for(int i = 0; i < sizeof(myString); i++){ //Recorremos el string
      Keyboard.print(myString[i]); // Imprimimos el caracter
      delay(25); //Esperamos 25ms para que parezca que se escribe
    }    
  }
  
  delay(100); //Añadimos un delay para evitar pulsaciones duplicadas
}
