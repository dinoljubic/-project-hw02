#include<fftw3.h>
#include<cmplx.h>
#include<math.h>

void cmplx_div(fftw_complex a, fftw_complex b, fftw_complex *c){
	c[0][0] = (double)(a[0]*b[0]+a[1]*b[1])/(b[0]*b[0]+b[1]*b[1]);
	c[0][1] = (double)(a[1]*b[0]-a[0]*b[1])/(b[0]*b[0]+b[1]*b[1]);

}

void cmplx_mul(fftw_complex a, fftw_complex b, fftw_complex *c){
	c[0][0] = a[0]*b[0]-a[1]*b[1];
	c[0][1] = (a[0]+a[1])*(b[0]+b[1])-a[0]*b[0]-a[1]*b[1];
}

double cmplx_mag(fftw_complex a){
	return sqrt(a[0]*a[0]+a[1]*a[1]);
}

double cmplx_phs(fftw_complex a){
	if (!a[0]){
		if (a[1] < 0)
			return -M_PI/2;
		else return M_PI/2;
	}
	return atan(a[1]/a[0]);
}

double cmplx_real(double mag, double phs){
	return mag*cos(phs);
}

double cmplx_imag(double mag, double phs){
	return mag*sin(phs);
}
