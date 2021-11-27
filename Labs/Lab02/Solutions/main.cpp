#include <iostream>
#include <string>
#include "Deck.h"
#include "Card.h"
using namespace std;

int main()
{
	string symbols[4] = {"death","fool","the lovers","the tower"};
	string suits[4] = {"13","0","6","16"};
	Card a;
	TarotDeck d;
	
	for(int i = 0;i < 4;i += 1)
	{
		a.SetSymbol(symbols[i]);
		a.SetSuit(suits[i]);
		d.Load(a);
	}
	cout << d << "\n";
	d.Shuffle();
	cout << d << "\n";
	a = d.Draw();
	cout << a << "\n" << d << "\n";

	return 0;
}
