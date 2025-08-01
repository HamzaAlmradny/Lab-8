
// Documentation Section

/*
File Name : Lab 8
Author : Hamza Alsayed Almradny
Version : V.1
Purpose : Ask the user to input the following 3 integer values: 6, 2, 5  and store each value in a different variable then Set the first bit in the first variable, Clear the second bit in the second variable, and then toggle the third bit in the third variable. Finally, print the result on CMD.
Date : 17/7/2025
*/








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

