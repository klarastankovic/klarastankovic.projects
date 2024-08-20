#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

double slucajni(double min, double max)
{
    return ((double)rand() / RAND_MAX) * (max - min) + min;
}

double najbliziElem(double *p, int size, double x)
{
    double najblizi = p[0];
    double minRazlika = fabs(x - p[0]);

    int i;

    for (i = 1; i < size; i++)
    {
        double xRazlika = fabs(x - p[i]);
        if (x < minRazlika)
        {
            najblizi = p[i];
            minRazlika = xRazlika;
        }
    }

    return najblizi;
}
int main(void)
{
    int x = rand() % (10001 - 1000) + 1000;

    double p[x];
    int i;

    for (i = 0; i < x; i++)
        p[i] = slucajni(-5, 20);

    double arSredina = 0;

    for (i = 0; i < x; i++)
        arSredina += p[i];

    arSredina /= x;

    double najblizi = najbliziElem(p, x, arSredina);

    printf("%lf %lf", arSredina, najblizi);

    return 0;
}