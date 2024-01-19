#define _POSIX_C_SOURCE 200809L

#include "monty.h"
bus_t bus = {NULL, NULL, NULL, 0};

int main(int argc, char *argv[]){

	char *content;
	FILE *file;
	size_t size = 0;
	ssize_t read_line = 1;
	stack_t *fore = NULL;
	unsigned int marker = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bus.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		content = NULL;
		read_line = getline(&content, &size, file);
		bus.content = content;
		marker++;
		if (read_line > 0)
		{
			x_exe(content, &fore, marker, file);
		}
		free(content);
	}
	free_stack(fore);
	fclose(file);
return 0;}

