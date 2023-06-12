#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"
class Warlock {
	private:
		std::map<std::string, ASpell *> arr;
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
		void forgetSpell(const std::string &name);
		void launchSpell(std::string name, ATarget const &atarget_ref);
};
