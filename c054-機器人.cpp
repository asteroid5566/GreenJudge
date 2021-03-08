#include <iostream>
using namespace std;

int main()
{
	int direction = 2, x = 50, y = 50, input;		//direction: 1(^), 2(>), 3(v), 4(<)
	
	while (cin >> input) {
		if (input == 0) {
			break;
		}
		else if (input == -1) {
			if (direction == 1)
				direction = 4;  
			else
				direction--;
		}
		else if (input == -2) {
			if (direction == 4)
				direction = 1;
			else
				direction++; 
		}
		else if (input == -3) {
			if (direction == 3)
				direction = 1;
			else if (direction == 4)
				direction = 2;
			else
				direction += 2;
		}
		else {
			switch (direction) {
				case 1:
					y += input;
					break;				
				case 2:
					x += input;
					break;
				case 3:
					y -= input;
					break;
				case 4:
					x -= input;
			} 
			
			if (x > 100)
				x = 100;
			if (x < 0)
				x = 0;
			if (y > 100)
				y = 100;
			if (y < 0)
				y = 0;
		}
	}
	cout << "(" << x << "," << y << ")";
	return 0;
} 
