#include <iostream>
#include <string>
// i - строки
//  j - столбцы
//  k - уменьшение количества зануляемых элементов строке
//  line - номер строки, которую умножаем на koef
// l - перебираем столбцы матрицы
double all_koef{1};

int det(int j, int k, int n, double *parr, int line, int check)
{
    double koef;
    for (int i = 1; i <= n - 1 - check; ++i)
    {
        double elem_1 = parr[n * i + j];
        double elem_2 = parr[n * (i - 1) + j];
        koef = elem_2 / elem_1;
        all_koef = all_koef * koef;

        for (int l = 0; l < n; ++l)
        {
            parr[n * line + l] = parr[n * line + l] * koef;
        }
        for (int l = n - 1; l >= 0; --l)
        {
            parr[l + n * (line - 1)] = parr[l + n * (line - 1)] - parr[l + n * line];
        }
        ++line;
    }
    return 0;
}

int main()
{
    int k = 0;
    int line = 1;
    int check = 0;
    int n;
    double d = 1;
    std::cin >> n;
    double *parr = new double[n * n]{};

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            std::cin >> parr[n * i + j];
        }
    }
    for (int j = n - 1; j > 0; --j)
    {

        det(j, k, n, parr, line, check);
        ++k;
        ++check;
    }
    for (int z = 0; z < n; ++z)
    {
        d = d * parr[(n + 1) * z];
    }
    std::cout << d / all_koef;
    return 0;
}