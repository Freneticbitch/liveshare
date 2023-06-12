#pragma once

#include "ASpell.hpp"

class ASpell;

class ATarget {
	private:
		std::string type;
	public:
		ATarget();
		ATarget(const ATarget &src);
		ATarget &operator=(const ATarget &src);
		ATarget(const std::string &type);
		virtual ~ATarget();

		const std::string &getType() const;

		void getHitBySpell(const ASpell &src) const;

		virtual ATarget *clone() const = 0;
};
