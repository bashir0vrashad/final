#pragma once


class guest {
	string name;
	string quiz_adi;
	int duzgun;
	int sehv;
	int bos;


public:
	string get_quiz() const { return this->quiz_adi; }
	string get_name() const { return this->name; }
	int get_duzgun() const { return this->duzgun; }
	int get_sehv() const { return this->sehv; }
	int get_bos() const { return this->bos; }

	void set_name(string name) {
		if (name.length() >= 3) this->name = name;
		else throw exception("guest name error...");
	}

	void set_quiz(string ad) {
		if (ad.length() >= 3) this->quiz_adi = ad;
		else throw exception("quiz adi error...");
	}

	void set_duzgun(int duzgun) {
		if (duzgun >= 0)this->duzgun = duzgun;
		else throw exception(" duzgun suallarin sayimenfi ola bilmez...");
	}


	void set_sehv(int sehv) {
		if (sehv >= 0)this->sehv = sehv;
		else throw exception(" sehv suallarin sayi menfi ola bilmez...");
	}

	void set_bos(int bos) {
		if (bos >= 0)this->bos = bos;
		else throw exception(" bos suallarin sayi menfi ola bilmez...");
	}


	guest() {
		name = "null";
		quiz_adi = "null";
		duzgun = 0;
		sehv = 0;
		bos = 0;
	}

	guest(string name, string quiz, int duzgun, int sehv, int bos) {
		set_name(name);
		set_quiz(quiz);
		set_duzgun(duzgun);
		set_sehv(sehv);
		set_bos(bos);
	}



};


