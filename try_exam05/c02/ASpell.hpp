#pragma once

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell {
	private:
		std::string name;
		std::string effects;
	public:
		ASpell();
		ASpell(const ASpell &src);
		ASpell &operator=(const ASpell &src);
		ASpell(const std::string &name, const std::string &effects);
		virtual ~ASpell();

		const std::string &getName() const;
		const std::string &getEffects() const;

		void launch(const ATarget &src) const;

		virtual ASpell *clone() const = 0;
};
