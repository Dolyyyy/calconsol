#include "calcul.h"
#include <iostream>

using namespace std;


float Calcul::inverse(float nombre){
    return 1 / nombre;
}

int Calcul::quotient(int m, int n){

    return m / n;
}

int Calcul::reste(int m, int n){

    return m % n;
}

float Calcul::min(float a, float b, float c, float d){
    float min1, min2;
    float resultat;

    min1 = (a < b) ? a : b;
    min2 = (c < d) ? c : d;

    resultat = (min1 < min2) ? min1 : min2;

    return resultat;
}

float Calcul::max(float a, float b, float c, float d){
    float max1, max2;
    float resultat;

    max1 = (a > b) ? a : b;
    max2 = (c > d) ? c : d;

    resultat = (max1 > max2) ? max1 : max2;

    return resultat;
}


