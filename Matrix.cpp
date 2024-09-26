
#include <iostream>

double det(double *parr, int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            double koef = parr[j * n + i] / parr[i * n + i];
            for (int line = i; line < n; ++line)
            {
                parr[j * n + line] = parr[j * n + line] - koef * parr[i * n + line];
            }
        }
    }
    double det = 1;
    for (int i = 0; i < n; ++i)
    {
        det = det * parr[i * n + i];
    }
    return det;
}

int main()
{
    int n;
    std::cin >> n;
    double *parr = new double[n * n]{};

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            std::cin >> parr[n * i + j];
        }
    }

    std::cout << det(parr, n);
    delete[] parr;
    return 0;
}
