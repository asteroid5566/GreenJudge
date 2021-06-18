#include <iostream>
using namespace std;

int main()
{
	int n1, n2, i, j, min = 999999, price, diff;
	cin >> price;
	for (i = 0; i <= 4; i++) {
		for (j = 0; j <= 5; j++) {
			diff = price - 500 * i - 200 * j;
			if (diff >= 0) {
				if (diff < min || diff == min && i > n1) {
					n1 = i;
					n2 = j;
					min = diff;
				}
			}
		}
	}
	cout << n1 << " " << n2 << " " << price - 500 * n1 - 200 * n2 << endl;
	return 0;
}
