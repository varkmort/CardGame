#pragma once

#include "Hand.hpp"
#include "Controle.hpp"
#include "Table.hpp"

namespace GameLocic {
	

	class Gambler {
	public:
		std::pair<Card, int> move(Table &table);
		void get(Card card);
		void get(std::vector<Card> cards);

	private:
		Hand hand_;
		AControle *controle_;
	};

}