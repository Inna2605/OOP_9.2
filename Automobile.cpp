// �������� ����� Transport (������������ ��������) � ��� �������� ������ ����������, �������, ���������.
//�������� ������ ��� ������� ������� � ��������� �������.

#include<iostream>
#include "Automobile.h"
#include"Transport.h"

Automobile::Automobile()
{
	speed = 90;
}

float Automobile::travelTime(float S)
{
	float t = 0;
	t = S / speed;
	return t;
}

float Automobile::costTravel(float L, float C, float S)
{
	float cost = 0;
	cost = ((L * C) / 100) * S;
	return cost;
}

void Automobile::Output(float L, float C, float S)
{
	float Time = travelTime(S);
	std::cout << "\n����� �������: " << round (Time * 100) / 100 << " �����. � �������: " << (round(Time * 100) / 100) * 60;
	float Cost = costTravel(L, C, S);
	std::cout << "\n��������� �������: " << round (Cost * 100) / 100;
	std::cout << "\n\n";
}
