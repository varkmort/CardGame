#pragma once
#include <vector>

#include "Deck.hpp"

namespace GameLocic {
	class Table {
	public:
		Table();
		~Table();

		const std::vector<std::vector<Card>> &slots()const;
		void placeCard(Card card, int slot);
		const Deck & view()const;
		Card peeck();
		void clean();

	private:
		Deck deck_;
		std::vector<std::vector<Card>> slots_;
		Deck trash_;
	};

}