#pragma once

#include <vector>

#include "Card.hpp"

namespace GameLocic {
	class Deck {
	public:

		int size()const;
		void appEnd(Card card);
		void appFoward(Card card);


		Card getUpper();
		Card viewUpper()const;
		Card getLower();
		Card viewLower()const;

		void shuffle();

	private:
		std::vector<Card> deck_;
	};
}