#include <iostream>
#include <cstring>
const int SIZE = 40;
template <typename T> T maxn(T * arr, int n);
template <>  char* maxn < char*> (char** arr , int  n);
int main(int argc, char const *argv[])
{
    int values[] = {1,2,5,3,4};
    double values_d[] = {1.2, 3.4, 3.5, 2.1};
    const char * subtitles[5] = 
    {
        "aaa", "bbb", "ccc", "dddd", "eeee"
    };
    std::cout<<"Najwieksza wartosc calkowita: "<<maxn(values,5)<<std::endl;
    std::cout<<"Najwieksza wartosc zmiennoprzecinkowa: "<<maxn(values_d,4)<<std::endl;
    std::cout<<"Najdluzszy napis: "<<maxn(subtitles,5)<<std::endl;
    return 0;
}
template <typename T>
T maxn(T * arr , int n)
{
    T max = arr[0];
    if(n > 0)
        for(int i = 1; i < n; ++i)
            if(arr[i]>max)
                max = arr[i];
    return max;
}
template <>  char* maxn < char*> ( char**  arr , int  n)
{
    char ** temp = &arr[0];
    int max = strlen(arr[0]);
    if(n > 0)
        for(int i = 1; i < n; ++i)
            if(strlen(arr[i])>max)
            {
                max = strlen(arr[i]);
                temp = &arr[i];
            }
    return *temp;
}