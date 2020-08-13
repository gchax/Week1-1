#include<stdio.h>
#include<cmath>
#define _CRT_SECURE_NO_WARNINGS
#define k 9e9

int main() {
	double f, Q, q, r;
	printf("Electrical Force Calculator (If unknown, put in -0.)\n");
	printf("Electrical Force (F) = "); scanf("%lf", &f);
	printf("Charge #1 (Q) = "); scanf("%lf", &Q);
	printf("Charge #2 (q) = "); scanf("%lf", &q);
	printf("Distance (r) = "); scanf("%lf", &r);

	q = abs(q);
	Q = abs(Q);
	if (f == -0) {
		f = (k * Q * q) / (r * r);
		printf("Elctrical Force (F) is %lf", f);
	}
	else if (Q == -0) {
		Q = (f * r * r) / (k * q);
		printf("Charge #1 (Q) is %lf", Q);
	}
	else if (q == -0) {
		q = (f * r * r) / (k * Q);
		printf("Charge #2 (q) is %lf", q);
	}
	else if (r == -0) {
		r = sqrt((k * Q * q) / f);
		printf("Distance (r) is %lf", r);
	}

	return 0;
}