#pragma once

#include <utility>


#include "Card.hpp"
#include "Hand.hpp"
#include "Table.hpp"

namespace GameLocic {

	class AControle {
	public:

		virtual std::pair<Card, int> move(Table &table, Hand &hand)=0;
		virtual void get(Card card)=0;
		virtual void get(std::vector<Card> cards)=0;
	};


}