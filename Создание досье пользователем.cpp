
#include <iostream>

int main()
{
    
    std :: string name;
    std::string naz;
    int dat, age, weight, height;
    using namespace::std;
    setlocale(LC_ALL, "Russian");
    cout << "Введите своё имя" << "\n";
    cin >> name;
    cout << "Введите год своего рождения" << "\n";
    cin >> dat;
    cout << "Введите свой возраст" << "\n";
    cin >> age;
    cout << "Введите вес своего тела" << "\n";
    cin >> weight;
    cout << "Введите свой рост" << "\n";
    cin >> height;
    cout << "Какой вы национальности?" << "\n";
    cin >> naz;
    cout << "Имя:" << name << "\n Год рождения:" << dat << "\n Возраст:" << age << "\n Масса тела:" << weight << "\n Рост:" << height << "\n Национальность:" << naz;
    
   
    
}




