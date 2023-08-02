#pragma once

class Sual {
	string sual_ozu;
	string* cavablar;
	string duzgun;
public:
	string get_sual() const { return this->sual_ozu; }
	string* get_cavablar() const { return this->cavablar; }
	string get_duzgun() const { return this->duzgun; }


	void set_sual(string sual1) {
		if (sual1[sual1.length() - 1] == '?' && sual1.length() >= 8) this->sual_ozu = sual1;
		else throw exception{ "sual error..." };
	}





	void set_cavablar(string* cavablar) {
		if (cavablar != nullptr) {
			if (this->cavablar != nullptr) delete[] this->cavablar;
			this->cavablar = new string[4];
			for (size_t i = 0; i < 4; i++)
			{
				this->cavablar[i] = cavablar[i];
			}

		}
		else throw exception("cavablar bos ola bilmez...error");
	}


	void set_duzgun(string dogru) {
		for (size_t i = 0; i < 4; i++)
		{
			if (this->cavablar[i] == dogru) {
				this->duzgun = dogru;
				return;
			}
		}
		throw exception("umumi cavablar arasinda  tapilmadi....error");
	}

	Sual() {
		sual_ozu = "null";
		cavablar = nullptr;
		duzgun = "null";
	}


	Sual(string sual, string* cavablar, string duzgun) {
		set_sual(sual);
		set_cavablar(cavablar);
		set_duzgun(duzgun);
	}


	pair<int, int> show() {

		cout << this->sual_ozu << endl << endl;
		auto r = menyu(this->cavablar, 4, this->sual_ozu);
		return make_pair(r.first, r.second);

	}

	bool operator==(Sual iki) {
		if (iki.sual_ozu == this->sual_ozu) {

			if (this->duzgun == iki.duzgun) {
				for (size_t i = 0; i < 4; i++) if (this->cavablar[i] != iki.cavablar[i]) return false;
				return true;
			}

			else return false;



		}
		else return false;
	}


};


