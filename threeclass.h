#ifndef THREECLASS_H_INCLUDED
#define THREECLASS_H_INCLUDED


class Bsnf{
public:
    int testFunc();

};

class Csnf{
    int n;
public:
    int cfunc();
};

class Asnf{
    int i;
    float f;
    char c;
    void init();
public:
    Asnf(int i,float f, char c);

    friend Bsnf;

    friend  Csnf::cfunc();
};


#endif // THREECLASS_H_INCLUDED
