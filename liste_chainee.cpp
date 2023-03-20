#include <iostream>
#include <cstdlib> // pour pouvoir utiliser l'exit(1) dans addStudent
using namespace std;

struct student{
    string name;
    float grade;
    student* pnext;
};
void initList(student*& pel0); // create some students in the same time
student* addStud(string nom, float note);
void displayStud(student* pst);
void displayList(student* phead);
void appendStud(student* phead, string nom, float note);
void insertAfter(student* phead, string prec, string nom, float note);
void insertAsHead(student*& phead, string nom, float note);

int main(){
    cout << "Test sur les listes chainees" << endl;
// Donnée
     student* pel0(nullptr); // point. vers la tête de la liste
     initList(pel0);
     appendStud(pel0,"Solo",15);
     appendStud(pel0,"Rasoa",14);
     appendStud(pel0,"Voahary",10);
     insertAfter(pel0,"Rasoa","Ndriana",17);
     insertAsHead(pel0, "Fara",10);
     insertAsHead(pel0,"Njara",13);
     appendStud(pel0,"Mirana",13);

// Traitement


// Sortie
    /* displayStud(pel0); */
     displayList(pel0);

    return 0;
}

void initList(student*& pel0){
    student* pst(nullptr);
    /* student* pcur(nullptr); */
    //student* pcur2(nullptr); 
    pst = addStud("Rabe", 12);
    pel0 = pst;
    /* displayStud(pst); */

    // adding new students
    /* pcur = addStud("Rasoa",14);
    pel0->pnext = pcur; */

    /* pcur2 = addStud("Koto", 13.5);
    pcur->pnext = pcur2;  */

    /* appendStud(pel0,"Solo",15); */
    // deleting student
    /* deletStud(pcur); */
}

void displayStud(student* pst){
    cout << "Nom: " << pst->name << "\tNote: " << pst->grade << endl; 
}
void displayList(student* phead){
    student* cursor(nullptr);
    cursor = phead;
    /* cout << "Nom: " << phead->name << "\tNote: " << phead->grade << endl; 
    cout << "Nom: " << (phead->pnext)->name << "\tNote: " << (phead->pnext)->grade << endl; */

    while(cursor!=nullptr){
        displayStud(cursor);
        cursor = cursor->pnext;
    }
}
student*  addStud(string nom, float note){
    student* pst(nullptr);
    pst = new (nothrow) student;

    if(pst!=nullptr){
        pst->name = nom;
        pst->grade = note;
        pst->pnext = nullptr;
/*         cout << "success allocation" << endl; */
    }
    else{
        cout << "Probleme d'allocation" << endl;
        exit(1);
    }

    return pst;
}
/* void deleteStud(student* pcur){
    student*& keepStud(nullptr);
    if(pcur->pnext){
        keepStud = pcur;
        
    }
} */

void appendStud(student* phead, string nom, float note){
    student* cursor(nullptr);
    student* newStudent(nullptr);
    /* student* newStud(nullptr); */
    cursor = phead;
    // recherche de la dernière de la liste
    while(cursor->pnext!=nullptr){
        cursor = cursor->pnext;
    }
    
    newStudent = addStud(nom,note);
    cursor->pnext = newStudent;
}

void insertAfter(student* phead, string prec, string nom, float note){
    student* cursor(nullptr);
    student* newStudent(nullptr);
    cursor = phead;
    
    while(cursor->name!=prec){
        cursor = cursor->pnext;
    }
    newStudent = addStud(nom,note);
    newStudent->pnext = cursor->pnext;
    cursor->pnext = newStudent;

}

void insertAsHead(student*& phead, string nom, float note){
    student* cursor(phead);
    student* newStudent(nullptr);
    newStudent = addStud(nom,note);
    newStudent->pnext = cursor;
    //initializing the head
    phead = newStudent;

}