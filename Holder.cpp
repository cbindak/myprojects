#include "holder.h"

void Holder::initialize(){
    memset(a,0,sz*sizeof(int));
}

void Holder::Pointer::initialize(Holder *ph){
    h = ph;
    p = ph->a;
}

void Holder::Pointer::next(){
    if (p< &(h->a[sz-1])) ++p;
}

 void Holder::Pointer::previous(){
    if(p> &(h->a[0])) p--;
 }

 void Holder::Pointer::end(){
    p = &(h->a[sz-1]);
 }

 void Holder::Pointer::top(){
    p = &(h->a[0]);
 }

 int Holder::Pointer::read(){
    return *p;
 }

 void Holder::Pointer::set(int i){
    *p=i;
 }
