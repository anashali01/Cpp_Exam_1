// Create a Product class with attributes name and price. Use a vector to store multiple
// products. Input and display all product details.
#include <iostream>
#include <vector>
using namespace std;
class Product
{
protected:
    vector<string> name;
    vector<float> price;
    public:
        void setProduct()
        {
            int size;
            cout << "Enter the number of products : ";
            cin >> size;
            name.resize(size);
            price.resize(size);
            cout << "Enter the product names and prices" << endl;
            for (int i = 0 ; i < size ; i++)
            {
                cout << "product " << i+1 << " name : ";
                cin >> name[i];
                cout << "product " << i+1 << " price : ";    
                cin >> price[i]; 
            } 
        }
        void showProduct()
        {
            cout << "Product details are : " << endl;
            for (int i = 0 ; i < name.size() ; i++)
            {
                cout << "Product " << i+1 << " name : " << name[i] << endl;
                cout << "Product " << i+1 << " price : " << price[i] << endl;
            }
        }
};
int main()
{
    Product p;
    p.setProduct();
    p.showProduct();
    return 0;
}