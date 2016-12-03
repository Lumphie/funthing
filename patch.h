#ifndef PATCH_H
#define PATCH_H


class patch
{
public:
    patch();

    double get_food() {return m_food;}
    double get_water() {return m_water;}
    int get_num_individuals() {return m_num_individuals;}


    void set_food(const double food) {m_food = food;}
    void set_water(const double water) {m_water = water;}
    void set_num_individuals(const int num_individuals) {m_num_individuals = num_individuals;}

private:
    double m_food;
    double m_water;
    int m_num_individuals;

};

#endif // PATCH_H
