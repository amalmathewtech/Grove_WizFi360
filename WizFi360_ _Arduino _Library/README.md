## WizFi360 Arduino Library

WIZnet has provided an [**Arduino library**][link-Arduino library and examples for WizFi360] to communicate with the WizFi360 module anda few example sketches that implement basic Wi-Fi applications. 
You can install the WizFi360 library by downloading it as a ZIP file and adding it to your Arduino libraries folder.



This document will guide through a series of steps from configuring development environment to running Arduino
library and examples using the WIZnet's Wi-Fi product - [**WizFi360**][link-wizfi360].


<a name="development_environment_configuration"></a>
## Development environment configuration

To test the WizFi360 Arduino library & examples, the development environment must be configured to use Arduino platform.

Please note that in this guide examples were configured and tested using **Arduino IDE** in **Windows** environment.

Before starting, download and install the Arduino IDE from the link below.

- [Arduino IDE][link-arduino_ide]

####  How to install an Arduino library
* Download from github 
  
  
  Open [**WizFi360 Arduino Library Github page**][link-Arduino library and examples for WizFi360], then you can click on the Clone or download >Download ZIP button to get the library package.
   
   ![chrome_PdAoKzANiy](https://user-images.githubusercontent.com/26376366/198847517-d9d123d1-b1bf-4450-b1ea-b1aa5c5bff1e.png)

* Add the library
  Add ZIP Library  - Since you have downloaded the zip Library, open your Arduino IDE, click on Sketch > Include Library > Add .ZIP Library.
  ![image](https://user-images.githubusercontent.com/26376366/198847664-091e4c5d-b79a-46b2-bf54-73a8e7798ac8.png)

Choose the zip file you just downloaded，and if the library install correct, you will see Library added to your libraries in the notice window. Which means the library is installed successfully.

![image](https://user-images.githubusercontent.com/26376366/198847882-c5f7dcb9-de57-4856-825b-3d5de2d7af5c.png)
* Check
Then let's check if the library install correctly.

When you add a library successfully, there will be a demo in the Example. In this case, click on File > Example > WizFi360 > ScanNetworks to open an example, click on the Verify button, if there's no error, congratulation, the library is installed perfectly.
![image](https://user-images.githubusercontent.com/26376366/198848013-a832a1df-3c23-434f-8ae5-a6e271b16da2.png)

### Example testing
This section will guide through testing with ScanNetworks example as an example using Grove_WizFi360 & Arduino Mega 2560 
![hardware_connection](https://user-images.githubusercontent.com/26376366/198849839-da2f7815-30eb-4fb7-9d54-4715fb1cb2a7.png)


* Connect Arduino Mega 2560 to desktop or laptop using USB type B cable.

* Select the type of Arduino board that you are using by the path: Here we will be using Arduino Mega 2560
 
    Tools --> Board -->Arduino AVR Boards -->Arduino Mega or Arduino 2560
    ![image](https://user-images.githubusercontent.com/26376366/198848639-cde148f3-a091-4178-8fd0-e498489dbf80.png)

* Select the correct serial port you are using by the path: Tools --> Serial Port --> for example, COM10
![image](https://user-images.githubusercontent.com/26376366/198848785-09ef9f80-d4d0-4c7b-a0d2-92dcc9e4a6fd.png)

* Upload the ScanNetworks example code
    When there appears "Done uploading", congratulate you upload successfully.
Below is a screenshot of the ScanNetworks example showing the list of detected networks.
![image](https://user-images.githubusercontent.com/26376366/198848477-0fcc5feb-df2c-47bf-9208-a6fab4e7bd9e.png)


[link-wizfi360]: https://docs.wiznet.io/Product/Wi-Fi-Module/WizFi360
[link-Arduino library and examples for WizFi360]: https://github.com/Wiznet/WizFi360_arduino_library
[link-arduino_ide]: https://www.arduino.cc/en/software
