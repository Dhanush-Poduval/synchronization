#ifndef FILE_H
#define FILE_H 
#include <stdio.h>
#include <stdint.h>
#include <stddef.h>

typedef struct {
  FILE *file;
}InputFile;

typedef struct {
  int id;
  const char* filename;
}FileArgs;


int input_file_open(InputFile *input, const char *filename);

int input_file_read(InputFile *input, float *linear, float *angular);


void input_file_close(InputFile *input);


#endif
