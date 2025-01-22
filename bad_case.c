#include "bad_case.h"

int test1603(int x)
{
	switch(x)
	{
	case 1:
	case 2:
		x++;
		break;
	default:
        break; /* Added break to comply with MISRA rule */
	}

	return x;
}
