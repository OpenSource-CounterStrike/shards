#ifndef UTILS_FILE_H
#define UTILS_FILE_H

unsigned char *file_read(const char *filename);
void file_write(const char *filename, unsigned char *data, long long size);

#endif
