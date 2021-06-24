#include <iostream>
using namespace std;

int main()
{
	int n, m, i, temp;
	cin >> n >> m;
	int arr[n + 1];
	for (i = 0; i <= n; i++)
		arr[i] = 0;
	for (i = 0; i < m; i++) {
		cin >> temp;
		arr[temp] = 1;
	}
	for (i = 1; i <= n; i++) {
		if (arr[i] == 0) {
			cout << i;
			break;
		}
	}
	for (i++ ; i <= n; i++) {
		if (arr[i] == 0)
			cout << " " << i;
	}
	cout << endl;
	return 0;
}
