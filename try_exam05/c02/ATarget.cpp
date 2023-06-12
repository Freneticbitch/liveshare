#include "ATarget.hpp"

ATarget::ATarget(){}
ATarget::~ATarget(){}

ATarget::ATarget(const std::string &type){this->type = type;}

ATarget::ATarget(const ATarget &src){*this = src;}

ATarget &ATarget::operator=(const ATarget &src){
	this->type = src.type;
	return *this;
}

const std::string &ATarget::getType() const {return this->type;}

void ATarget::getHitBySpell(const ASpell &spell) const {
	std::cout << this->type << " has been " << spell.getEffects() << "!\n";
}
