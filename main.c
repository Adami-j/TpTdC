// ================================================================================================================
// TDC1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
// ================================================================================================================
// 15/02/2023
// ---------------------------------------------------------------------------------------------------------------
//          Fonctionnalités
// ---------------------------------------------------------------------------------------------------------------
//
// ---------------------------------------------------------------------------------------------------------------
//          Modifications
// ---------------------------------------------------------------------------------------------------------------
//
// ================================================================================================================
//
#include <stdio.h>
#include <limits.h>
#define PRINT(int) printf("%d\n", int)
#define PRINTX printf("%d\n",x)
int main() {

    //exo1
    int age=12;
   // scanf("%d", &age);
    printf("Hello, World!\n %d",age);

    //exo2
    printf("Taille de char : %zu octets\n", sizeof(char));
    printf("Taille de short : %zu octets\n", sizeof(short));
    printf("Taille de int : %zu octets\n", sizeof(int));
    printf("Taille de long : %zu octets\n", sizeof(long));
    printf("Taille de long long : %zu octets\n", sizeof(long long));
    printf("Taille de float : %zu octets\n", sizeof(float));
    printf("Taille de double : %zu octets\n", sizeof(double));
    printf("Taille de long double : %zu octets\n", sizeof(long double));
    printf("Taille de bool : %zu octets\n", sizeof(_Bool));
    printf("Taille de void : %zu octets\n", sizeof(void));
    printf("Taille de pointeur : %zu octets\n", sizeof(void*));

    //version avec bits
    printf("Taille de char : %zu bits\n", CHAR_BIT * sizeof(char));
    printf("Taille de short : %zu bits\n", CHAR_BIT * sizeof(short));
    printf("Taille de int : %zu bits\n", CHAR_BIT * sizeof(int));
    printf("Taille de long : %zu bits\n", CHAR_BIT * sizeof(long));
    printf("Taille de long long : %zu bits\n", CHAR_BIT * sizeof(long long));
    printf("Taille de float : %zu bits\n", CHAR_BIT * sizeof(float));
    printf("Taille de double : %zu bits\n", CHAR_BIT * sizeof(double));
    printf("Taille de long double : %zu bits\n", CHAR_BIT * sizeof(long double));
    printf("Taille de bool : %zu bits\n", CHAR_BIT * sizeof(_Bool));
    printf("Taille de pointeur : %zu bits\n", CHAR_BIT * sizeof(void*));

    //EX3
    int annee=2000;
    //scanf("%d",&annee);

    if((annee%4==0 && annee%100!=0) || (annee%400==0)){
        printf("L'année %d est une année bisextile",annee);
    }else{
        printf("L'année %d n'est pas une année bisextile \n\n\n",annee);
    }

    //EX4
    char cara;
    scanf("%c",&cara);
    printf("Le caractère %c à pour équivalent en ACSII %d \n",cara,cara);

    //EX5
    int xx;
    xx= - 3 + 4 * 5 - 6;
    printf ("%d\n",xx);
    xx = 3 + 4 % 5 - 6;
    printf ("%d\n",xx);
    xx=- 3 + 4 % -6 / 5;
    printf ("%d\n",xx);
    xx=(7 + 6 ) % 5 / 2;
    printf ("%d\n",xx);
    // 11 1 -3 1

    //EX6
    int x = 2, y, z ;
    PRINTX;
    x *= 3 + 2 ;
    PRINTX;
    x *= y = z = 4 ;
    PRINTX;
    x=y==z;
    PRINTX;
    x == (y = z) ;
    PRINTX;
    //2 10 40 1 1

    //EX7
    printf("Coucou");
    int t, i, o;
    t = 2 ; i = 1; o = 0;
    t = t && i || o;
    PRINT(t);
    PRINT(t || ! i && o);
    t = i = 1;
    o = t ++ - 1; PRINT(t) ;
    PRINT(o);
    o += - t ++ + ++ i;
    PRINT(t) ;
    PRINT(o);
    o = t / ++ t;
    PRINT(o);
    return 0;
}



