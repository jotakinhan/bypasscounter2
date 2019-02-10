/* Include the standard Arduino SPI library */
#include <SPI.h>
/* Include the RFID library */
#include <RFID.h>

#include <MFRC522.h>

/* Define the DIO used for the SDA (SS) and RST (reset) pins. */
#define SDA_DIO 10
#define RESET_DIO 9

/* Create an instance of the RFID library */
RFID RC522(SDA_DIO, RESET_DIO);
 
float x = 0.1; //Counts passers-by
float w = 0; //Checks if x changed by comparing to x, if changed proceeds to add x value to database
int y = 0; //Manages infrared sensors
int z = 0; //Manages infrared sensors
int a = 0; //Manages infrared sensors
int b = 0; //Manages infrared sensors
int q = 0; //Checks if rfid has been recognized, if recognized alters uploaded value

void setup()  {
 
 Serial.begin(115200); //Start serial communication boud rate at 9600
 pinMode(5,INPUT); //Pin 5 as signal input
 pinMode(6,INPUT); //Pin 6 as signal input
 /* Enable the SPI interface */
 SPI.begin(); 
 /* Initialise the RFID reader */
 RC522.init();

}
 
void loop()  {
 while(1)  {
  
   
   
   /* Temporary loop counter */
  byte i;

  /* Check if a card has been detected */
  if (RC522.isCard())
  {
    q=1;
     
  }
   
   

   if(b==1) {

    if(digitalRead(5)==HIGH) {

      if(digitalRead(6)==HIGH) {
        b=0;
      }
      
    }
    
   } else {

    if(a==1) {
      
    } else {

      if(z==1) {
    
       } else {
            if(digitalRead(5)==LOW)  { 
            if(y==1) {
              
            } else {
             x++;
             y=1;
             a=1;
            }
            
           } else {
             y=0;
             a=0;
             b=0;
           }
           
         }
      
    }
    
    
   
   }

   
   
   
   
  if(a==1) {

    if(digitalRead(5)==HIGH) {

      if(digitalRead(6)==HIGH) {
        a=0;
      }
      
    }
    
   } else {

    if(b==1) {
      
    } else {

      if(y==1) {
          
         } else {
            if(digitalRead(6)==LOW)  { 
            if(z==1) {
              
            } else {
             x--;
             z=1;
             b=1;
            }
            
           } else {
             z=0;
             b=0;
             a=0;
           }
           
         }
      
    }

      
    
   } 

   if(x<=0) {
   x=0.1;
   } else {
    
   }
    

   if(x<=0) {
    
   } else {
    if(w==x) {
    
   } else {
    
    if(q==1) {
   
    Serial.print("GET http://one.api.botbook.com/add/g4gQqNpyVXl/?x=");
    Serial.println(x+0.6);
    //If a card has been detected get its serial number 
    RC522.readCardSerial();

    Serial.println("Card detected:");

     //Output the serial number to the UART 
    for(i = 0; i <= 4; i++)
    {
      Serial.print(RC522.serNum[i],HEX);
      Serial.print(" ");
    }
    Serial.println();
    Serial.println();
    q=0;
      
   } else {
    
    Serial.print("GET http://one.api.botbook.com/add/g4gQqNpyVXl/?x=");
    Serial.println(x);
    /*Serial.print("GET http://one.api.botbook.com/add/MmWLlseXldg/?x=");
    Serial.println(x);*/
     
   }
     
    w=x;
   }
   }
  
   
   
   delay(10);
 }
}
