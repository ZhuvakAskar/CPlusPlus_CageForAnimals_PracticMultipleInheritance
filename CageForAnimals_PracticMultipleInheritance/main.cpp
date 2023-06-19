#include "Header.h"
#include "Animal.h";
#include "Cage.h";
#include "fish.h";
#include "Bird.h";
#include "Beast.h";

void main() {
	setlocale(0, "");



	Cage cage;

	cage.addanimal(new Beast("����",1,"������"));
	cage.addanimal(new Bird("������",0,15));
	cage.addanimal(new Fish("������",0,100));
	cage.addanimal(new Fish("��������",0,180));

	cage.show();
	cage.showlist();



	system("pause");
}