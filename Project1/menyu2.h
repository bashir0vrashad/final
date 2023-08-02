#pragma once


// bu menyu sualin variantlari arasinda gezmek ucundu


pair<int, int> menyu(string* arry, int count, string sual) {
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

		cout << sual << endl << endl;
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
		int c = 5;
		if (secim == 13)
		{
			system("cls");
			arry[a][0] = ' ';
			c = a;

			return make_pair(13, c);
		}
		if (secim == 101) return make_pair(101, c);
		else if (secim == 112)return make_pair(112, c);
	}

}
