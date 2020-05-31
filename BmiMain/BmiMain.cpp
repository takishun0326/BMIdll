#include "../Dllexecute/Bmi/Bmi.h"
#include <iostream>
#include <iomanip>
#include <vector>

using namespace MyUtil;

int main()
{
	std::vector<Bmi *> bmi;
	bmi.push_back(new Bmi("yuseisui", 1.65, 50.0));
	bmi.push_back(new Bmi("takishun", 1.69, 60.1));
	bmi.push_back(new Bmi("yoko", 1.78, 55.0));

	for (std::vector<Bmi*>::iterator it = bmi.begin(); it != bmi.end(); ++it) {
		std::cout << (*it)->getName() << "のBMIは"
			<< std::setprecision(4) << (*it)->getBmi() << " で、" <<
			(*it)->calc() << "です。" << std::endl;
	}
	for (std::vector<Bmi *>::iterator it = bmi.begin(); it != bmi.end(); ++it) {
		delete *it;
	}
	return 0;
}