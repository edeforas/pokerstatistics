#ifndef _Deck_
#define _Deck_

#include <vector>
#include <algorithm>
#include <random>
#include <string>
using namespace std;

class Deck
{
public:
	Deck() { init(); }

	void init()
	{
		for (int iColor = 0; iColor < 4; iColor++)
			for (int iValue = 2; iValue <= 13; iValue++)
				_vCards.push_back(iValue * 10 + iColor);
	}

	void shuffle()
	{
		std::random_shuffle(_vCards.begin(), _vCards.end()); // todo random seed
	}

	int give_one()
	{
		int iCard=_vCards.back();
		_vCards.pop_back();
		return iCard;
	}

	void burn_one()
	{
		give_one();
	}

	string to_string(int iCard)
	{
		int iColor = iCard % 10;
		int iValue = iCard / 10;

		string allColors = "cqtp";
		string allValues = "23456789TJQKA";

		return  allValues.substr(iValue,1)+ allColors.substr(iColor, 1);
	}

private:
	vector<int> _vCards;
};

#endif