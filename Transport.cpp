// Создайте класс Transport (транспортное средство) и его дочерние классы Автомобиль, Повозка, Велосипед.
//Создайте методы для расчета времени и стоимости поездки.

#include<iostream>
#include "Transport.h"


Transport::Transport()
{
	speed = 0;
}

int Transport::getSpeed()
{
	return speed;
}
