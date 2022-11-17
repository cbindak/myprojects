#include <iostream>
#include "Holder.cpp"
#include "holder.h"
//#include "threeclass.h"
#include "ThreeClass.cpp"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Holder h;
    Holder::Pointer hp;
    Holder::Pointer hp2;
    int i;

    h.initialize();
    hp.initialize(&h);
    hp2.initialize(&h);

    for(i=0;i<sz;++i){
        hp.set(i);
        hp.next();
    }

    hp.top();
    hp2.end();

    for(i=0;i<sz;++i){
        cout << "hp= " << hp.read()<< " hp2= " << hp2.read()<<endl;
        hp.next();
        hp2.previous();
    }

    // test for three class
    Bsnf b;
    cout << "B class: " << b.testFunc() << endl;

    Csnf cc;
    cout << "C class: " <<cc.cfunc()<< endl;

    return 0;
}
