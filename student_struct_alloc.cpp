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
    float* notes = {nullptr};
    float moyenne(0);
    float max(0);
    float min(0);

    string *names = {nullptr};
    student eleves [dim];

    notes = new(nothrow) float[dim];
    names = new(nothrow) string[dim];

// entree des notes et des noms
    if (names!=nullptr || notes!=nullptr){
        for(int i =0; i< dim; i++){
            cout << "Entrer la nom de l'élève " << i+1 << endl;
            cin >> names[i];
            cout << "La note de "<< names[i] << endl;
            cin >> notes[i];
        }
    }
    
    else{
        cout << "Information incomplète" << endl;
    
    delete names;
    delete notes;
        return 1;
    }

   
    // entree des données dans le tableau de structure
    for(int i =0;i<dim;i++){
        eleves[i].name = names[i];
        eleves[i].grade = notes[i];
    }
    stat(dim, eleves,max,min,moyenne);
    display(dim,eleves,max,min,moyenne);

    return 0;
};
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
