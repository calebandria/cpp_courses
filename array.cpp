#include <iostream>

using namespace std;

int main() {
    float moyenne(0);
    float maximum(0);
    float minimum(0);
    float  tab [6] = {12,13.5,6,8.75,17,10};

   
    // Calcul de la moyenne
    maximum = tab[0];
    minimum = tab[0];
    for(int i = 0;i<6; i++){
        moyenne += tab[i]/6;
        if(maximum < tab[i]) maximum =tab[i];
        if(minimum > tab[i]) minimum =tab[i];

    }

 

    cout << "La moyenne est :" << moyenne << endl;
    cout << "Le maximum est :" << maximum << endl;
    cout << "Le minimum est :" << minimum << endl;

}