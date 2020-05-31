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
		
		if (bmi_ < BmiLow) Message = "��̏d";
		else if (bmi_ < BmiNormal) Message = "���ʑ̏d";
		else if (bmi_ < BmiHighLv1) Message = "�얞�i1�x�j";
		else if (bmi_ < BmiHighLv2) Message = "�얞�i�Q�x�j";
		else if (bmi_ < BmiHighLv3) Message = "�얞�i�R�x�j";
		return Message;
	}

	std::string Bmi::getName() {
		return name_;
	}

	double Bmi::getBmi() {
		return bmi_;
	}
}