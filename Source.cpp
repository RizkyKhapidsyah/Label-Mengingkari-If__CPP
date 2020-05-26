#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

int main() {
	int i;

	for (i = 1; i <= 5; i++)
	{
		goto free_pass;
		
		if (i % 2 == 0)
		{
			cout << i << "Bilangan Genap!" << endl << endl;
		}
		else
		{
		free_pass:
			cout << i << "Bilangan Ganjil!" << endl << endl;
		}
	}

	_getch();
	return 0;
}