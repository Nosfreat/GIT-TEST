
#include "LED.h"
#include "KEYBOARD.h"


int main (){
	LedInit();
	KeyboardInit();
	while(1){
		Delay(200);
		switch (eReadButton()) {
			case BUTTON_1:
				LedStepRight();
				break;
			case BUTTON_2:
				LedStepLeft();
				break;
			default:
				break;
		
		}
	}
}
