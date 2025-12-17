#include <iostream>
#include <cmath>
using namespace std;

/* =========================================================
   ЗАВДАННЯ 1. PROC22
   Процедура обчислення об'єму і площі поверхні циліндра
   ========================================================= */

void CylinderVH(double r, double h, double &V, double &S)
{
    V = M_PI * r * r * h;
    S = 2 * M_PI * r * (r + h);
}

/* =========================================================
   ЗАВДАННЯ 1. PROC49
   Функція обчислення медіани трикутника
   ========================================================= */

double CalcMedian(double a, double b, double c)
{
    return 0.5 * sqrt(2 * b * b + 2 * c * c - a * a);
}

/* =========================================================
   ЗАВДАННЯ 2. INTEGER12
   ========================================================= */

// 1) Введення з перевіркою
bool inputThreeDigit(int &n)
{
    cout << "Введіть тризначне число: ";
    cin >> n;

    if (cin.fail()  n < 100  n > 999)
        return false;

    return true;
}

// 2) Обробка
int processInteger12(int n)
{
    int a = n / 100;
    int b = (n / 10) % 10;
    int c = n % 10;

    return c * 100 + b * 10 + a;
}

// 3) Виведення
void outputInteger12(int res)
{
    cout << "Результат: " << res << endl;
}

/* =========================================================
   ПРОЦЕДУРИ ЗАВДАНЬ (БЕЗ ПАРАМЕТРІВ)
   ========================================================= */

// Завдання 1
void task1()
{
    cout << "\n--- Завдання 1 (Proc22 + Proc49) ---\n";

    // Proc22 — 3 циліндри
    for (int i = 1; i <= 3; i++)
    {
        double r, h, V, S;
        cout << "\nЦиліндр " << i << endl;
        cout << "r = "; cin >> r;
        cout << "h = "; cin >> h;

        CylinderVH(r, h, V, S);

        cout << "Об'єм V = " << V << endl;
        cout << "Площа S = " << S << endl;
    }

    // Proc49 — 3 трикутники
    for (int i = 1; i <= 3; i++)
    {
        double a, b, c;
        cout << "\nТрикутник " << i << endl;
        cout << "a = "; cin >> a;
        cout << "b = "; cin >> b;
        cout << "c = "; cin >> c;

        double m = CalcMedian(a, b, c);
        cout << "Медіана ma = " << m << endl;
    }
}

// Завдання 2
void task2()
{
    cout << "\n--- Завдання 2 (Integer12) ---\n";

    int n;
    if (!inputThreeDigit(n))
    {
        cout << "Помилка! Некоректне число.\n";
        return;
    }

    int res = processInteger12(n);
    outputInteger12(res);
}

/* =========================================================
   МЕНЮ (ЗАВДАННЯ 3)
   ========================================================= */

int main()
{
    int choice;

    do
    {
        cout << "\n====== МЕНЮ ======\n";
        cout << "1 - Завдання 1 (Proc22, Proc49)\n";
        cout << "2 - Завдання 2 (Integer12)\n";
        cout << "0 - Вихід\n";
        cout << "Ваш вибір: ";
        cin >> choice;

        switch (choice)
        {
            case 1: task1(); break;
            case 2: task2(); break;
            case 0: cout << "Завершення програми.\n"; break;
            default: cout << "Невірний вибір!\n";
        }

    } while (choice != 0);

    return 0;
}
