#include "TAMA.h"
#include <iostream>

void tama::feed() {
	 food += 5;
	 mood += 1;
	 hygi -= 4;
	 if (food > 100) {
		 food = 100;
	 }
	 if (mood > 100) {
		 mood = 100;
	 }
}
void tama::play() {
	mood += 4;
	hygi -= 5;
	food -= 2;
	if (mood > 100) {
		mood = 100;
	}
}
void tama::wash() {
	hygi += 5;
	mood -= 10;
	if (hygi > 100) {
		hygi = 100;
	}
}

int tama::getFood() {
	return food;
}
int tama::getHygi() {
	return hygi;
}
int tama::getLife() {
	return life;
}
int tama::getMood() {
	return mood;
}

void tama::endDayFood() {
	food -= 3;
	if (food <= 50) {
		life -= 3;
	}
}
void tama::endDayHygi() {
	hygi -= 3;
	if (hygi <= 50) {
		life -= 3;
	}
}
void tama::endDayMood() {
	mood -= 3;
	if (mood <= 50) {
		life -= 3;
	}
}

