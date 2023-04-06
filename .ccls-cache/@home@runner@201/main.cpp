//Ввести деяку послідовність цілих чисел і створити динамічний масив лише з двознакових чисел. За допомогою функції обчислити кількість та суму парних елементів масиву
#include <iostream>
using namespace std;

int f(int *arr,int n, int& k) 
{
    int sum = 0; k=0;
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] % 2 == 0) // перевірка, чи є елемент парним числом
        {
            sum += arr[i]; // додавання парного елементу до суми
          k++;
        }
    }
   return sum;
}

int main() 
{
    int n; 
    cout << "Введіть розмір послідовності:\n";
    cin >> n;
    int count = 0; // 
    int *arr = new int[n]; // виділення пам'яті для масиву типу int з розміром n та присвоєння початкової адреси змінній arr
    cout << "Введіть послідовність: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
        if (arr[i] >= 10 && arr[i] <= 99)  count++; // якщо елемент масиву arr двозначне число, то збільшуємо змінну count на 1
    }
  
    int j = 0,k;  //  
    int *new_arr = new int[count]; // виділення пам'яті для нового масиву типу int з розміром n та присвоєння початкової адреси змінній new_arr
    for (int i = 0; i < n; i++) 
    {
       if (arr[i] >= 10 && arr[i] <= 99)
       {
           new_arr[j++] = arr[i];
       }
    }
   
    cout << "Двозначні числа у введеній послідовності: ";
    for (int i = 0; i < count; i++) 
    {
        cout << new_arr[i] << " ";
    }
    cout << endl;
  
    int sum =f( arr,n,k);
   cout << "Сума парних елементів: " << sum << endl<< "Кількість парних елементів: " << k << endl;
   
delete[]new_arr;
delete[]arr;
}
