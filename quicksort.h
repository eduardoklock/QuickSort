#include <vector>
#include <iostream>



using std::vector;
using std::cout;
using std::endl;

template <typename T>
void quickSort(T structure, int begin, int end)
{
    int left(begin), right(end), half;
    half = structure[(begin + end)/2];
    while(left <= right)
    {
        while(structure[left] < half && left < end)
        {
            left++;
            cout << "aumento esquerda" << endl;
        }
        while(structure[right] > half && right > begin)
        {
            right--;
            cout << "diminuiu direita" << endl;
        }
        if(left <= right)
        {
            int y;
            y = structure[left];
            structure[left] = structure[right];
            structure[right] = y;
            cout << "troca esqyerda direita" << endl;
            left++;
            cout << "aumento esquerda" << endl;
            right--;
            cout << "diminuiu direita" << endl;

        }
    }
    if(right > begin)
    {
        quickSort(structure, begin, right);
    }
    if(left < end
)
    {
        quickSort(structure,  left, end);
    }
}


