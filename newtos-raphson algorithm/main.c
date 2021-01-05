#include<stdio.h>
#include<stdlib.h>

double absool(double num);


int main() {

    double num;
    printf(" Enter A Number To Find It's Square Root: ");
    scanf_s("%lf", &num);



    double max = num;
    double min = 0;
    double ans;
    ans = (max + min) / 2;
    int counter = 1;

    while (absool((ans * ans) - num) > 0.000000000001) {

        printf("\n\n min: %lf  |  max: %lf  |  ans: %lf  |  counter: %d", min, max, ans, counter);

        ans = ans - (((ans * ans) - num) / (2 * ans));

        counter++;

    }
    printf("\n\n min: %lf  |  max: %lf  |  ans: %lf  |  counter: %d", min, max, ans, counter);


}

double absool(double num)
{
    if (num < 0)
        return -num;
    else return num;
}