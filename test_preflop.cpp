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

	// pre flop
	p1.take(d.give_one());
	p2.take(d.give_one());
	p3.take(d.give_one());
	p1.take(d.give_one());
	p2.take(d.give_one());
	p3.take(d.give_one());

	// flop
	d.burn_one();
	t.take(d.give_one());
	t.take(d.give_one());
	t.take(d.give_one());

	// river
	d.burn_one();
	t.take(d.give_one());

	// turn
	d.burn_one();
	t.take(d.give_one());

	cout << "Player1 Hand: " << d.to_string(p1.card1()) << " " << d.to_string(p1.card2()) << " Best: " << t.best_hand(p1) << endl;
	cout << "Player2 Hand: " << d.to_string(p2.card1()) << " " << d.to_string(p2.card2()) << " Best: " << t.best_hand(p2) << endl;
	cout << "Player3 Hand: " << d.to_string(p3.card1()) << " " << d.to_string(p3.card2()) << " Best: " << t.best_hand(p3) << endl;

	cout << "Table: ";
	for (int i = 0; i < t.all_cards().size(); i++)
		cout << d.to_string(t.all_cards()[i]) << " ";

}