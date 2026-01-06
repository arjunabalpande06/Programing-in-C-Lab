#include<stdio.h>
#include<math.h>
int main() {
	double a, b, c;
	double d, rp, ip, r1, r2;
	printf("Enter coefficients a, b and c: ");
	scanf("%lf %lf %lf", &a,&b,&c);
	d = b*b-4*a*c;
	if(d>0) {
		r1=(-b+sqrt(d))/(2*a);
		r2 = (-b-sqrt(d))/(2*a);
		printf("root1 = %.2lf\n", r1);
		printf("root2 = %.2lf\n", r2);
	}
	else if(d==0) {
		r1 = r2-b/(2*a);
		printf("root1 = root 2 = %.2lf\n", r1);
	}
	else {
		rp = -b/(2*a);
		ip = sqrt(-d)/(2*a);
		printf("root1 = %.2lf+%.2lfi\n", rp,ip);
		printf("root2 = %.2lf-%.2lfi\n", rp,ip);
	}
}
