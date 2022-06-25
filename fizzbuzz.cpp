#include <iostream>

using namespace std;

// this program prints the integers 1 to 100
// for multiples of 3 it prints fizz
// for multiples of 5 it prints buzz
// for multiples of 3 and 5 it prints fizzbuzz

int main()
{

	for (int count = 1; count <= 100; count++)
	{
		if (count % 3 == 0 && count % 5 == 0)
			cout << "fizzbuzz";
		else if (count % 3 == 0)
			cout << "fizz";
		else if (count % 5 == 0)
			cout << "buzz";
		else
			cout << count;

		cout << endl;
	}

}