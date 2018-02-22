int redCar = 12;  
int yellowCar = 11; 
int greenCar = 10;
int redPed = 7;  
int greenPed = 8;  

int button = 2;  

int displayA = 3;  
int displayB = 4;
int displayC = 5;
int displayD = 1;
int displayE = 6;
int displayF = 9;
int displayG = 13;

void setup(){  
pinMode(redCar, OUTPUT);  
pinMode(yellowCar, OUTPUT); 
pinMode(greenCar, OUTPUT);  
pinMode(redPed, OUTPUT);  
pinMode(greenPed, OUTPUT);

pinMode(button, INPUT);  
digitalWrite(greenCar, HIGH);  
digitalWrite(redPed, HIGH);
    
pinMode(3, OUTPUT);  
pinMode(4, OUTPUT);  
pinMode(5, OUTPUT);  
pinMode(1, OUTPUT);  
pinMode(6, OUTPUT);  
pinMode(9, OUTPUT);  
pinMode(13, OUTPUT);
}

void loop(){  
int state = digitalRead(button);  
  
if(state == HIGH){    
trocaLed();  
    }
}

void trocaLed(){  
digitalWrite(greenCar, LOW);  
digitalWrite(yellowCar, HIGH);   
delay(2000);   
  
digitalWrite(yellowCar, LOW);  
digitalWrite(redCar, HIGH);    
delay(2000);    
  
digitalWrite(redPed, LOW);   
digitalWrite(greenPed, HIGH);  
  
  
  
digitalWrite(displayA, LOW);  
digitalWrite(displayB, LOW);  
digitalWrite(displayC, LOW);  
digitalWrite(displayD, HIGH);  
digitalWrite(displayE, HIGH);  
digitalWrite(displayF, LOW);  
digitalWrite(displayG, LOW);  
delay(1000);  
  
digitalWrite(displayA, LOW);    
digitalWrite(displayB, LOW);  
digitalWrite(displayC, HIGH);  
digitalWrite(displayD, LOW);  
digitalWrite(displayE, HIGH);  
digitalWrite(displayF, HIGH);  
digitalWrite(displayG, LOW);  
delay(1000);
  
digitalWrite(displayA, LOW);   
digitalWrite(displayB, HIGH);  
digitalWrite(displayC, LOW);  
digitalWrite(displayD, LOW);  
digitalWrite(displayE, HIGH);  
digitalWrite(displayF, LOW);  
digitalWrite(displayG,LOW);  
delay(1000);
    
digitalWrite(displayA, LOW);    
digitalWrite(displayB, HIGH);  
digitalWrite(displayC, LOW);  
digitalWrite(displayD, LOW);  
digitalWrite(displayE, LOW);  
digitalWrite(displayF, LOW);  
digitalWrite(displayG, HIGH);  
delay(1000);

digitalWrite(displayA, HIGH);  
digitalWrite(displayB, HIGH);  
digitalWrite(displayC, HIGH);  
digitalWrite(displayD, LOW);  
digitalWrite(displayE, HIGH);  
digitalWrite(displayF, HIGH);  
digitalWrite(displayG, LOW);  
delay(1000);  
  
digitalWrite(displayA, HIGH);    
digitalWrite(displayB, LOW);  
digitalWrite(displayC, LOW);  
digitalWrite(displayD, LOW);  
digitalWrite(displayE, LOW);  
digitalWrite(displayF, LOW);  
digitalWrite(displayG, LOW);  
delay(1000);

  
for(int x=0; x<3; x++){    
digitalWrite(greenPed, HIGH);    
delay(250);    
digitalWrite(greenPed, LOW);    
delay(250);  
}  

 
digitalWrite(redPed, HIGH);  
delay(500);  
digitalWrite(yellowCar, HIGH);  
digitalWrite(redCar, LOW);  
delay(1000);  
digitalWrite(greenCar, HIGH);  
digitalWrite(yellowCar, LOW);
 
  }
  
