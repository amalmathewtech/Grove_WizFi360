## Test Procedure for Grove_WizFi360

Requirements:
* Python 3.4 and newer
* Windows 7 or newer 
* pySerial module must be installed on the system -  refer. https://gist.github.com/amalmathewtech/1e4a11d97bc5d41f21c79aa1f142e390

Hardware Setup :
![image](https://user-images.githubusercontent.com/26376366/198819473-4731ee43-9a25-47c4-835c-3510f44c2e70.png)

* Connect USB to Serial Converter to Computer
* Modify the serial port number in ```grove_wizfi360_at_command_test.py``` python script  
You can use following python script to find your serial port number to ease your work.

Refer - https://github.com/amalmathewtech/quick-reference/blob/main/serial_spotter_py.py

* Run the python script
* If there are some issue with the grove_wizfi360 you will get following message
  ![image](https://user-images.githubusercontent.com/26376366/198819845-074a2b6b-7013-48bd-9e07-ff786af50d56.png)
* 	If you are getting response as below, it indicates test passed.
    ![image](https://user-images.githubusercontent.com/26376366/198819912-42f22e6a-642f-4462-8667-83b765350f08.png)


  

