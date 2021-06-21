#include <iostream>
using namespace std;

int main()
{
	int arr[10], i, comp, n1 = 0, n2 = 0, n;
	cin >> n;

	for(i = 0; i < n; i++)
		cin >> arr[i];
	cin >> comp;
	
	for (i = 0; i < n; i++) {
		if (arr[i] > comp)
			n1++;
		else if (arr[i] < comp)
			n2++;
	}
	
	cout << n1 << " " << n2 << endl;
	return 0;
}
