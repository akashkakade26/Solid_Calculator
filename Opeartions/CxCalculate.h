#pragma once
class CxCalculate
{
	double dbVal1;
	double dbVal2;

public:
	//Constructor
	CxCalculate() : dbVal1(0.0), dbVal2(0.0) {}

	// Destructor
	~CxCalculate() {}

	double Add(double, double);
	double Subtract(double, double);
	double Multiply(double, double);
	double Divide(double, double);
};

