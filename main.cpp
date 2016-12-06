#include <iostream>
#include <vector>
#include "patch.h"
#include "individual.h"

std::vector<std::vector<patch>> set_map(const int size);
void print_individual_map(std::vector<std::vector<patch>>& map);
void print_food_map(std::vector<std::vector<patch>>& map);
void print_water_map(std::vector<std::vector<patch>>& map);

int main()
{
    const int size = 11;
    std::vector<std::vector<patch>> map = set_map(size);

    map[5][5].set_num_individuals(2);

    print_individual_map(map);
    print_food_map(map);
    print_water_map(map);


    return 0;
}

void print_individual_map(std::vector<std::vector<patch>>& map)
{
    int size = static_cast<int>(map[0].size());

    std::cout << "   ";
    for(int i = -2; i < size; ++i)
    {
        for(int j = -1; j < size; ++j)
        {
            if(i == -2)
            {
                if(j!=-1)
                    std::cout << j << ' ' ;
            }
            else if (i == -1)
            {
                if(j!=-1)
                    std::cout << '-' << ' ';
                else
                    std::cout << "   ";
            }
            else
            {
                if(j == -1)
                {
                    if (i < 10)
                        std::cout << i << " |";
                    else
                        std::cout << i << '|';

                }
                else
                    std::cout << map[i][j].get_num_individuals() << ' ';
            }

        }
        std::cout << '\n';

    }
}

void print_food_map(std::vector<std::vector<patch>>& map)
{
    int size = static_cast<int>(map[0].size());

    std::cout << "   ";
    for(int i = -2; i < size; ++i)
    {
        for(int j = -1; j < size; ++j)
        {
            if(i == -2)
            {
                if(j!=-1)
                    std::cout << j << ' ' ;
            }
            else if (i == -1)
            {
                if(j!=-1)
                    std::cout << '-' << ' ';
                else
                    std::cout << "   ";
            }
            else
            {
                if(j == -1)
                {
                    if (i < 10)
                        std::cout << i << " |";
                    else
                        std::cout << i << '|';

                }
                else
                    std::cout << map[i][j].get_food() << ' ';
            }

        }
        std::cout << '\n';

    }
}

void print_water_map(std::vector<std::vector<patch>>& map)
{
    int size = static_cast<int>(map[0].size());

    std::cout << "   ";
    for(int i = -2; i < size; ++i)
    {
        for(int j = -1; j < size; ++j)
        {
            if(i == -2)
            {
                if(j!=-1)
                    std::cout << j << ' ' ;
            }
            else if (i == -1)
            {
                if(j!=-1)
                    std::cout << '-' << ' ';
                else
                    std::cout << "   ";
            }
            else
            {
                if(j == -1)
                {
                    if (i < 10)
                        std::cout << i << " |";
                    else
                        std::cout << i << '|';

                }
                else
                    std::cout << map[i][j].get_water() << ' ';
            }

        }
        std::cout << '\n';

    }
}

std::vector<std::vector<patch>> set_map(const int size)
{
    patch p;
    std::vector<patch> row(size,p);
    std::vector<std::vector<patch>> map(size,row);
    return map;

}
