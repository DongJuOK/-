#include "Goliath.h"

Goliath::Goliath()
{
	attack = 12;
	health = 125;
	defense = 1;
}

void Goliath::Stats()
{
	cout << "Attack (Ground) : " << attack << endl;
	cout << "Attack (Aerial) : " << attack + 8 << endl;
	cout << "Health : " << health << endl;
	cout << "Defense : " << defense << endl;
}
