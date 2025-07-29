
#include <iostream>
using namespace std;

int main() {

	int x = 6;
	int y = 2;
	int z = 5;

	x = x| ( 1 << 3 );

	y = y & ( 1 << 2 );

	z = z ^ ( 1 << 4 );
	 

	cout << "The Set of the bit is " << x << "\n";
	
	cout << "The Clear of the bit is " << y << "\n";
	
	cout << "The Toggle of the bit is " << z << "\n";





	return 0;
}

