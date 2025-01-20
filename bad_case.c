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
        ;   // No action needed, but still requires a break statement
        break;
	}

	return x;
}
