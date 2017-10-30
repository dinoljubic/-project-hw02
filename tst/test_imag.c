#include<stdio.h>
#include<fftw3.h>
#include<cmplx.h>
#include<stdlib.h>


int main(int argc, char **argv){
	if (argc < 3)
	{
		printf("Unesite argument, molim!\n");
		return -1;
	}
	
	double in[2], out;

	for ( int i = 0, k = 1; i < 1; i++ ){
		in[i] = ( double )atoi( argv[k++] );
	}

	out = cmplx_imag (in[0], in[1]);

	printf("%.4f\n\n", out);
;

	return 0;	
}
	
