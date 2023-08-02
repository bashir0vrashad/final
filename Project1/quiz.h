#pragma once


class quiz {
	string name;
	Sual* suallar;
	int sual_sayi;
public:
	string get_name() const { return this->name; }
	Sual* get_suallar() const { return this->suallar; }
	int get_sual_sayi() const { return this->sual_sayi; }


	void set_name(string name) {
		if (name.length() >= 5) this->name = name;
		else throw exception("quiz name error");
	}

	void set_say(int say) {
		if (say >= 0)this->sual_sayi = say;
		else throw exception("sual sayi menfi ola bilmez...");
	}

	void set_suallar(Sual* suallar, int s) {
		if (suallar != nullptr) {
			if (this->suallar != nullptr) delete[] this->suallar;
			this->suallar = new Sual[s];
			for (size_t i = 0; i < s; i++)
			{
				this->suallar[i] = suallar[i];
			}

		}
		else throw exception("suallar bos ola bilmez...");
	}



	quiz() {
		name = "NULL";
		suallar = nullptr;
		sual_sayi = 0;
	}



	void elave(Sual s1) {
		int s = this->sual_sayi + 1;
		Sual* yeni1 = new Sual[s];
		for (size_t i = 0; i < this->sual_sayi; i++)
		{
			yeni1[i] = this->suallar[i];
		}

		yeni1[this->sual_sayi] = s1;
		this->sual_sayi++;
		delete[] this->suallar;
		this->suallar = yeni1;
		

	}

	void clear() {
		if (this->suallar != nullptr) delete[] this->suallar;
		this->sual_sayi = 0;
	}



	quiz(string name, Sual* suallar, int say) {
		set_name(name);
		set_say(say);
		set_suallar(suallar, say);
	}






};



