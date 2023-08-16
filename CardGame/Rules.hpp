#pragma once

#include "Deck.hpp"

namespace GameLocic {

	class ARules {
	public:
		ARules();
		virtual ~ARules();

		virtual Deck getDeck()=0;
		virtual bool checkMove(Card upper, Card lower) = 0;
		virtual bool checkGame(Table &table)=0;
		virtual bool checkGamblers(Gamblers &gamblers) = 0;


	private:

	};

	

}