
#ifndef INTEGRAL_H
#define INTEGRAL_H

#include <QString>

class integral
{
public:
    integral(QString expression)
        :expression(expression)
    {
    };

    QString solve();

private:
    QString expression;
};

#endif // INTEGRAL_H
