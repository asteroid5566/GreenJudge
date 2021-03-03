#include <iostream>
using namespace std;

int main()
{
	int n, i;
	cin >> n;
	int str[n];
	
	for (i = 0; i < n; i++) {
		cin >> str[i];
	}
	
	for (i = n - 1; i >= 0; i--) {
		cout << str[i] << " ";
	}
	
	return 0;
}
