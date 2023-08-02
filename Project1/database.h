#pragma once





class database {
	quiz* quizler;
	int quiz_sayi;
public:

	quiz* get_quizler() { return this->quizler; }
	int get_say() const { return this->quiz_sayi; }

	database() {
		quizler = nullptr;
		quiz_sayi = 0;
	}


	database(quiz* quizler, int say) {
		this->quiz_sayi = say;
		this->quizler = new quiz[this->quiz_sayi];
		for (size_t i = 0; i < this->quiz_sayi; i++)
		{
			this->quizler[i] = quizler[i];
		}
	}

	void elave(quiz other) {
		quiz* yeni2 = new quiz[this->quiz_sayi + 1];
		for (size_t i = 0; i < this->quiz_sayi; i++)
		{
			yeni2[i] = this->quizler[i];
		}
		yeni2[this->quiz_sayi] = other;
		this->quiz_sayi++;
		delete[] this->quizler;
		this->quizler = yeni2;

	}




};




