#include <iostream>
using namespace std;

struct DATA {
	int song;
	int count;
};

int main()
{
	DATA arr[20];
	int n, i, j, max = 0, index, temp;
	cin >> n;
	
	for (i = 0; i < 20; i++)
		arr[i].count = arr[i].song = 0;
	
	for (i = 0; i < n; i++) {
		cin >> temp;
		for (j = 0; j < 20; j++) {
			if (temp == arr[j].song) {
				arr[j].count++;
				break;
			}
			else if (arr[j].song == 0) {
				arr[j].song = temp;
				arr[j].count = 1;
				break;
			}
		}
	}

	for (i = 0; i < 20; i++) {
		if (arr[i].count > max) {
			max = arr[i].count;
			index = arr[i].song;
		}
	}
	cout << index << " " << max << endl;
	return 0;
}
