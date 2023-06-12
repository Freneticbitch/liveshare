#pragma once

#include <map>
#include "ATarget.hpp"

class TargetGenerator {
	private:
		std::map<std::string, ATarget *> arr;

		TargetGenerator(const TargetGenerator &src);
		TargetGenerator &operator=(const TargetGenerator &src);
	public:
		TargetGenerator();
		~TargetGenerator();

		void learnTargetType(ATarget *spell_ptr);
		void forgetTargetType(const std::string &name);
		ATarget *createTarget(const std::string &name);
};
