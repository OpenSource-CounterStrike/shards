#include <stdio.h>
#include <string.h>

#include <utils/utils.h>

int main()
{
	printf("Hello world.\n");
	char helloworld[] = "Hello world.";
	file_write("test", (unsigned char *)helloworld, strlen(helloworld));
	return 0;
}
