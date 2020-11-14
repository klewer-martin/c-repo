#include <stdio.h>

typedef enum {
	JAN, FEB, MAR, APR, MAY, JUN, JUL, AGO, SEP, OCT, NOV, DEC
} mes_t;

#define JANUARY		"ENERO\n"
#define FEBRUARY	"FEBRERO\n"
#define MARCH 		"MARZO\n"
#define APRIL		"ABRIL\n"
#define MAYO		"MAYO\n"
#define JUNE		"JUNIO\n"
#define JULY		"JULIO\n"
#define AUGUST		"AGOSTO\n"
#define SEPTEMBER	"SEPTIEMBRE\n"
#define OCTOBER		"OCTUBRE\n"
#define NOVEMBER	"NOVIEMBRE\n"
#define DECEMBER	"DICIEMBRE\n"

int main(void) {
	mes_t mes = NOV;
	switch(mes)
	{
		case JAN:
			printf(JANUARY);
			break;
		case FEB:
			printf(FEBRUARY);
			break;
		case MAR:
			printf(MARCH);
			break;
		case APR:
			printf(APRIL);
			break;
		case MAY:
			printf(MAYO);
			break;
		case JUN:
			printf(JUNE);
			break;
		case JUL:
			printf(JULY);
			break;
		case AGO:
			printf(AUGUST);
			break;
		case SEP:
			printf(SEPTEMBER);
			break;
		case OCT:
			printf(OCTOBER);
			break;
		case NOV:
			printf(NOVEMBER);
			break;
		case DEC:
			printf(DECEMBER);
			break;
	}	
	return 0;
}
