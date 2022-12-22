#include <iostream>
using namespace std;

#include "Deck.h"
#include "Player.h"
#include "Table.h"

int main()
{
	// for now, 3 players
	Player p1, p2, p3;
	Deck d;
	Table t;

	// shuffle and distribute
	d.shuffle();
	p1.take(d.give_one());
	p2.take(d.give_one());
	p1.take(d.give_one());
	p2.take(d.give_one());

	d.burn_one();

	t.take(d.give_one());
	t.take(d.give_one());
	t.take(d.give_one());

	d.burn_one();
	t.take(d.give_one());

	d.burn_one();
	t.take(d.give_one());

	cout << "Player1:" << t.best_hand(p1) << endl;
	cout << "Player2:" << t.best_hand(p2) << endl;
	cout << "Player3:" << t.best_hand(p3) << endl;
}