#include <stdio.h>

#include "file.h"

unsigned char *file_read(const char *filename)
{
	FILE *file = fopen(filename, "rb");

	/* Determine size of the buffer required */
	fseek(file, 0L, SEEK_END);
	long long buffer_size = ftell(file);
	rewind(file);

	/* Allocate buffer and fill it's content */
	unsigned char *buffer = (unsigned char *)malloc(buffer_size + 1);
	fread(buffer, 1, buffer_size, file);
	fclose(file);

	return buffer;
}
