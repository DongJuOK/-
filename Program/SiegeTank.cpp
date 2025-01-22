#include "SiegeTank.h"

SiegeTank::SiegeTank()
{
	attack = 30;
	health = 150;
	defense = 1;
}

void SiegeTank::Stats()
{
	cout << "Attack : " << attack << endl;
	cout << "Attack (Siege Mode) : " << attack + 40 << endl;
	cout << "Health : " << health << endl;
	cout << "Defense : " << defense << endl;
}
