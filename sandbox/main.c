#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <utils/utils.h>

int main()
{
	ivec2 v2;
	v2.x = 2;
	v2.y = 3;
	printf("%ld %ld\n", v2.x, v2.dat[0]);
	printf("%ld %ld\n", v2.y, v2.dat[1]);

	return 0;
}
