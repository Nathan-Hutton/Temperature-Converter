#include <stdio.h>

double convert(double celcius);

int main(){
    double temp;
    printf("Type a celcius temperature to be converted to fahrenheit: ");
    scanf("%lf", &temp);
    printf("\nThe temperature in fahrenheit is %lf\n", convert(temp));
    return 0;
}

double convert(double celcius){
    return (celcius * 1.8) + 32;
}
