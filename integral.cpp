
#include "integral.h"
#include <QLabel>

QString integral::solve()
{
    QString before_cursor;

    QString answer;

    auto it = QString::Iterator();
    it = this->expression.begin();

    int bracket_count = 0;

    while(1)
    {
        before_cursor += it;
        if(*it == '(')
            bracket_count++;
        else if(*it == ')')
        {
            if(bracket_count == 0)
                return "Error: unnecessary ')'";
            bracket_count--;
        }
        else if(*it == '+')
        {
            erase(this->expression, before_cursor);
            integral temp(before_cursor);
            answer += temp.solve() + "+";
        }

        it++;
    }
}
