#include "calculator.h"

static inline int round_to_int(double x) {

    return static_cast<int>(x + (x >= 0 ? 0.5 : -0.5));
}

int Calculator::Add(double a, double b)
{
    return round_to_int(a + b);
}

int Calculator::Sub(double a, double b)
{
    return round_to_int(a - b);
}

int Calculator::Mul(double a, double b)
{
    return round_to_int(a * b);
}
