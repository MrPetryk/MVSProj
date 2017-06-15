// MVSProj4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "first.h"

struct Hero {
	string name;
	int helth;
	int attak;
	int def;
	int exp;
	int lvl;
	int regen;

};

int main()
{
	first change;
	Hero hero;
	int a;
	hero.exp = 0;
	hero.lvl = 1;
	point:
	cout << "Change your hero (plaese push 1, 2 or 3\n";
	cin >> a;
	switch (a)
	{
	case 1:
		change.firstHero(&hero.attak, &hero.def, &hero.helth,&hero.regen, &hero.name);
		break;
	case 2:
		change.secoundHero(&hero.attak, &hero.def, &hero.helth, &hero.regen, &hero.name);
		break;
	case 3:
		change.thirdHero(&hero.attak, &hero.def, &hero.helth, &hero.regen, &hero.name);
		break;
	default:
		cout << "Error, one more time!!\n";
		goto point;
		break;
	}
	
	cout << "Your hero is "<<hero.name<<"Attak = " << hero.attak << " Helth = " << hero.helth << " Def = " << hero.def << " Regen = " << hero.regen << endl;
	
	system("pause");
    return 0;
}

