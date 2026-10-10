#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    int productId;
    string productName;
    float price;
    float monthlySales[12];
    int totalbill;
    int monthlyQuantity;
    
public:
    void acceptDetails()
    {
        cout << "Enter Product ID: ";
        cin >> productId;
        cin.ignore();

        cout << "Enter Product Name: ";
        getline(cin, productName);

        cout << "Enter Price: ";
        cin >> price;

        cout << "Enter Monthly Sales for 12 months : ";
        monthlyQuantity = 0;

        for (int i = 0; i < 12; i++) {
            cin >> monthlySales[i];
            monthlyQuantity += monthlySales[i];
        }

        totalbill = monthlyQuantity * price;
    }
     
    void displayDetails()
    {
        cout << "\nProduct ID: " << productId << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Price: " << price << endl;
        cout << "Total Quantity Sold: " << monthlyQuantity << endl;
        cout << "Total Bill: " << totalbill << endl;
    }
    
    float getTotalbill() {
        return totalbill;
    }
};

int main() {
    int n;

    cout << "enter number of products: ";
    cin >> n;

    Product products[100];
    float grandTotal = 0;
    
    for (int i = 0; i < n; i++) {
        cout << "\n---PRODUCT " << (i + 1) << " DETAILS---" << endl;
        products[i].acceptDetails();
        grandTotal += products[i].getTotalbill();
    }
      
    cout << "\n--- ALL products Details ---" << endl;

    for (int i = 0; i < n; i++) {
        products[i].displayDetails();
    }
     
    cout << "\ngrand total bill: " << grandTotal << endl;

    return 0;
}     
     
     
     
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
