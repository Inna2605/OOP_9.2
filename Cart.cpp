// �������� ����� Transport (������������ ��������) � ��� �������� ������ ����������, �������, ���������.
//�������� ������ ��� ������� ������� � ��������� �������.

#include<iostream>
#include "Cart.h"
#include"Transport.h"

Cart::Cart()
{
	speed = 5;
}

float Cart::travelTime(float S)
{
	float t = 0;
	t = S / speed;
	return t;
}

int Cart::costTravel()
{
	int cost = 0;
	return cost;
}

void Cart::Output(float S)
{
	float Time = travelTime(S);
	std::cout << "\n����� �������: " << round(Time * 100) / 100 << " �����. � �������: " << (round(Time * 100) / 100) * 60;
	float Cost = costTravel();
	std::cout << "\n��������� �������: " << Cost;
	std::cout << "\n\n";
}
