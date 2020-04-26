#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

//zmienne
float a,b,c,d;
float newA,newP,newQ;

int main()
{
    while(1)
    {
        //wprowadzenie współczynników
        system("cls");
        printf("===================================================================\n");
        printf("Wprowadz kolejne wspolczynniki funkcji homograficznej w postaci:\n");
        printf("  ax + b\n");
        printf(" --------\n");
        printf("  cx + d\n");
        printf("===================================================================\n");
        printf("a = ");
        scanf("%f",&a);
        printf("b = ");
        scanf("%f",&b);
        printf("c = ");
        scanf("%f",&c);
        printf("d = ");
        scanf("%f",&d);
        printf("===================================================================\n");

        //obliczenie współczynników postaci kanonicznej
        newA = (b/c)-((a*d)/(c*c));
        newP = -(d/c);
        newQ = a/c;

        printf("     %f\n",newA);
        printf("------------------- + %f\n",newQ);
        printf("   x - %f\n",newP);
        printf("===================================================================\n");
        system("pause");
    }

    return 0;
}
