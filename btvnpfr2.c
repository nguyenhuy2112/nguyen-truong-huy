#include <stdio.h>
int main()
{
    long pa = 9000000, pd = 3600000;
    long tf, n, ti, income;
    
    printf("Your income this year: ");
    scanf("%ld", &income);
    
    printf("Number of dependents: ");
    scanf("%ld", &n);
    
    tf = 12 * (pa + n * pd);
    
    printf("Tax-free income: %ld\n", tf);
    
    ti = income - tf;
    
    if (ti <= 0)
    {
        printf("Taxable income: 0\n");
        printf("Income tax: 0\n");
    }
    else if (ti > 0 && ti <= 5000000)
    {
        printf("Taxable income: %ld\n", ti);
        printf("Income tax: %ld\n", (long)(ti * 0.05));
    }
    else if (ti >= 5000001 && ti <= 10000000)
    {
        printf("Taxable income: %ld\n", ti);
        printf("Income tax: %ld\n", (long)(5000000 * 0.05 + (ti - 5000000) * 0.1));
    }
    else if (ti >= 10000001 && ti <= 18000000)
    {
        printf("Taxable income: %ld\n", ti);
        printf("Income tax: %ld\n", (long)(5000000 * 0.05 + 5000000 * 0.1 + (ti - 10000000) * 0.15));
    }
    else
    {
        printf("Taxable income: %ld\n", ti);
        printf("Income tax: %ld\n", (long)(5000000 * 0.05 + 5000000 * 0.1 + 8000000 * 0.15 + (ti - 18000000) * 0.2));
    }
    
    return 0;
}
