#include <iostream>
#include <vector>
using namespace std;

class Book {
public:
    int id, qty;
    string name;

    Book(int i, string n, int q) {
        id = i;
        name = n;
        qty = q;
    }

    void show() {
        cout << id << "  " << name << "  " << qty << endl;
    }
};

int main() {
    vector<Book> books;
    int choice;

    do {
        cout << "\n1.Add Book\n2.View Books\n3.Exit\n";
        cin >> choice;

        if (choice == 1) {
            int id, qty;
            string name;

            cout << "Enter ID, Name, Quantity: ";
            cin >> id >> name >> qty;

            books.push_back(Book(id, name, qty));
        }
        else if (choice == 2) {
            for (Book b : books)
                b.show();
        }

    } while (choice != 3);

    return 0;
}
