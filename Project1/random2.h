#pragma once


// bu funksiya sualin variantlarini random edir

string* random2(string* cavablar, int size) {
	int say = 0;


	string* suallar = new string[size];
	bool yoxla;
	while (say < size)
	{

		yoxla = true;
		int eded = rand() % size;
		if (say == 0) suallar[0] = cavablar[eded];
		for (size_t i = 0; i < say; i++)
		{
			if (suallar[i] == cavablar[eded]) {
				yoxla = false;
				break;
			}
			else {
				if (i == say - 1) suallar[say] = cavablar[eded];
			}
		}
		if (yoxla == false) continue;
		say++;
	}

	return suallar;

}
