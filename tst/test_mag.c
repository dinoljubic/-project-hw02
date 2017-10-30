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
	
	fftw_complex *cmplx_in = fftw_alloc_complex(1);
	double out;

	for ( int i = 0, k = 1; i < 1; i++ ){
		cmplx_in[i][0] = ( double )atoi( argv[k++] );
		cmplx_in[i][1] = ( double )atoi( argv[k++] );
	}
	
	out = cmplx_mag(cmplx_in[0]);

	printf("%.4f\n\n", out);

	fftw_free (cmplx_in);

	return 0;	
}
	
