// Создайте класс Transport (транспортное средство) и его дочерние классы Автомобиль, Повозка, Велосипед.
//Создайте методы для расчета времени и стоимости поездки.

#pragma once
class Transport
{
protected:
	int speed;
public:
	Transport();
	int getSpeed();
};

