#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>

class Word {
	std::string Eng;
	std::string Han;
public:
	
	std::string getEng() {
		return this->Eng;
	}
	std::string getHan() {
		return this->Han;
	}
	void set(std::string Eng, std::string Han) {
		this->Eng = Eng;
		this->Han = Han;
	}
};

int main() {
	std::vector<Word> v;
	Word dic;
	dic.set("human", "인간");
	v.push_back(dic);
	dic.set("society", "사회");
	v.push_back(dic);
	dic.set("doll", "인형");
	v.push_back(dic);
	dic.set("painting", "그림");
	v.push_back(dic);
	dic.set("trade", "거래");
	v.push_back(dic);
	dic.set("emotion", "감정");
	v.push_back(dic);

	while (1) {
		srand((unsigned)time(0));
		int n = rand() % 6;
		Word Ques = v.at(n);
		std::cout << Ques.getEng() << '?' << std::endl;

		std::vector<std::string> ex;
		int ExEx[6] = { 0, 0 ,0 ,0, 0, 0 };
		ex.push_back(Ques.getHan());
		ExEx[n] = 1;
		for (int i = 0; i < 3;) {
			n = rand() % 6;
			if (ExEx[n] == 1)
				continue;
			//std::cout << n << std::endl;
			Word ExHan = v.at(n);
			ex.push_back(ExHan.getHan());
			ExEx[n] = 1;
			i++;
		}
		int Example[4] = { 0, 0, 0, 0 };
		int Hannum;
		for (int i = 0; i < 4;) {
			n = rand() % 4;
			if (Example[n] == 1)
				continue;
			//std::cout << n;
			std::cout << "(" << i + 1 << ") " << ex.at(n) << ' ';
			Example[n] = 1;
			if (ex.at(n) == Ques.getHan())
				Hannum = i + 1;
			i++;
		}
		std::cout << ":>";

		int Answer;
		std::cin >> Answer;
		if (Answer == Hannum)
			std::cout << "Excellent!" << std::endl;
		else if (Answer == 0)
			break;
		else
			std::cout << "No!!" << std::endl;
		std::cout << std::endl;
	}
}