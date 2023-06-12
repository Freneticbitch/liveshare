#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}

TargetGenerator::~TargetGenerator(){
	std::map<std::string, ATarget *>::iterator it_beg = arr.begin();
	std::map<std::string, ATarget *>::iterator it_end = arr.end();
	while (it_beg != it_end)
	{
		delete it_beg->second;
		++it_beg;
	}
	this->arr.clear();
}

void TargetGenerator::learnTargetType(ATarget *spell){
	if (spell)
		arr.insert(std::pair<std::string, ATarget *>(spell->getType(), spell->clone()));
}

void TargetGenerator::forgetTargetType(const std::string &name){
	std::map<std::string, ATarget *>::iterator it = arr.find(name);
	if (it != arr.end())
		delete it->second;
	arr.erase(name);
}

ATarget *TargetGenerator::createTarget(const std::string &name){
	std::map<std::string, ATarget *>::iterator it = arr.find(name);
	if (it != arr.end())
		return arr[name];
	return NULL;
}

