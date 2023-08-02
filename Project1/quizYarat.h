#pragma once



quiz yarat(int quiz_s , quiz other ) {

	system("cls");
	quiz_s++;
	cout << "sual daxil edin: ";
	string sua;
	getline(cin, sua);

	string dogr;
	cout << "dogru cavabi daxil edin: ";
	getline(cin, dogr);

	string v1, v2, v3, v4;
	cout << "1ci variant: ";


	getline(cin, v1);


	cout << "2ci variant: ";

	getline(cin, v2);

	cout << "3cu variant: ";
	getline(cin, v3);

	cout << "4cu variant: ";
	getline(cin, v4);



	Sual s(sua, new string[4]{ "  " + v1, "  " + v2, "  " + v3, "  " + v4 }, "  " + dogr);



	other.elave(s);
	other.set_say(quiz_s);


	Sleep(1000);


	system("cls");

	return other;
}
