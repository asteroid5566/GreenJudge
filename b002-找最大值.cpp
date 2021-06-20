#include <iostream>
using namespace std;

int main()
{
	int n, i, max = 0, temp, pos;
	cin >> n;
	
	for (i = 1; i <= n; i++) {
		cin >> temp;
		if (temp > max) {
			max = temp;
			pos = i;
		}
	}
	cout << pos << " " << max << endl;
	return 0;
}
