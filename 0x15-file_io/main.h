#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/* prototypes */
ssize_t read_textfile(const char *filename, size_t letters);

/* helpers */
int free_and_return(char *buffer, int fd);

#endif
