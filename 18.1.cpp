#include <iostream>
#include <algorithm>
#include <initializer_list>

template<typename T>
T average_list(std::initializer_list<T> li);
int main() {
	using namespace std;
	auto q = average_list({ 15.4, 10.7, 9.0 });
	cout << q << endl;
	cout << average_list({ 20, 30, 19, 17, 45, 38 }) << endl;
	auto ad = average_list<double>({ 'A', 70, 65.33 });
	cout << ad << endl;
	cin.get();
}
template<typename T>
T average_list(std::initializer_list<T> li){
	T total = T();
	int i = 0;
	std::for_each(li.begin(), li.end(), [&total, &i](T val) {total += val; i++; });
	return total/i ;
}