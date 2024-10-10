#include <iostream>
#include <cmath>
using namespace std;

// Ітераційний варіант
double S0(const int N)
{
    double s = 0;
    for (int i = 1; i <= N; i++)
        s += (sin(10.0 * i) + cos(10.0 / i)) / sqrt(i);
    return s;
}

// Рекурсивний варіант (збільшення i)
double S1(const int N, const int i)
{
    if (i > N)
        return 0;
    else
        return (sin(10.0 * i) + cos(10.0 / i)) / sqrt(i) + S1(N, i + 1);
}

// Рекурсивний варіант (зменшення i)
double S2(const int N, const int i)
{
    if (i < 1)
        return 0;
    else
        return (sin(10.0 * i) + cos(10.0 / i)) / sqrt(i) + S2(N, i - 1);
}

// Рекурсивний варіант (з накопиченням результату зверху вниз)
double S3(const int N, const int i, double t)
{
    t = t + (sin(10.0 * i) + cos(10.0 / i)) / sqrt(i);
    if (i >= N)
        return t;
    else
        return S3(N, i + 1, t);
}

// Рекурсивний варіант (з накопиченням результату знизу вверх)
double S4(const int N, const int i, double t)
{
    t = t + (sin(10.0 * i) + cos(10.0 / i)) / sqrt(i);
    if (i <= 1)
        return t;
    else
        return S4(N, i - 1, t);
}

int main()
{
    const int N = 15;

    // Виведення результатів кожної функції
    cout << "       (iter) S0 = "  << S0(N)       << endl;
    cout << "  (rec up ++) S1 = " << S1(N, 1)    << endl;
    cout << "  (rec up --) S2 = " << S2(N, N)    << endl;
    cout << "(rec down ++) S3 = " << S3(N, 1, 0) << endl;
    cout << "(rec down --) S4 = " << S4(N, N, 0) << endl;

    return 0;
}
