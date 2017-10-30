#include<stdio.h>

int read_word(int fd){
	int word;
	if (!fread (&word, sizeof(int), 1, (FILE *)fd))
		return -1;
	return word;
}

short read_half(int fd){
	int word;
	if (!fread (&word, sizeof(short), 1, (FILE *)fd))
		return -1;
	return word;
}

void write_word(int fd, int word){
	if (!fwrite(&word, sizeof(int), 1, (FILE *)fd))
		printf("Error.\n");
}

void write_half(int fd, short word){
	if (!fwrite(&word, sizeof(short), 1, (FILE *)fd))
		printf("Error.\n");
}
