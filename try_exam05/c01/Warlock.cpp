#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title){
	this->name = name;
	this->title = title;
	std::cout << this->name << ": This looks like another boring day.\n";
}

Warlock::~Warlock(){
	std::cout << this->name << ": My job here is done!\n";
	std::map<std::string, ASpell *>::iterator it_beg = arr.begin();
	std::map<std::string, ASpell *>::iterator it_end = arr.end();
	while (it_beg != it_end)
	{
		delete it_beg->second;
		++it_beg;
	}
	this->arr.clear();
}

const std::string &Warlock::getName() const {return this->name;}

const std::string &Warlock::getTitle() const {return this->title;}

void Warlock::setTitle(const std::string &title) {this->title = title;}

void Warlock::introduce() const {std::cout << this->name << ": I am " << this->name << ", " << this->title << "!\n";}

void Warlock::learnSpell(ASpell *spell){
	if (spell)
		arr.insert(std::pair<std::string, ASpell *>(spell->getName(), spell->clone()));
}

void Warlock::forgetSpell(const std::string &name){
	std::map<std::string, ASpell *>::iterator it = arr.find(name);
	if (it != arr.end())
		delete it->second;
	arr.erase(name);
}

void Warlock::launchSpell(std::string spell_name, ATarget const &target_ref)
{
	ASpell* spell = arr[spell_name];
	if (spell)
		spell->launch(target_ref);
}