#include<stdio.h>
#include<io.h>

int main(int argc, char **argv){
	
	FILE *file;

	if (argc < 3){
		printf("Enter arguments.");
		return -1;
	}

	file = fopen(argv[1], "wb");
	if (file == NULL)
		printf("No such file");
	
	write_half(file, argv[2]);
	
	fclose(file);
	
	return 0;
}
