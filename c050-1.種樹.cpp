#include <iostream>
using namespace std;

int main()
{
	int n, x, y;
	cin >> n;
	
	if (n <= 20) {
		x = (n - 1) * 5;
		y = 0;
	}
	else if (n <= 40) {
		x = 100;
		y = (n - 20 - 1) * 5;
	}
	else if (n <= 60) {
		x = 100 - (n - 40 - 1) * 5;
		y = 100;
	}
	else if (n < 80) {
		x = 0;
		y = 100 - (n - 60 - 1) * 5;
	}
	
	cout << "(" << x << "," << y << ")" << endl;
	return 0;
}
