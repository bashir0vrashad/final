#pragma once


void write(database d1) {
	string* file_adi = new string[d1.get_say()];
	for (size_t i = 0; i < d1.get_say(); i++)
	{
		string file_ad = d1.get_quizler()[i].get_name() + ".txt";
		file_adi[i] = file_ad;
		ofstream file(file_ad);
		if (!file.is_open()) throw exception("fayl acila bilmedi...");
		for (size_t j = 0; j < d1.get_quizler()[i].get_sual_sayi(); j++)
		{
			file << d1.get_quizler()[i].get_suallar()[j].get_sual() << " " << d1.get_quizler()[i].get_suallar()[j].get_duzgun() << " ";
			for (size_t k = 0; k < 4; k++)
			{
				file << d1.get_quizler()[i].get_suallar()[j].get_cavablar()[k] << " ";
			}
			file << endl;
		}
		file.close();
	}
}



void netice() {

	
}





