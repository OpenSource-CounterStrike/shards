#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <utils/utils.h>

int main()
{
	ivec3 v3;
	ivec3s_set(&v3, 2, 3, 4);

	ivec3 v3_1;
	ivec3s_set(&v3_1, 1, 4, 9);

	ivec3v_add(&v3, &v3_1);
	printf("%ld %ld\n", v3.x, v3.d[0]);
	printf("%ld %ld\n", v3.y, v3.d[1]);
	printf("%ld %ld\n", v3.z, v3.d[2]);

	ivec2 v2_1;
	ivec2s_set(&v2_1, 1, 4);
	printf("Mag: %f\n", ivec2_mag(&v2_1));

	return 0;
}
