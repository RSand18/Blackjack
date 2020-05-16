#include "player.h"

void Player::Hit() 
{
	this->hand.push_back(getCard());
}


void Player::Stand() 
{

}


int Player::CheckHand() {
	int sum = 0;
	for (auto i : this->hand) {
		if (i == 1 && sum + 11 <= 21) i = 11;
		std::cout << "Card:" << i << std::endl;
		sum += i;
	}
	return sum;
}

char Player::choice() {
	std::cout << "Non Blackjack, Hit or Stand?" << std::endl;
	std::cout << "Press H to draw a card, press S to stand." << std::endl;
	char c = ' ';
	std::cin >> c;
	return c;
}