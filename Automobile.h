// Создайте класс Transport (транспортное средство) и его дочерние классы Автомобиль, Повозка, Велосипед.
//Создайте методы для расчета времени и стоимости поездки.

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

