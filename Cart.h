// �������� ����� Transport (������������ ��������) � ��� �������� ������ ����������, �������, ���������.
//�������� ������ ��� ������� ������� � ��������� �������.

#pragma once
#include "Transport.h"
class Cart : public Transport
{
public:
	Cart();
	float travelTime(float S);
	int costTravel();
	void Output(float S);
};

