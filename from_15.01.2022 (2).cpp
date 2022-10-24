

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    cout << "Решение с заполнением массива при помощи rand().\n\n";
    const int row = 3; // строки 
    const int col = 4; // столбцы
    int mr[row][col]; // массив размером row на col
    int sum = 0;
    /* перебираем отдельные строки
    (одномерные массивы в совокупности) */
    for (int i = 0; i < row; i++)
    {
        // перебираем отдельные элементы каждой 
        // строки 
        for (int j = 0; j < col; j++)
        {
            mr[i][j] = rand() % 100;
            if (mr[i][j] == 0)
            {
                sum++;
            }
        }

    }
    cout << "Заполненый массив: \n";

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            cout << mr[i][j] << "\t";
        }
        /* переход на другую строку матрицы */
        cout << "\n\n";
    }
    cout << "Нулей в массиве: " << sum << "\n\n\n";


    cout << "Решение с заполнением массива при помощи рук и фантазии.\n\n";

    const int row1 = 3;  
    const int col1 = 4; 
    int mr1[row1][col1]{ 
        {21, 5, 0, 0}, 
        {3, 8, 6, 9}, 
        {7, 0, 98, 4} 
    };
    int sum1 = 0;

    for (int a = 0; a < row1; a++)
    {
        
        for (int b = 0; b < col1; b++)
        {
            
            if (mr1[a][b] == 0)
            {
                sum1++;
            }
        }

    }
    cout << "Заполненый массив: \n";

    for (int a = 0; a < row1; a++)
    {

        for (int b = 0; b < col1; b++)
        {
            cout << mr1[a][b] << "\t";
        }

        cout << "\n\n";
    }
    cout << "Нулей в массиве: " << sum1 << "\n\n\n";
}