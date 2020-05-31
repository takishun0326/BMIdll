#pragma once
#ifdef BMIDLL
#define BMIDLL_API __declspec(dllexport)
#else
#define BMIDLL_API __declspec(dllimport)
#endif

#include <string>

namespace MyUtil
{
	const double BmiLow = 18.5;
	const double BmiNormal = 25.0;
	const double BmiHighLv1 = 30.0;
	const double BmiHighLv2 = 35.0;
	const double BmiHighLv3 = 40.0;
	
	class BMIDLL_API Bmi 
	{
	public:
		Bmi(const std::string name, const double height, const double weight);
		std::string calc();
		std::string getName();
		double getBmi();
		~Bmi() {};

	private:
		Bmi(); // default コンストラクタ封印
		std::string name_;
		double height_;
		double weight_;
		double bmi_;
	};
}