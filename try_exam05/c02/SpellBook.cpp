#include "SpellBook.hpp"

SpellBook::SpellBook(){}

SpellBook::~SpellBook(){
	std::map<std::string, ASpell *>::iterator it_beg = arr.begin();
	std::map<std::string, ASpell *>::iterator it_end = arr.end();
	while (it_beg != it_end)
	{
		delete it_beg->second;
		++it_beg;
	}
	this->arr.clear();
}

void SpellBook::learnSpell(ASpell *spell){
	if (spell)
		arr.insert(std::pair<std::string, ASpell *>(spell->getName(), spell->clone()));
}

void SpellBook::forgetSpell(const std::string &name){
	std::map<std::string, ASpell *>::iterator it = arr.find(name);
	if (it != arr.end())
		delete it->second;
	arr.erase(name);
}

ASpell *SpellBook::createSpell(const std::string &name){
	std::map<std::string, ASpell *>::iterator it = arr.find(name);
	if (it != arr.end())
		return arr[name];
	return NULL;
}

