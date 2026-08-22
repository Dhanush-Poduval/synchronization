#include <stdio.h>
#include <stddef.h>
#include "read_file.h"
int input_file_open(InputFile *input, const char *filename)
{
    input->file = fopen(filename, "r");

    if (input->file == NULL) {
        perror("Failed to open input file");
        return -1;
    }

    return 0;
}

int input_file_read(InputFile *input, float *linear, float *angular)
{
    return fscanf(input->file, "%f %f", linear, angular) == 2;
}

void input_file_close(InputFile *input)
{
    if (input->file != NULL) {
        fclose(input->file);
        input->file = NULL;
    }
}
