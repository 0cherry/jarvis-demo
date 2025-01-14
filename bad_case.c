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
        // Original code had a no-op here with a semicolon
        break;  // Adding a break statement to conform to MISRA C rule 16.3
	}

	return x;
}
