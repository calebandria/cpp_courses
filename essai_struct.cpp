#include <iostream>
using namespace std;
struct student{
    string name;
    float grade;
};

int main(){
    student toto({"Koto", 13});

    cout << toto.name << ":" << toto.grade << endl;

    return 0;
}
