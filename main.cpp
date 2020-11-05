#include <iostream>
#include "arreglo.h"
#include "computadora.h"
using namespace std;

int main(){
    
    Arreglo<Computadora> computadoras;
    Computadora c01("Windows 10", 16, 500, "Intel i3");
    Computadora c02("Windows 10", 32, 500, "Intel i7");
    Computadora c03("Windows 10", 8, 1000, "Intel i5");
    Computadora c04("Windows XP", 2, 250, "AMD Athlon");
    Computadora c05("Apple Mac OS", 16, 1000, "Intel i7");

    computadoras<< c01<<c02<<c03<<c04<<c05;
    
    Computadora c06("Windows 10", 16, 500, "Intel i3");
    Computadora c07("Windows Vista", 16, 500, "Intel i3");

    Computadora *ptr = computadoras.buscar(c06);
    Computadora *ptr1 = computadoras.buscar(c07);
    if(ptr != 0){
        cout<<*ptr<<endl;
    }else{
        cout<<"No existe"<<endl;
    }

    if(ptr1 != 0){
        cout<<*ptr<<endl;
    }else{
        cout<<"No existe"<<endl;
    }
    
    Arreglo<Computadora*> ptrs = computadoras.buscar_todos(c06);

    if(ptrs.size()>0){
        for (size_t i = 0; i < ptrs.size(); i++){
            Computadora *p = ptrs[i];
            cout<<*p<<endl;
        }
    }else{
        cout<<"No existen coinsidencias"<<endl;
    }
    system("pause");
    return 0;
}