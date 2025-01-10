#include "bad_case.h"

int test1603(int x)
{
	switch(x)
	{
	case 1:
	case 2:
		x++;
		break;
	case 3:	
		x--;
		break;
	default:
		break; // Added break to ensure compliance
	}

	return x;
}

short test0902(int x, int y, short e){
    short buf[ 3 ][ 2 ] = { { 1, 2 }, { 0, 0 }, { 5, 6 } }; // Fixed to comply with MISRA C:2012 Rule 09.02
   buf[x][y] = e;
   return buf[x][y];
}
