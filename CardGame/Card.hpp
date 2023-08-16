#pragma once

namespace GameLocic {

	class Card {
	public:
		Card() = default;
		Card(int suit,int value);
		~Card() = default;

		int suit()const;
		int value()const;

	private:
		int suit_;
		int value_;
	};
}