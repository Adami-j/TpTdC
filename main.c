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
    //EX3



    return 0;
}


