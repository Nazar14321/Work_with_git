#include "calculator.h"

int Calculator::Add (double a, double b)
{
<<<<<<< HEAD
	return a + b + 0.5;
=======
	return a + b;
>>>>>>> 93e6b14 (formatting: use tabs instead of spaces)
}

int Calculator::Sub (double a, double b)
{
	return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}
