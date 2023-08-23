 #include<stdio.h>        //standard input output library
struct complex           //structure for coplex number
{
	double real,imag;     //variables holding real and imaginary part of type double
};
int main()
{
	struct complex x,y,c;
	printf("enter the value of x and y for first complex number: ");
	scanf("%lf%lf",&x.real, &x.imag);
	printf("enter the value of x and y for second complex number: ");
	scanf("%lf%lf",&y.real, &y.imag);
	c.real=x.real+y.real;     //addition of real part
	c.imag=x.imag+y.imag;     //addition of imaginary part
	printf("Sum of complex numbers: %lf+%lfi",c.real,c.imag);
	return 0;
}
