#include "calculator.h"

static int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}

static int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

static int Calculator::Mul (double a, double b)
{
    return a * b;
}
