#include <stdio.h>
#include <math.h>

int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int d = b * b - 4 * a * c;
    double e = sqrt(d), x, y;
    if (d > 0){
        x = (-b + e) / (2 * a);
        y = (-b - e) / (2 * a);
        if (x < y)
            printf("%.2lf %.2lf \n", x, y);
        else 
            printf("%.2lf %.2lf \n", y, x);
    }
    else if (d == 0) {
        x = (-b + e) / (2 * a);
        printf("%.2lf \n", x);
    }	
    else 
        printf("no solution \n");
	
	return 0 ;
}