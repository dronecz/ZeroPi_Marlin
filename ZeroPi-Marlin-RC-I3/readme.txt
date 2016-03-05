 

 ZeroPi           Stepper Motor
    B+    <---->     black
    B-    <---->     green
    A-    <---->     red
    A+    <---->     blue

Stepper Motor connect to ZeroPi	
 ZeroPi		  Stepper Motor
 SLOT1		<---->	 X Motor
 SLOT2		<---->	 Y Motor
 SLOT3		<---->	 Z Motor
 SLOT4		<---->	 E Motor
 
 MOSFET0 56 <---->	 FAN
 MOSFET1 57 <---->	 END 
 
 pin 31//Rx <---->	 X_STOP_PIN 
 pin 30//Tx <---->	 Y_STOP_PIN
 pin 58//SWCLK <---->	 Z_STOP_PIN

show as in the file pins_ZEROPI.h 