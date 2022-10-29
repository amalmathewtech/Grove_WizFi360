/*
 Grove_WizFi360 example: WizFi360_gpio_control
 
 Connect Anode of LED  to pin number 16 and Cathode of LED  to pin number 15(GND)
 This code blinks led connected to pin number 16 of wizfi360 in every seconds.

  •	Grove_WizFi360-TX: 18th pin of Arduino Mega
  •	Grove_WizFi360-RX: 19th pin of Arduino Mega
  •	Grove_WizFi360-GND: GND pin of Arduino Mega
  •	Grove_WizFi360-VIN: 5V pin of Arduino Mega
  
*/


/* Baudrate */
#define SERIAL_BAUDRATE   115200
#define SERIAL1_BAUDRATE  115200

#define DEBUG true

// Send AT Commands and  print response
String sendData(String command, const int timeout, boolean debug)
{
    String response = "";                                             
    Serial1.print(command);                                          
    long int time = millis();                                      
    while( (time+timeout) > millis())                                 
    {      
      while(Serial1.available())                                      
      {
        char c = Serial1.read();                                     
        response+=c;                                                  
      }  
    }    
    if(debug)                                                        
    {
      Serial.print(response);
    }    
    return response;                                                  
}

void setup() {
  Serial.begin(SERIAL_BAUDRATE);
  Serial1.begin(SERIAL1_BAUDRATE);
  
  sendData("AT+RST\r\n", 2000, DEBUG); 
  sendData("AT\r\n", 1000, DEBUG); 

  sendData("AT+SYSIOSETCFG=16,1,0\r\n", 1000, DEBUG); 
  sendData("AT+SYSGPIODIR=16,1\r\n", 1000, DEBUG); 
}

void loop() {
  // LED blinks every second
  sendData("AT+SYSGPIOWRITE=16,1\r\n", 1000, DEBUG);
  sendData("AT+SYSGPIOWRITE=16,0\r\n", 1000, DEBUG);
}

                  
