#include "Header.h"
#include "Animal.h";
#include "Cage.h";
#include "fish.h";
#include "Bird.h";
#include "Beast.h";

void main() {
	setlocale(0, "");



	Cage cage;

	cage.addanimal(new Beast("Тигр",1,"Сибирь"));
	cage.addanimal(new Bird("Голубь",0,15));
	cage.addanimal(new Fish("Сельдь",0,100));
	cage.addanimal(new Fish("Скумбрия",0,180));

	cage.show();
	cage.showlist();



	system("pause");
}