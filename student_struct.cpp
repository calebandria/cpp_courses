#include <string>
#include <iostream>


using namespace std;

// structure definition
struct student { 
    string name;
    float grade;
};
void stat(int dim, student* eleves, float &max, float &min, float &moyenne);
void display(int dim, student* eleves, float &max, float &min, float &moyenne);

int main(){

    cout << "Calcul de moyenne, max, min des notes de classe" << endl;
    int dim(6);
    float moyenne(0);
    float max(0);
    float min(0);

    float tab[dim] = {12,13.5,6,8.75,17,10};
    string names[dim] ={"Soa","Koto","Solo","Ndriana","Voahary","Fara"};
    student eleves [dim];

    // entree de données
    for(int i =0;i<dim;i++){
        eleves[i].name = names[i];
        eleves[i].grade = tab[i];
    }

    /* Autre initialisation d'un struct:
    eleves = {"Soa",12,"Koto",13.5,Solo",6,.....} */

    stat(dim, eleves,max,min,moyenne);
    display(dim,eleves,max,min,moyenne);

    return 0;
}

void stat(int dim, student* eleves, float &max, float &min, float &moyenne){
    max = eleves[0].grade;
    min = eleves[0].grade;
    for(int i = 0;i<dim; i++){
        moyenne += eleves[i].grade/dim;
        if(max < eleves[i].grade) max =eleves[i].grade;
        if(min > eleves[i].grade) min =eleves[i].grade;

    }
}
void display(int dim, student* eleves, float &max, float &min, float &moyenne){
    cout << "Les eleves :" << endl;
    for(int i =0; i<dim; i++){
        cout << eleves[i].name << ":" << eleves[i].grade << endl;
    }
    cout << "Moyenne des notes: " << moyenne << endl;
    cout << "Meilleure note: " << max << endl;
    cout << "Mauvaise note: " << min << endl;
}
