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

    return 0;
}


