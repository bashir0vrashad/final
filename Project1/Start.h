#pragma once


void start() {

	srand(time(0));
	try
	{
		vector<guest*>guests;




		database d1;
		d1.elave(umumi1());
		d1.elave(umumi2());
		d1.elave(umumi3());
		d1.elave(umumi4());
		d1.elave(umumi5());




		write(d1);





		int size1 = 2;
		int size2 = 2;
		int size3 = 3;
		int size4 = 3;
		int size5 = 3;

		string* arry1 = new string[size1]{ "  Admin" , "  Guest" };
		string* arry2 = new string[size2]{ "  Login" , "  Back" };
		string* arry3 = new string[size3]{ "  Create Quiz" , "  Leader Board(Top 10)","  Exit" };
		string* arry4 = new string[size4]{ "  Start Quiz" , "  Leader Board(Top 10)","  Exit" };
		string* arry5 = new string[size5]{ "  new","  back", "  save" };




		while (true)
		{


			string* quizadi = new string[d1.get_say()];
			for (int i = 0; i < d1.get_say(); i++)
			{
				quizadi[i] = d1.get_quizler()[i].get_name();
			}


			for (size_t i = 0; i < d1.get_say(); i++)
			{

				random1(d1.get_quizler()[i]);
			}



			system("cls");
			int a = menyu(arry1, size1);

			if (a == 0) {
				int b = menyu(arry2, size2);

				if (b == 0) {
					bool yoxla = yoxlanis();
					if (yoxla) {
						system("cls");
						int c = menyu(arry3, size3);

						if (c == 0) {
							int quiz_s = 0;
							cout << "quiz adi daxil edin: ";
							string q_a;
							cin >> q_a;

							cin.ignore();
							string f_a = q_a + ".txt";
							ofstream file(f_a);

							quiz other;
							other.set_name("  " + q_a);
							bool p = true;
							while (true)
							{
								p = true;
								int u = menyu(arry5, size5);
								if (u == 0) {

									other = yarat(quiz_s, other);


								}
								else if (u == 1) {
									if (other.get_suallar() != nullptr) other.clear();
									p = false;
									system("cls");
									break;

								}
								else if (u == 2) {




									if (!file.is_open()) throw exception("fayl acila bilmedi...");
									for (size_t j = 0; j < other.get_sual_sayi(); j++)
									{
										file << other.get_suallar()[j].get_sual() << " " << other.get_suallar()[j].get_duzgun() << " ";
										for (size_t k = 0; k < 4; k++)
										{
											file << other.get_suallar()[j].get_cavablar()[k] << " ";
										}
										file << endl;
									}
									file.close();





									d1.elave(other);




									cout << "save edildi.";
									Sleep(1500);
									break;
								}
							}
							if (p == false) continue;

						}
						else if (c == 1) {
							oxuma(guests);
						}
						else if (c == 2) {
							cout << "exit...";
							break;
						}

					}

				}
				else arry2[a + 1][0] = ' ';

			}
			else if (a == 1) {
				system("cls");

				int d = menyu(arry4, size4);

				if (d == 0) {
					system("cls");

					cout << "adinizi daxil edin: ";
					string name;
					cin >> name;


					int e = menyu(quizadi, d1.get_say());

					int o = 0;

					int duzgun_c = 0;
					int sehv_c = 0;
					int pass = 0;
					int* arry = new int[d1.get_quizler()[e].get_sual_sayi()];
					while (o < d1.get_quizler()[e].get_sual_sayi())
					{
						auto r = d1.get_quizler()[e].get_suallar()[o].show();
						arry[o] = r.second;
						if (r.first == 13 && r.second != 5) {
							string v = d1.get_quizler()[e].get_suallar()[o].get_cavablar()[r.second];
							v[0] = ' ';

							if (v == d1.get_quizler()[e].get_suallar()[o].get_duzgun()) {
								duzgun_c++;
							}

							else sehv_c++;
						}

						else if (r.first == 112) {
							pass++;
							system("cls");

						}
						else if (r.first == 101) {
							if (o == 0) {
								system("cls");
								continue;
							}
							if (arry[o - 1] == 5) {
								o--;
								pass--;
								system("cls");
								continue;
							}
							if (o != 0) {

								o--;
							}

							string v = d1.get_quizler()[e].get_suallar()[o].get_cavablar()[arry[o]];
							v[0] = ' ';


							if (v == d1.get_quizler()[e].get_suallar()[o].get_duzgun()) {
								duzgun_c--;
							}

							else sehv_c--;



							system("cls");
							continue;
						}

						o++;
					}

					cout << "duzgun cavablarin sayi:  " << duzgun_c << endl;
					cout << "sehv cavablarin sayi:  " << sehv_c << endl;
					cout << "bos cavablarin sayi:  " << pass << endl;


					fstream file("guest.txt", ios::app);
					if (!file.is_open()) throw exception("file acilmadi...");

					file << name << " " << d1.get_quizler()[e].get_name() << " " << duzgun_c << " " << sehv_c << " " << pass << endl;




					file.close();


					Sleep(3000);


					continue;


				}
				else if (d == 1) {
					oxuma(guests);

				}
				else if (d == 2) {
					cout << "exit...";
					break;
				}


			}



		}





	}
	catch (exception& ex)
	{
		cout << ex.what();
	}






}


