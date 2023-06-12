#pragma once

#include <iostream>
#include "SpellBook.hpp"
#include "ATarget.hpp"
#include "ASpell.hpp"

class Warlock {
	private:
		SpellBook book;
		std::string name;
		std::string title;

		Warlock();
		Warlock(const Warlock &src);
		Warlock &operator=(const Warlock &src);

	public:
		~Warlock();
		Warlock(const std::string &name, const std::string &title);

		const std::string &getName() const;
		const std::string &getTitle() const;

		void setTitle(const std::string &title);
		void introduce() const;

		void learnSpell(ASpell *spell_ptr);
		void forgetSpell(std::string name);
		void launchSpell(std::string name, ATarget const &atarget_ref);
};
