#include <iostream>


using namespace std;
template<class T>
T somme(T u, T v){
    T w;
    w = u +v;
    return w;
}

template<class T1, class T2>
T1 somme(T1 u, T2 v){
    T1 w;
    w = u + v;

    return w;
}

int main(){
    float a(2.3),b(5.2);
    cout << "Somme de 2 décimaux" << endl;
    cout << a << " + " << b << " = " << somme<float>(a,b) << endl;

    cout << "Somme de 2 entiers " << endl;
    cout << a << " + " << b << " = " << somme<int>(a,b) << endl;

    cout << "Somme d' un entier et d'un float " << endl;
    cout << a << " + " << b << " = " << somme<float,int>(a,b) << endl;
}