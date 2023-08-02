#pragma once

// bu funksiya adminin login hissesini yoxlayir

//username -- admin
//password -- 12345678 

bool yoxlanis() {

	const string username = "admin";
	const string password = "12345678";
	int say = 0;
	bool yoxla;
	while (true)
	{
		yoxla = false;
		system("cls");
		cout << "username daxil edin: ";
		string username1, password1;
		cin >> username1;


		if (username == username1) {
			cout << "password daxil edin: ";
			cin >> password1;

			if (password == password1) {
				yoxla = true;
				return yoxla;
			}
			else {

				cout << "password yanlis daxil etdiniz...";
				say++;
				Sleep(1500);

			}
		}
		else {
			cout << "username yanlis daxil etdiniz...";
			say++;
			Sleep(1500);

		}

		if (say == 3) throw exception("3 defeden artiq sehv daxil etmek olmaz...");


	}
}
