#include <iostream>
int recursion(int n);
int main()
{
    using namespace std;
    int arg;
    cout<<"Podaj parametr, dla ktorego zostanie obliczona silnia\n";
    while (cin >> arg)
    {
        cout<<recursion(arg)<<endl;
        cout<<"Podaj nastepny parametr (q konczy)";
    }
}
int recursion(int n)
{
    if (!n)
        return 1;
    return n * recursion(n-1);
}
