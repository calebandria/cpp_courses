#include<iostream>

using namespace std;

class Student {
    public:
    // constructors
        Student(string s, float g);
        Student(){}
    // mutators
        void setName(string s);
        void setGrade(float g);
    // accessors
        void display();

    private:    
        string name = "Toto";
        float grade = 1000;        
};

Student::Student(string s, float g){
    name = s;
    grade = g;
}
void Student::setName(string s){
    name = s;
}
void Student::setGrade(float g){
    grade = g;
}
void Student::display(){
    cout << name << " : " << grade << endl; 
}

int main(){
    int dim(6);
    float grades[dim] = {12,13.5,6,8.75,17,10};
    string names[dim] ={"Soa","Koto","Solo","Ndriana","Voahary","Fara"};

    Student nouveau("Toma",15);
    Student inconnu;
    Student eleves[dim];

    for(int i=0; i<dim; i++){
        eleves[i].setName(names[i]);
        eleves[i].setGrade(grades[i]);
    }

    cout << "Liste du tableau eleves" << endl;
    for(int i=0; i<dim; i++){
        eleves[i].display();
    }
    cout << "\nLe nouveau" << endl;
    nouveau.display();
    
    cout <<"\nL'inconnu" << endl;
    inconnu.display();
}
