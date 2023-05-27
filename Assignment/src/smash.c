#include "smash.h"

int main(void){
	int exit = 0;
	printf("smash> ");
	while (!exit)
	{
		int size = 256;
		char* command = malloc(size);
		fgets(&command, &size, stdin);
		char** tokens = parse_command(command);
		exit = !(strcmp(tokens[0],"exit"));
	}
}