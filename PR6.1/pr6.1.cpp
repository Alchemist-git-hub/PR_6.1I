#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

const int N = 23;

// Перевірка критерію:
// елемент НЕ є непарним з індексом, кратним 3
bool IsSelected(const int s[], const int i)
{
    return !(s[i] % 2 != 0 && i % 3 == 0);
}

// Формування масиву випадковими числами
void Create(int s[], const int n)
{
    for (int i = 0; i < n; i++)
        s[i] = 4 + rand() % 13;
}

// Виведення масиву
void Print(const int s[], const int n)
{
    for (int i = 0; i < n; i++)
        cout << setw(4) << s[i];

    cout << endl;
}

// Обчислення кількості елементів за критерієм
int Count(const int s[], const int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
        if (IsSelected(s, i))
            count++;

    return count;
}

// Обчислення суми елементів за критерієм
int Sum(const int s[], const int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
        if (IsSelected(s, i))
            sum += s[i];

    return sum;
}

// Заміна відібраних елементів нулями
void Replace(int s[], const int n)
{
    for (int i = 0; i < n; i++)
        if (IsSelected(s, i))
            s[i] = 0;
}


int main()
{
    srand(static_cast<unsigned int>(time(nullptr)));

    int s[N];

    Create(s, N);

    cout << "Start array:" << endl;
    Print(s, N);

    cout << "Count = " << Count(s, N) << endl;
    cout << "Sum = " << Sum(s, N) << endl;

    Replace(s, N);

    cout << "Modified array:" << endl;
    Print(s, N);
    return 0 ;
}
