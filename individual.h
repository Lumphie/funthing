#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H

#include <random>

class individual
{
public:
    individual();

    double get_health() {return m_health;}
    double get_hunger() {return m_hunger;}
    double get_thirst() {return m_thirst;}
    int get_x_coord() {return m_x_coord;}
    int get_y_coord() {return m_y_coord;}

    void set_health(const double health) {m_health = health;}
    void set_hunger(const double hunger) {m_hunger = hunger;}
    void set_thirst(const double thirst) {m_thirst = thirst;}
    void set_x_coord(const int x) {m_x_coord = x;}
    void set_y_coord(const int y) {m_y_coord = y;}
    void make_random_move(const int distance);

private:
    double m_health;
    double m_hunger;
    double m_thirst;
    int m_x_coord;
    int m_y_coord;


    void move_left(const int distance, const int max_x);
    void move_right(const int distance, const int max_x);
    void move_up(const int distance, const int max_y);
    void move_down(const int distance, const int max_y);
};

#endif // INDIVIDUAL_H
