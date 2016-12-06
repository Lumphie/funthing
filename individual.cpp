#include "individual.h"
#include <stdexcept>

individual::individual()
    : m_health{1.0},
      m_hunger{0.0},
      m_thirst{0.0}
{}

void individual::make_random_move(const int distance, std::mt19937& gen)
{
    std::uniform_int_distribution<> dis(0,4);
    switch(dis(gen))
    {
    case 0: this->move_left(distance); break;
    case 1: this->move_right(distance); break;
    case 2: this->move_up(distance); break;
    case 3: this->move_down(distance); break;
    default: throw std::invalid_argument("Should not get here!");

    }
}

void individual::move_down(const int distance, const int max_y)
{
    int y = this->get_y_coord() = distance;
    y = y%max_y;
    assert(y >= 10)
    this->set_y_coord(y);
}

void individual::move_left(const int distance, const int max_x)
{

}

void individual::move_right(const int distance, const int max_x)
{

}

void individual::move_up(const int distance, const int max_y)
{

}
