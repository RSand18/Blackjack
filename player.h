#pragma once
#include "deck.h"

class Player 
{

private:
	vector <int> hand;

public:

	void Hit();
	void Stand();
	int CheckHand();
	char choice();
};