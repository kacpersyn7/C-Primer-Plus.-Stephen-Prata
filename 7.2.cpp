#include <iostream>
const int MAX = 10;
int load_array(double arr [], int n);
double average(const double arr [], int n);
void show_array(const double arr [], int n);
int main()
{
	double results [MAX];
	int size = load_array(results,MAX);
	double sr = average(results, size);
	show_array(results,size);
	std::cout<<sr<<std::endl;

	return 0;
}
int load_array(double arr [], int limit)
{
    using namespace std;
    double temp;
    int i;
    for (i = 0; i < limit; i++)
    {
        cout << "Podaj wartość nr " << (i + 1) << ": ";
        cin >> temp;
        if (!cin)    // błędne dane
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
           cout << "Błędne dane, wprowadzanie danych przerwane.\n";
           break;
        }
        else if (temp < 0)     // nakaz zakończenia
            break;
        arr[i] = temp;
    }
    return i;
}
double average (const double arr[], int n)
{
	double av = 0;
	for (int i = 0; i < n; ++i)
		av += arr[i];
	return av;
}
void show_array(const double arr [], int n)
{
	using namespace std;
	for (int i = 0; i < n; ++i)
		cout<<arr[i]<<" ";
	cout<<endl;
}