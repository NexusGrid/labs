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

	cout << "����� ���������� � ��������\n" << "��� ��� �������, ��� ��������� �� ������:\n" << "���: " << t1.getFood() << endl << "�������: " << t1.getHygi() << endl <<
		"����������: " << t1.getMood() << endl << "��������: " << t1.getLife() << endl << endl;
	cout << "������ ���� �� ������ ������� ���� �� ���� ��������:\n" << "���������(Feed)\n" << "��������(Play)\n" << "������(Wash)\n" << "������� �������� �� ���������� � ������������� � ��������\n";
	cout << "� ����� ������� ��� ���, ������� � ���������� ������� ���������� �� ��� �������\n";
	cout << "���� ���, ������� ��� ���������� ��������� ���� ��������, �� � ������� ������ ������ ��������\n";
	cout << "���� ����� �� ���������� ������ ����� ���� - ���� ���������\n";
	cout << "������� ������ ����?\nY/N" << endl;
	cin >> a;
	a = tolower(a);
	if (a == 'y') {
		turn = 1;
		do {
			system("CLS");

			cout << "����: " << turn << endl;
			cout << "���: " << t1.getFood() << endl;
			cout << "�������: " << t1.getHygi() << endl;
			cout << "����������: " << t1.getMood() << endl;
			cout << "��������: " << t1.getLife() << endl << endl;
			cout << "��� ������� ����� ������?\n\n";

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
				cout << " - ������������ �������!\n";
				goto repeat;
			}

			t1.endDayFood();
			t1.endDayHygi();
			t1.endDayMood();
			
			if (t1.getFood() <= 0 || t1.getHygi() <= 0 || t1.getMood() <= 0 || t1.getLife() <= 0) {
				system("CLS");
				cout << "��� ������� ���� �������� �������!\n" << "�� �� ������������, �� ������ ������������ � ����� ������� ����� " << turn << " ����!\n";
				cout << "Game over!\n\n";
				cout << "������� ����� ������ ��� ������";
				_getch();
				exit(0);
			}
			turn += 1;

		} while (t1.getLife() > 0);
	}
	else { exit(0); }
}
