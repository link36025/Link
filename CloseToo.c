#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int close_to(double tolerance, double point, double value){
	double x = value - point;
	if(x<0){
		x = x * -1;
		
	}
	if(x <= tolerance){
		printf("%lf is within %lf of %lf\n", value, tolerance, point);
	}
	else{
		printf("%lf is not within %lf of %lf\n", value, tolerance, point);
		
	}
	return 0;
}

int main(void){
	double tolerance;
	double point;
	double value;
	printf("Enter a value\n");
	scanf("%lf", &value);
	printf("Enter a tolerance\n");
	scanf("%lf", &tolerance);
	printf("Enter a point\n");
	scanf("%lf", &point);
	close_to(tolerance, point, value);
	
	
	
	return 0;
	
}