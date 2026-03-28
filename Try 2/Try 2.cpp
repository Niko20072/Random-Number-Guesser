#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));
	cout << "Guess the number (between 0 and 100)" << endl;
	int nr_random = rand() % 101;
	int nr_ghicit, incercari = 0;
	cin >> nr_ghicit;
	while (nr_ghicit != nr_random)
	{
		if (nr_ghicit < nr_random)
			cout << "Higher" << endl;
		if (nr_ghicit > nr_random)
			cout << "Lower" << endl;
		cin >> nr_ghicit;
		incercari++;
	}
	if (nr_ghicit == nr_random)
	{
		cout << "You got it!!"<<endl;
	}
	cout << "You tried " << incercari << " times";
	return 0;
}