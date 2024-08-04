#include <iostream>
#include <string>
using namespace std;

class Order {
private:
    string number ;
    string date;
    int money;

public:
    // 建構子
    Order( string n, string d, int m ) : number (n), date(d), money(m) {}

    // 方法：顯示信息
    void displayInfo() {
        cout << "Order Number: " << number << ", Date: " << date << ", Money: " << money << endl;
    }
};

class DineInOrder : public Order {
private:
    string seatNumber ;
    string address;
    int ID;

public:

    DineInOrder( string n, string d, int m, string s, string a, int id ) : Order( n, d, m), seatNumber (s), address(a), ID(id) {}
    
    void displayInfo() {
        Order :: displayInfo();
        cout << "Seat Number: " << seatNumber << ", Address: " << address << ", ID: " << ID << endl;

    }
};


int main() {
    // 創建訂單物件
    Order order("1984", "George Orwell", 328);

    // 使用成員函數
    order.displayInfo();

    // 修改成員變數
    order.setMoney(350);

    // 再次顯示信息
    order.displayInfo();

    // 創建 DineInOrder 物件
    DineInOrder dineInOrder("1984", "2024-07-26", 328, "A12", "123 Main St", 101);

    // 顯示 DineInOrder 信息
    dineInOrder.displayDineInfo();


    return 0;
}