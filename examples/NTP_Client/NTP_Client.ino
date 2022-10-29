/*
 Grove_WizFi360 example: NTP_Client

  Get the time from a Network Time Protocol (NTP) time server
 
  •	Grove_WizFi360-TX: 18th pin of Arduino Mega
  •	Grove_WizFi360-RX: 19th pin of Arduino Mega
  •	Grove_WizFi360-GND: GND pin of Arduino Mega
  •	Grove_WizFi360-VIN: 5V pin of Arduino Mega

   This code is in the public domain.
  
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

  sendData("AT+CWMODE_CUR=1\r\n", 1000, DEBUG); 
  sendData("AT+CWDHCP_CUR=1,1\r\n", 1000, DEBUG);

  sendData("AT+CWJAP=\"PUT YOUR SSID\",\"PUT YOUR PASSWORD\"\r\n", 5000, DEBUG);        //connect to the WiFi network.
  //sendData("AT+CWJAP=\"SSID\",\"12345678\"\r\n", 5000, DEBUG);        
  sendData("AT+CIPSTA_CUR?\r\n", 3000, DEBUG);
  sendData("AT+CIPSNTPCFG=1,8\r\n", 2000, DEBUG); 
  sendData("AT+CIPSNTPTIME?\r\n", 2000, DEBUG);  // Time in China

}

void loop() {
  
}

                  
