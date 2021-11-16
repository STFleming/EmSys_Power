PORT=/dev/ttyUSB0
EMSYS_COMP=~/EmSys/arduino-cli compile --fqbn esp32:esp32:tinypico
EMSYS_UPLOAD=~/EmSys/arduino-cli upload --fqbn esp32:esp32:tinypico

.PHONY: dp_float dp_div offchip freq lightSleep deepSleep switching_activity bounce

bounce: bounce/bounce.ino
		$(EMSYS_COMP) bounce 
		$(EMSYS_UPLOAD) -p $(PORT) bounce 

dp_float: dp_float/dp_float.ino
		$(EMSYS_COMP) dp_float 
		$(EMSYS_UPLOAD) -p $(PORT) dp_float 

dp_div: dp_div/dp_div.ino
		$(EMSYS_COMP) dp_div 
		$(EMSYS_UPLOAD) -p $(PORT) dp_div 

offchip: offchip/offchip.ino
		$(EMSYS_COMP) offchip 
		$(EMSYS_UPLOAD) -p $(PORT) offchip 

freq: freq/freq.ino
		$(EMSYS_COMP) freq 
		$(EMSYS_UPLOAD) -p $(PORT) freq 

lightSleep: lightSleep/lightSleep.ino
		$(EMSYS_COMP) lightSleep 
		$(EMSYS_UPLOAD) -p $(PORT) lightSleep 

deepSleep: deepSleep/deepSleep.ino
		$(EMSYS_COMP) deepSleep 
		$(EMSYS_UPLOAD) -p $(PORT) deepSleep 

switching_activity: switching_activity/switching_activity.ino
		$(EMSYS_COMP) switching_activity 
		$(EMSYS_UPLOAD) -p $(PORT) switching_activity 
