#include <iostream>
#include "Essay.h"

using namespace std;

Essay::Essay() : GradedActivity()
{
    grammar = 0;
    spelling = 0;
    length = 0;
    content = 0;
}

Essay::Essay(double g, double s, double l, double c)
{
    grammar = g;
    spelling = s;
    length = l;
    content = c;
    setScore(grammar + spelling + length + content);
}

void Essay::setGrammar(double g)
{
    grammar = g;
}

void Essay::setSpelling(double s)
{
    spelling = s;
}

void Essay::setLength(double l)
{
    length = l;
}

void Essay::setContent(double c)
{
    content = c;
}

double Essay::getGrammar() const
{
    return grammar;
}

double Essay::getSpelling() const
{
    return spelling;
}

double Essay::getLength() const
{
    return length;
}

double Essay::getContent() const
{
    return content;
}

double Essay::getTotal() const
{
    return getScore();
}

char Essay::getGrade() const
{
    return getLetterGrade();
}

istream &operator>>(istream &is, Essay &essay)
{
    do
    {
        cout << "Grammar score: ";
        is >> essay.grammar;
        if (essay.grammar < 0 || essay.grammar > 30)
            cout << "Grammar score must be between 0 and 30! Enter again" << endl;
    } while (essay.grammar < 0 || essay.grammar > 30);

    do
    {
        cout << "Spelling score: ";
        is >> essay.spelling;
        if (essay.spelling < 0 || essay.spelling > 20)
            cout << "Spelling score must be between 0 and 20! Enter again" << endl;
    } while (essay.spelling < 0 || essay.spelling > 20);

    do
    {
        cout << "Length score: ";
        is >> essay.length;
        if (essay.length < 0 || essay.length > 20)
            cout << "Length score must be between 0 and 20! Enter again" << endl;
    } while (essay.length < 0 || essay.length > 20);

    do
    {
        cout << "Content score: ";
        is >> essay.content;
        if (essay.content < 0 || essay.content > 30)
            cout << "Content score must be between 0 and 30! Enter again" << endl;
    } while (essay.content < 0 || essay.content > 30);

    essay.setScore(essay.grammar + essay.spelling + essay.length + essay.content);

    return is;
}

ostream &operator<<(ostream &os, Essay &essay)
{
    os << "Essay: " << essay.getScore() << " " << essay.getGrade();
    return os;
}
