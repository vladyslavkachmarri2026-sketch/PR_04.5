// Lab_04_5.cpp
// Качмар Владислав
// Лабораторна робота № 4.5
// Варіант 12

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib> 
#include <ctime>   
using namespace std;

int main() {
    srand((unsigned)time(NULL));

    double x, y, R;

    cout << "R = ";
    cin >> R;

    
    cout << "\n---------------------------------------" << endl;
    cout << "|" << setw(5) << "N" // номерація рядків N(Number)
        << " |" << setw(10) << "X"
        << " |" << setw(10) << "Y"
        << " |" << setw(8) << "Hit" << " |" << endl;
    cout << "---------------------------------------" << endl;

    cout << fixed << setprecision(2);

    for (int i = 1; i <= 10; i++) {
        // Генерація випадкових координат у інтервалі [-R; R]
        x = -R + (double)rand() / RAND_MAX * (2 * R);
        y = -R + (double)rand() / RAND_MAX * (2 * R);

        bool isHit = false;

        
        if (((x + R) * (x + R) + (y - R) * (y - R) >= R * R && x >= -R && x <= 0 && y >= 0 && y <= R) ||
            ((x - R) * (x - R) + (y + R) * (y + R) >= R * R && x >= 0 && x <= R && y >= -R && y <= 0))
        {
            isHit = true;
        }

        cout << "|" << setw(5) << i
            << " |" << setw(10) << x
            << " |" << setw(10) << y
            << " |" << setw(8) << (isHit ? "yes" : "no") << " |" << endl;
    }

    cout << "---------------------------------------" << endl;

    return 0;
}