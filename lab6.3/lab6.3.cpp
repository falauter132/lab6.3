#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int x, y;
    cout << "Введіть два цілі числа x, y: \n";
    cin >> x >> y;

    if (x > y) {
        cout << "x > y";
    }
    else {
        cout << "x < y";
    }
}

//2222222222//////////////////////////////////////////////////////////////////////

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x;

    cout << "Введіть значення x: ";
    cin >> x;

    if (x <= 2) {
        cout << "Значення f(x): " <<  x * x + 5 * x - 6;
    }
    else {
        cout << "Значення f(x): " << fabs(x + cos(x));
    }
    
    return 0;
}

//333333333333333333333333333/////////////////////////////////////////////////////////////////////

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double a, b, c;

    cout << "Введіть довжини трьох сторін трикутника: ";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            cout << "Трикутник рівносторонній." << endl;
        }
        else if (a == b || a == c || b == c) {
            cout << "Трикутник рівнобедрений." << endl;
        }
        else if(pow(a, 2) == pow(b, 2) + pow(c, 2) || pow(b, 2) == pow(a, 2) + pow(c, 2) || pow(c, 2) == pow(b, 2) + pow(a, 2)){
            cout << "Трикутник прямокутний." << endl;
        }else {
            cout << "Трикутник різносторонній." << endl;
        }
    }
    else {
        cout << "З такими довжинами не можна утворити трикутник." << endl;
    }

    return 0;
}

//444444444444444444444444///////////////////////////////////////////////////////////////////////////

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x, y;

    cout << "Введіть значення x, y: ";
    cin >> x >> y;

    if (x > 0 && y > 0) {
        cout << "Точка знаходиться в 1 квадраті";
    }
    else if(x < 0 && y > 0) {
        cout << "Точка знаходиться в 2 квадраті";;
    }
    else if (x < 0 && y < 0) {
        cout << "Точка знаходиться в 3 квадраті";;
    }
    else if (x > 0 && y < 0) {
        cout << "Точка знаходиться в 4 квадраті";;
    }

    return 0;
}

//55555555555555555555555///////////////////////////////////////////////////////



//66666666666666666666666//////////////////////////////////////////////////////

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x, y, x0, y0, R;

    cout << "Введіть координати точки M (x, y): ";
    cin >> x >> y;

    cout << "Введіть координати центру кола (x0, y0) та радіус R: ";
    cin >> x0 >> y0 >> R;

    if ((x - x0) * (x - x0) + (y - y0) * (y - y0) <= R * R) {
        std::cout << "Точка всередині або на колі.\n";
    }
    else {
        std::cout << "Точка за межами кола.\n";
    }

    return 0;
}

//77777777777777/////////////////////////////////////////////////////////////////

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int number;
    int digit;
    int count = 0;

    cout << "Введіть п’ятизначне число: ";
    cin >> number;

    cout << "Введіть цифру для перевірки: ";
    cin >> digit;

    int temp = number;
    while (temp > 0) {
        if (temp % 10 == digit) {
            count++;
        }
        temp /= 10;
    }

    cout << "Цифра " << digit << " зустрічається " << count << " разів.\n";

    return 0;
}