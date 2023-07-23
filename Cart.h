// Создайте класс Transport (транспортное средство) и его дочерние классы Автомобиль, Повозка, Велосипед.
//Создайте методы для расчета времени и стоимости поездки.

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

