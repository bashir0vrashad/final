#pragma once


// bu funksiya quizlerdeki suallari random edir



void random1(quiz& other) {
	int say = 0;


	Sual* suallar = new Sual[other.get_sual_sayi()];
	bool yoxla;
	int eded;
	srand(time(0));
	while (say < other.get_sual_sayi())
	{

		yoxla = true;
		eded = rand() % other.get_sual_sayi();
		for (size_t i = 0; i < say; i++)
		{

			if (suallar[i].get_sual() == other.get_suallar()[eded].get_sual()) {
				yoxla = false;
				break;
			}
		}
		if (yoxla == false) continue;
		else {

			suallar[say].set_cavablar(random2(other.get_suallar()[eded].get_cavablar(), 4));
			suallar[say].set_duzgun(other.get_suallar()[eded].get_duzgun());
			suallar[say].set_sual(other.get_suallar()[eded].get_sual());
		}
		say++;
	}

	other.set_suallar(suallar, other.get_sual_sayi());
}

