#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <utils/utils.h>

int main()
{
	ivec2 v2;
	v2.x = 2;
	v2.y = 3;
	ivec2 v2_1;
	v2_1.x = 1;
	v2_1.y = 4;
	ivec2v_add(&v2, &v2_1);
	printf("%ld %ld\n", v2.x, v2.d[0]);
	printf("%ld %ld\n", v2.y, v2.d[1]);

	return 0;
}
