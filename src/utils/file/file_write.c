#include <stdio.h>

#include "file.h"

void file_write(const char *filename, unsigned char *data, long long size)
{
	FILE *file = fopen(filename, "wb");

	/* Write data into file. */
	fwrite(data, 1, size, file);
	if (!feof(file))
		perror("Failed to write file"); // TODO: USE LOGGING

	fclose(file);
}
