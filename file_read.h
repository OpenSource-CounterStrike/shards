#include <stdio.h>

#include "file.h"

unsigned char *file_read(const char *filename)
{
	FILE *file = fopen(filename, "rb");

	/* Determine size of the buffer required */
	if (!fseek(file, 0L, SEEK_END))
		perror("Failed to determine file size"); // TODO: USE LOGGGING
	long long buffer_size = ftell(file);
	if (!buffer_size)
		perror("Failed to determine file size"); // TODO: USE LOGGING
	rewind(file);

	/* Allocate buffer and fill it's content */
	unsigned char *buffer = (unsigned char *)malloc(buffer_size + 1);
	fread(buffer, 1, buffer_size, file);
	if (!feof(file))
		perror("Failed to read file size"); // TODO: USE LOGGING
	fclose(file);

	return buffer;
}
