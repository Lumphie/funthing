#include <iostream>
#include <vector>
#include "patch.h"
#include "individual.h"

std::vector<std::vector<patch>> set_map(const int size);
void print_map(std::vector<std::vector<patch>>& map);

int main()
{
    const int size = 10;
    std::vector<std::vector<patch>> map = set_map(size);
    for(int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            int num_individuals = i*j%10;
            map[i][j].set_num_individuals(num_individuals);

        }
    }

    map[5][5].set_num_individuals(5);
    print_map(map);


    return 0;
}

void print_map(std::vector<std::vector<patch>>& map)
{
    int size = static_cast<int>(map[0].size());

    std::cout << "  ";
    for(int i = -1; i < size; ++i)
    {
        for(int j = -1; j < size; ++j)
        {
            if(i == -1)
            {
                if(j!=-1)
                    std::cout << j << ' ';
            }
            else
            {
                if(j == -1)
                {
                    std::cout << i << ' ';
                }
                else
                std::cout << map[i][j].get_num_individuals() << ' ';
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
