#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, simpleInterest, compoundInterest;
    int compoundFrequency;

    printf("Enter the Principal Amount: ");
    scanf("%lf", &principal);

    printf("Enter the Rate of Interest (in percentage): ");
    scanf("%lf", &rate);

    printf("Enter the Time (in years): ");
    scanf("%lf", &time);

    simpleInterest = (principal * rate * time) / 100;

    printf("Enter the number of times interest is compounded per year (e.g., 1 for annually, 2 for semi-annually): ");
    scanf("%d", &compoundFrequency);

    compoundInterest = principal * pow((1 + (rate / (compoundFrequency * 100))), compoundFrequency * time) - principal;

    printf("\nSimple Interest: %.2lf\n", simpleInterest);
    printf("Compound Interest: %.2lf\n", compoundInterest);

    return 0;
}
