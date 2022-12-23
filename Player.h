#ifndef _Player_
#define _Player_

#include <cassert>

class Player
{
public:
	Player()
	{
		_card1 = -1;
		_card2 = -1;

	}

	void take(int iCard)
	{
		if (_card1 == -1)
		{
			_card1 = iCard;
			return;
		}

		if (_card2 == -1)
		{
			_card2 = iCard;
			return;
		}


		assert("Cannot have more than 2 cards");
	}

	int card1()
	{
		return _card1;
	}

	int card2()
	{
		return _card2;
	}

private:
	int _card1, _card2;

};

#endif

