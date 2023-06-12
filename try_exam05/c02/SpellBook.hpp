#pragma once

#include <map>
#include "ASpell.hpp"

class SpellBook {
	private:
		std::map<std::string, ASpell *> arr;

		SpellBook(const SpellBook &src);
		SpellBook &operator=(const SpellBook &src);
	public:
		SpellBook();
		~SpellBook();

		void learnSpell(ASpell *spell_ptr);
		void forgetSpell(const std::string &name);

		ASpell *createSpell(const std::string &name);
};
