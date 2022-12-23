#ifndef _Table_
#define _Table_

#include "Player.h"

#include <vector>
using namespace std;

class Table
{
public:

	Table()
	{
		init();
	}

	void init()
	{
		_vCards.clear();
	}

	void take(int iCard)
	{
		_vCards.push_back(iCard);
	}

	int best_hand(Player &p)
	{
		return 8;
	}

	const vector<int> all_cards() const
	{
		return _vCards;
	}

private:
	vector<int> _vCards;
};

#endif