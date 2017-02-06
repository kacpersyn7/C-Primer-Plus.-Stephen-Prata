#include <iostream>
const int SIZE = 5;
template <typename T>
T max5(T arr []);
int main(int argc, char const *argv[])
{
    int values[] = {1,2,5,3,4};
    double values_d[] = {1.2, 3.4, 3.5, 2.1, 2.3};
    std::cout<<"Najwieksza wartosc calkowita: "<<max5(values)<<std::endl;
    std::cout<<"Najwieksza wartosc zmiennoprzecinkowa: "<<max5(values_d)<<std::endl;
    return 0;
}
template <typename T>
T max5(T arr [])
{
    T max = arr[0];
    for(int i = 1; i < SIZE; ++i)
        if(arr[i]>max)
            max = arr[i];
    return max;
}