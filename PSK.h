//http://travistidwell.com/jsencrypt/demo/
//http://www.asciitohex.com/
#include <stdint.h>

//#ifndef GLOBAL_DEFINES
//	#define GLOBAL_DEFINES

		#define PrMaster 	0x00112233
		#define PuMaseter 0x00112233

		#define PrSlave 	0x00112233
		#define PuSlave 	0x00112233

			static const uint8_t PSK[16] = 			{ 0x02b, 0x7e, 0x15, 0x16, 0x28, 0xae, 0xd2, 0xa6, 0xab, 0xf7, 0x15, 0x88, 0x09, 0xcf, 0x4f, 0x3c };  
			static const uint8_t IVECTOR[16]	= { 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55 };
//			static uint8_t in_t[16]  = { 'H', 'e',  'l',  'l',  'o',  'S',  't',  'r',  'i',  'n',  'g',  'T',  'e',  's', 't',  0x00 };

			// 0x0A446827293E79245A283C4AB1B12347  //\nDh')>y$Z(<J��#G
			//;0xAA55AA55AA55AA55AA55AA55AA55AA55
