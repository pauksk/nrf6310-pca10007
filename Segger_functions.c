#include "Universal.h"
#include <stdio.h>
#include <stdint.h>
#include "SEGGER_RTT.h"

void Segger_write_hex_value(uint8_t value) {
	static uint8_t previous_value;
	char str[20];
	int count;

	if( value != previous_value) {
		count = sprintf(str, "Value: 0x%02xh\n", value);
		if(count == 0 ) {
			SEGGER_RTT_WriteString(0, "Couldnt write to string.\n");
		}
		else {
			SEGGER_RTT_WriteString(0, str);
		}
		previous_value = value;
	}
}

void Segger_write_one_hex_value(uint8_t value) {
	char str[20];
	int count;

	count = sprintf(str, "0x%02xh ", value);
	if(count == 0 ) {
		SEGGER_RTT_WriteString(0, "Couldnt write to string.\n");
	}
	else {
		SEGGER_RTT_WriteString(0, str);
	}
}

void Segger_write_one_hex_value_32(uint32_t value) {
	char str[20];
	int count;

	count = sprintf(str, "0x%08xh ", value);
	if(count == 0 ) {
		SEGGER_RTT_WriteString(0, "Couldnt write to string.\n");
	}
	else {
		SEGGER_RTT_WriteString(0, str);
	}
}

void Segger_write_string(const char *string) {
	SEGGER_RTT_WriteString(0, string);
}

void Segger_write_string_value(const char *string, uint8_t value){
		Segger_write_string(string);
		Segger_write_one_hex_value(value);
		Segger_write_string("\n");
}
