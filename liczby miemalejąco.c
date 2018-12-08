// Wczytać 3 liczby calkowite i wypisac je w kolejnosci niemalejacej

#include<stdio.h>
int main ()
{
    int a, b, c;
    printf ("Podaj pierwsza liczbe: "); 
    scanf ("%d",&a);
    printf ("Podaj druga liczbe: "); 
    scanf ("%d",&b);
    printf ("Podaj trzecia liczbe: "); 
    scanf ("%d",&c);
    if (a>=b && b>=c) printf("%d, %d, %d ", c,b,a);
    if (a>=c && b>=a) printf("%d, %d, %d ", c,a,b);
    if (b>=a && c>=b) printf("%d, %d, %d ", a,b,c);
    if (c>=a && a>=b) printf("%d, %d, %d ", b,a,c);
    if (b>=c && c>=a) printf("%d, %d, %d ", a,c,b);
    if (c>=b && a>=c) printf("%d, %d, %d ", b,c,a);
    
    system ("Pause");
    return 0;
}
