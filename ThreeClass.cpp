#include "threeclass.h"
Asnf::Asnf(int i, float f, char c){
    this->i =i;
    this->f =f;
    this->c =c;
}

int Bsnf::testFunc(){
    Asnf* a= new Asnf(3,5.12,'q');
    int ii= a->i;
    delete a;
    return ii;
}

int Csnf::cfunc(){
   Asnf*  a= new Asnf(9,99.9,'r');
   int jj = (int) a->f;
   delete a;
   return jj;
}
