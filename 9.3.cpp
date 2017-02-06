#include <iostream>
#include <cstring>
#include <new>
const int BUF = 512;
const int N = 2;
char buffer[BUF]; 
struct chaff
{
    char dross[20];
    int slag;
};
const char * names [N] = {"kacper", "repcak"};

void set(chaff & ch, const char * name, int hc);
void show(const chaff & ch);
int main(int argc, char const *argv[])
{
    chaff *pd1, *pd2;
    pd1 = new chaff[N];
    pd2 = new (buffer) chaff [N];
    for (int i = 0; i < N; ++i)
        set(pd2[i],names[i],i*10);
    for (int i = 0; i < N; ++i)
        show(pd2[i]);
    for (int i = 0; i < N; ++i)
        set(pd1[i],names[i],i*10);
    for (int i = 0; i < N; ++i)
        show(pd1[i]);
    delete [] pd1;
    return 0;
}
void set(chaff & ch, const char * name, int hc)
{
    strcpy(ch.dross, name);
    ch.slag = hc;
}
void show(const chaff & ch)
{
    std::cout<<"gracz "<<ch.dross<<" ma "<<ch.slag<<" ";
    std::cout<<"a adres to "<<&ch<<std::endl;
}