#pragma once

#include <vector>

#include "Card.hpp"


namespace GameLocic {

	class Hand {
	public:
		Hand()=default;
		~Hand()=default;

		std::vector<Card> &viev()const;
		Card peek(int num);
		void collect(Card card);
		void collect(std::vector<Card> cards);

	private:
		std::vector<Card> hand_;
	};



}