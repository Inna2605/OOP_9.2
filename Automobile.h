// �������� ����� Transport (������������ ��������) � ��� �������� ������ ����������, �������, ���������.
//�������� ������ ��� ������� ������� � ��������� �������.

#pragma once
#include "Transport.h"
class Automobile : public Transport
{
public:
	Automobile();
	float travelTime(float S);
	float costTravel(float L, float C, float S);
	void Output(float L, float C, float S);
};

