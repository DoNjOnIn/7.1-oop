#include <iostream> 
#include <algorithm> 
#include <vector> 
#include <numeric> 
using namespace std;
int RandomNumber() { return (std::rand() % 100); }
void print(vector<int> a)
{
	for (int i : a)
		cout << i << " ";
	cout << endl;
}
int main()
{
	int n;
	cout << "n = ? "; cin >> n;
	vector<int> a(n);
	generate(a.begin(), a.end(), RandomNumber);
	print(a);
	auto Min = min_element(a.begin(), a.end());
	cout << "Min = " << *Min << endl;
	cout << "Max = " << *max_element(a.begin(), a.end());
	return 0;
}