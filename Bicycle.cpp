// �������� ����� Transport (������������ ��������) � ��� �������� ������ ����������, �������, ���������.
//�������� ������ ��� ������� ������� � ��������� �������.

#include<iostream>
#include "Bicycle.h"
#include "Transport.h"

Bicycle ::Bicycle()
{
	speed = 20;
}

float Bicycle::travelTime(float S)
{
	float t = 0;
	t = S / speed;
	return t;
}

int Bicycle::costTravel()
{
	int cost = 0;
	return cost;
}

void Bicycle::Output(float S)
{
	float Time = travelTime(S);
	std::cout << "\n����� �������: " << round(Time * 100) / 100 << " �����. � �������: " << (round(Time * 100) / 100) * 60;
	float Cost = costTravel();
	std::cout << "\n��������� �������: " << Cost;
	std::cout << "\n\n";
}
