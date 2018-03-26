#include <iostream>
#include <string>
#include <conio.h>
#include "TAMA.h"
using namespace std;

void main(){
	setlocale(LC_ALL, "Russian");
	
	string answer;
	char a;
	tama t1;
	int turn;

	cout << "Добро пожаловать в тамагочи\n" << "Это ваш питомец, его параметры на старте:\n" << "Еда: " << t1.getFood() << endl << "Гигиена: " << t1.getHygi() << endl <<
		"Настроение: " << t1.getMood() << endl << "Здоровье: " << t1.getLife() << endl << endl;
	cout << "Каждый день вы можете выбрать одно из трех действий:\n" << "Покормить(Feed)\n" << "Поиграть(Play)\n" << "Помыть(Wash)\n" << "Команды вводятся на английском и чувствительны к регистру\n";
	cout << "В конце каждого дня Еда, Гигиена и Настроение питомца опускаются на три еденицы\n";
	cout << "Если Еда, Гигиена или настроение опустятся ниже половины, то у питомца начнет падать здоровье\n";
	cout << "Если любой из параметров станет равен нулю - игра закончена\n";
	cout << "Желайте начать игру?\nY/N" << endl;
	cin >> a;
	a = tolower(a);
	if (a == 'y') {
		turn = 1;
		do {
			system("CLS");

			cout << "День: " << turn << endl;
			cout << "Еда: " << t1.getFood() << endl;
			cout << "Гигиена: " << t1.getHygi() << endl;
			cout << "Настроение: " << t1.getMood() << endl;
			cout << "Здоровье: " << t1.getLife() << endl << endl;
			cout << "Что сегодня будем делать?\n\n";

			repeat:
			cin >> answer;
			cout << answer;
			if (answer == "Feed") {
				t1.feed();
			}
			else if(answer == "Play") {
				t1.play();
			}
			else if (answer == "Wash") {
				t1.wash();
			}
			else {
				cout << " - Некорректная команда!\n";
				goto repeat;
			}

			t1.endDayFood();
			t1.endDayHygi();
			t1.endDayMood();
			
			if (t1.getFood() <= 0 || t1.getHygi() <= 0 || t1.getMood() <= 0 || t1.getLife() <= 0) {
				system("CLS");
				cout << "Ваш питомец умер страшной смертью!\n" << "Но не отчаивайтесь, вы смогли позаботиться о своем питомце целых " << turn << " дней!\n";
				cout << "Game over!\n\n";
				cout << "Нажмите любую кнопку для выхода";
				_getch();
				exit(0);
			}
			turn += 1;

		} while (t1.getLife() > 0);
	}
	else { exit(0); }
}
