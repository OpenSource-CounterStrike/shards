#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <utils/utils.h>

int main()
{
	printf("Hello world.\n");
	char helloworld[] = "Hello world.";
	file_write("test", (unsigned char *)helloworld, strlen(helloworld));
	unsigned char *result = file_read("test");
	printf("%s", result);
	return 0;
}
