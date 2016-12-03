#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H


class individual
{
public:
    individual();

    double get_health() {return m_health;}
    double get_hunger() {return m_hunger;}
    double get_thirst() {return m_thirst;}


    void set_health(const double health) {m_health = health;}
    void set_hunger(const double hunger) {m_hunger = hunger;}
    void set_thirst(const double thirst) {m_thirst = thirst;}


private:
    double m_health;
    double m_hunger;
    double m_thirst;
};

#endif // INDIVIDUAL_H
