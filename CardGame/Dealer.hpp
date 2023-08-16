#pragma once

#include <vector>

#include "Rules.hpp"
#include "Gambler.hpp"
#include "Table.hpp"

namespace GameLocic {
	class Dealer {
	public:
		Dealer();
		~Dealer();




	private:
		Table table_;
		std::vector<Gambler> gamblers_;
		ARules *rules_;
	};

}