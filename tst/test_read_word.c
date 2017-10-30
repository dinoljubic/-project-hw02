#include<stdio.h>
#include<io.h>

int main(int argc, char **argv){
	
	FILE *file;

	if (argc < 2){
		printf("Enter filename.");
		return -1;
	}

	file = fopen(argv[1], "rb");

	if (file == NULL){
		printf("No such file\n");
		return -1;
	}
	
	printf("Read:\n%d\n", read_word(file));
	
	fclose(file);
	
	return 0;
}
