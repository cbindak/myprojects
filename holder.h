#ifndef HOLDER_H_INCLUDED
#define HOLDER_H_INCLUDED
#include <cstring> // memset
const int sz =20;
struct Holder{
private:
    int a[sz];
public:
    void initialize();
    struct Pointer;
    //friend Pointer;//does not make any difference?!

    struct Pointer{
    private:
        Holder *h;
        int *p;
    public:
    void initialize(Holder *h);
    //move around in the array
    void previous();
    void next();
    void end();
    void top();
    //access value
    int read();
    void set(int i);

    };
};


#endif // HOLDER_H_INCLUDED
