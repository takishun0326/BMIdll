#include"Bmi.h"
#include<stdexcept>

namespace MyUtil {
	Bmi::Bmi(const std::string name, const double height, const double weight)
		:name_(name), height_(height), weight_(weight), bmi_(0.0) {

	}

	std::string Bmi::calc() {
		std::string Message;
		if (height_ == 0) std::invalid_argument("Cannnot devide by zero!");
		bmi_ = weight_ / (height_ * height_);
		
		if (bmi_ < BmiLow) Message = "低体重";
		else if (bmi_ < BmiNormal) Message = "普通体重";
		else if (bmi_ < BmiHighLv1) Message = "肥満（1度）";
		else if (bmi_ < BmiHighLv2) Message = "肥満（２度）";
		else if (bmi_ < BmiHighLv3) Message = "肥満（３度）";
		return Message;
	}

	std::string Bmi::getName() {
		return name_;
	}

	double Bmi::getBmi() {
		return bmi_;
	}
}