#pragma once


void oxuma(vector<guest*>guests) {

	string namecopy;
	string category;
	int value1;
	int value2;
	int value3;

	int say_copy = 0;
	ifstream file("guest.txt");


	while (file >> namecopy >> category >> value1 >> value2 >> value3) {
		say_copy++;
		guests.push_back(new guest(namecopy, category, value1, value2, value3));
	}

	file.close();

	sort(guests.begin(), guests.end(), sortByValue1);
	int p = 0;
	if (say_copy > 10) {
		p = 10;
	}
	else p = guests.size();

	for (size_t g = 0; g < p; g++)
	{
		cout << "Name: " << guests[g]->get_name() << endl;
		cout << "Quiz name: " << guests[g]->get_quiz() << endl;
		cout << "Correct Answers: " << guests[g]->get_duzgun() << endl;
		cout << "Incorrect Answers: " << guests[g]->get_sehv() << endl;
		cout << "Unanswered: " << guests[g]->get_bos() << endl;
		cout << "----------------------------" << endl;

	}



	Sleep(30000);



}


