#include "deck.h"

int Ace = 1;
int J = 10;
int Q = 10;
int K = 10;

vector<int>deck;

void init_deck() 
{
	deck { Ace,2,3,4,5,6,7,8,9,10,J,Q,K,
			 Ace,2,3,4,5,6,7,8,9,10,J,Q,K,
			 Ace,2,3,4,5,6,7,8,9,10,J,Q,K,
			 Ace,2,3,4,5,6,7,8,9,10,J,Q,K };
}

void shuffler() 
{
	srand((unsigned)time(0));
	for (int i = 0; i < 52; i++)
	{
		swap(deck[i], deck[rand() % 52]);
	}
		
	std::cout << "The deck has been shuffled!" << std::endl;
}

void print_deck() 
{
	std::cout << "deck:" << endl;
	int t = 0;
	for (auto i : deck) {
		std::cout << i << " ,";
		t++;
		if (t % 13 == 0)
		{
			std::cout << std::endl;
		}
			
	}
}

int getCard() 
{
	int card = deck.front();
	deck.erase(deck.begin());
	return card;
}

bool is_deck_empty() 
{
	return deck.empty();
}