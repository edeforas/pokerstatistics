#ifndef _Deck_
#define _Deck_

#include <vector>
using namespace std;

class Deck
{
public:
	Deck() { init(); }

	void init()
	{}

	void shuffle()
	{}

	int give_one()
	{
		return 17;
	}

	void burn_one()
	{
		give_one();
	}
};

#endif