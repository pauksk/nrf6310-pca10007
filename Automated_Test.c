#include "Universal.h"

static uint8_t sent_value=0;
static uint8_t has_recieved_value=0;
static uint8_t wait_treshold=0;

void Test_Compare_Recieved_Value(uint8_t recieved_value) {
	has_recieved_value=true;
	wait_treshold=0;
	
	if(recieved_value == sent_value) {
		sent_value++;
		dataready=1;
		
		if(sent_value>=TEST_MAX_VALUE) {
			GLobal_Test_Mode_Active=false;
			Wait_For_Button_Press(0);
		}
	}
	else {
		dataready=1;
	}
}

uint8_t Check_If_Recieved(void) {
	uint8_t return_value=0;
	
	if(has_recieved_value==false) {
		wait_treshold++;
		return_value=false;
	}
	else {
		wait_treshold=0;
		return_value=true;
		dataready=1;
	}
	
	
	if( wait_treshold>TEST_MAX_WAIT_TRESHOLD ){
		return_value = true;
		dataready=1;
		wait_treshold=0;
	}
	
	has_recieved_value=false;
	
	return return_value;
}

uint8_t Get_Actual_Test_Value(void) {
	dataready=1;
	return sent_value;
}