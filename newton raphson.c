#include <stdio.h>
#include <math.h>

float f(float);
float derivative(float);

int main() {
	float x; 
	unsigned short i = 1, n; 

	printf("FIRST APPROXIMATION: ");
	scanf("%f", &x);

	printf("ITERATIONS: ");
	scanf("%hu", &n);

	while(i <= n) {
		x = x - f(x)/derivative(x);
		i++;
	}

	printf("APPROXIMATE ROOT: %f \n", x);
	return 0;
}

float f(float x) { // f(x)
	return x*x-3*x+2;
}

float derivative(float x) { // f'(x)
	return 2*x-3;
}
