#pragma once



// bu menyu admin login kimi giris hisselerinde istifade ucundu


int menyu(string* arry, int count) {
	int a = 0;
	arry[a][0] = '>';
	for (size_t i = 0; i < count; i++)
	{
		cout << arry[i] << endl;
	}

	char secim;

	while (true)
	{
		secim = _getch();
		system("cls");


		if (secim == 80) {
			if (a == count - 1) {
				a = 0;
				arry[count - 1][0] = ' ';
			}
			else {
				a++;
				arry[a - 1][0] = ' ';
			}
		}


		else if (secim == 72) {

			if (a == 0) {
				a = count - 1;
				arry[0][0] = ' ';
			}
			else {
				a--;
				arry[a + 1][0] = ' ';
			}
		}
		arry[a][0] = '>';
		for (size_t i = 0; i < count; i++)
		{
			cout << arry[i] << endl;
		}
		int c = 0;
		if (secim == 13)
		{
			system("cls");
			c = a;
			arry[a][0] = ' ';
			return c;
		}

	}

}
