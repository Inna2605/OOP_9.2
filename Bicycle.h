// �������� ����� Transport (������������ ��������) � ��� �������� ������ ����������, �������, ���������.
//�������� ������ ��� ������� ������� � ��������� �������.

#pragma once
#include "Transport.h"
class Bicycle : public Transport
{
public:
	Bicycle();
	float travelTime(float S);
	int costTravel();
	void Output(float S);
};

