#include<stdio.h>
#include<fftw3.h>
#include<cmplx.h>
#include<stdlib.h>


int main(int argc, char **argv){
	if (argc < 5)
	{
		printf("Unesite argument, molim!\n");
		return -1;
	}
	
	fftw_complex *cmplx_in = fftw_alloc_complex(2);
	fftw_complex *cmplx_out = fftw_alloc_complex(1);

	for ( int i = 0, k = 1; i < 2; i++ ){
		cmplx_in[i][0] = ( double )atoi( argv[k++] );
		cmplx_in[i][1] = ( double )atoi( argv[k++] );
	}
	
	cmplx_mul(cmplx_in[0], cmplx_in[1], cmplx_out);

	printf("%.4f %.4fi\n\n", cmplx_out[0][0], cmplx_out[0][1]);

	fftw_free (cmplx_in);
	fftw_free (cmplx_out);

	return 0;	
}
	
