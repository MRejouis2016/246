#ifndef DECK_H
#define DECK_H

#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include "Card.h"
#include "AbstractDeck.h"

class TarotDeck : public DeckInterface
{
	private:
	int size;
	Card deck[22];

	bool ValidCard(const Card& value)
	{
		std::string symbols[22] = {"the fool","the magician","the high priestess","the empress","the emperor","the hierophant","the lovers","the chariot","strength","the hermit","wheel of fortune","justice","the hanged man","death","temperance","the devil","the tower","the star","the moon","the sun","judgement","the world"};
		std::string suits[22] = {"0","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21"};
		for(int i = 0;i < 22;i += 1)
		{
			if(value.GetSymbol() == symbols[i] && value.GetSuit() == suits[i])
			{
				return true;
			}
		}
		return false;
	}

	bool Equal(const Card& a,const Card& b)
	{
		return (a.GetSymbol() == b.GetSymbol() && a.GetSuit() == b.GetSuit());
	}

	void Swap(Card& a,Card& b)
	{
		Card t = a;
		a = b;
		b = t;
	}

	public:
	TarotDeck() : size(0) 
	{
		srand(time(NULL));
	}

	TarotDeck(const TarotDeck& obj)
	{
		size = obj.size;

		for(int i = 0;i < size;i += 1)
		{
			deck[i] = obj.deck[i];
		}
	}

	TarotDeck& operator=(const TarotDeck& rhs)
	{
		if(this != &rhs)
		{
			size = rhs.size;

			for(int i = 0;i < size;i += 1)
			{
				deck[i] = rhs.deck[i];
			}
		}
		return *this;
	}

	~TarotDeck() {}

	virtual Card Draw()
	{
		if(size == 0)
		{
			throw "Empty Deck";
		}
		Card card = deck[0];
		size -= 1;

		for(int i = 0;i < size;i += 1)
		{
			deck[i] = deck[i+1];
		}
		return card;
	}

	virtual void Shuffle()
	{
		int n = size, m;

		for(int i = size - 1;i > 0;i -= 1)
		{
			m = rand() % n;
			n -= 1;
			Swap(deck[i],deck[m]);
		}
	}

	virtual bool Load(const Card& value)
	{
		if(ValidCard(value) && size < 22)
		{
			int i = 0;

			while(i < size && !Equal(deck[i],value))
			{
				i += 1;
			}

			if(i == size)
			{
				deck[size] = value;
				size += 1;
				return true;
			}
			return false;
		}
		return false;
	}

	virtual bool IsEmpty() const 
	{
		return (size == 0);
	}

	virtual std::string ToString() const 
	{
		std::stringstream out;
		out << "[";

		for(int i = 0;i < size;i += 1)
		{
			out << deck[i];

			if(i + 1 < size)
			{
				out << ",";
			}
		}
		out << "]";
		return out.str();
	}

	friend std::ostream& operator<<(std::ostream& out,const TarotDeck& obj)
	{
		out << obj.ToString();
		return out;
	}
};

#endif
