// Создайте класс Transport (транспортное средство) и его дочерние классы Автомобиль, Повозка, Велосипед.
//Создайте методы для расчета времени и стоимости поездки.

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
	std::cout << "\nВремя поездки: " << round(Time * 100) / 100 << " часов. В минутах: " << (round(Time * 100) / 100) * 60;
	float Cost = costTravel();
	std::cout << "\nСтоимость поездки: " << Cost;
	std::cout << "\n\n";
}
