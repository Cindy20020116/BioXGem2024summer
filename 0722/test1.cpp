#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title ;
    string author;
    int pages;

public:
    // 建構子
    Book( string t, string a, int p ) : title (t), author(t), pages(p) {}

    // 方法：顯示信息
    void displayInfo() {
        cout << "Title: " << title << ", Author: " << author << ", Pages: " << pages << endl;
    }

    // 方法：設置頁數
    void setPages(int p) {
        pages = p;
    }

    // 方法：獲取頁數
    int getPages() {
        return pages;
    }
};
int main() {
    // 創建Book物件
    Book myBook("1984", "George Orwell", 328);

    // 使用成員函數
    myBook.displayInfo();

    // 修改成員變數
    myBook.setPages(350);

    // 再次顯示書籍信息
    myBook.displayInfo();

    return 0;
}