#include<iostream>
#include<fstream>
#include<limits>
using namespace std;

class Product{
    private:
        string name;
        double price;
        int quantity;
    public:
        Product(string productName="uk", double productPrice=0, int productQuantity=0){
        	name=productName;
        	price=productPrice;
        	quantity=productQuantity;
		}
        string getName(){return name;}
        double getTotalPrice(){return price*quantity;}
        void display(){
            cout<<"Product Name: "<<name<<endl;
            cout<<"Price: "<<price<<" $"<<endl;
            cout<<"Quantity: "<<quantity<<endl;
            cout<<"Total: "<<getTotalPrice()<<" $"<<endl;
        }
        void saveToFile(ofstream &file){
            file<<name<<" "<<price<<" "<<quantity<<endl;
        }
};

class ShoppingCart{
    private:
        Product items[100];
        int itemCount;
    public:
        ShoppingCart(){
        	itemCount=0;
		}
        void addItem(Product product){
            if(itemCount<100){
                items[itemCount]=product;
                itemCount++;
            }else{
                cout<<"Cart is full! Cannot add more items. :("<<endl;
            }
        }
        void removeItem(string productName){
            for(int i=0;i<itemCount;i++){
                if(items[i].getName()==productName){
                    for(int j=i;j<itemCount-1;j++){
                        items[j]=items[j+1];
                    }
                    itemCount--;
                    cout<<"Item "<<productName<<" removed from the cart. :)"<<endl;
                    return;
                }
            }
            cout<<"Item "<<productName<<" not found in the cart. :("<<endl;
        }
        double getTotalPrice(){
            double totalPrice=0;
            for(int i=0;i<itemCount;i++){
                totalPrice+=items[i].getTotalPrice();
            }
            return totalPrice;
        }
        void display(){
            if(itemCount==0){
                cout<<"Your cart is empty!"<<endl;
                return;
            }
            cout<<"Shopping Cart Items:"<<endl;
            for(int i=0;i<itemCount;i++){
                items[i].display();
            }
            cout<<"Total Price: "<<getTotalPrice()<<" $"<<endl;
        }
        void saveCart(){
            ofstream file("cart.txt");
            for(int i=0;i<itemCount;i++){
                items[i].saveToFile(file);
            }
            file.close();
            cout<<"Cart saved successfully!"<<endl;
        }
        int getItemCount(){ return itemCount; }
};

class Customer{
    private:
        string name;
        string email;
        ShoppingCart cart;
    public:
        Customer(string customerName, string customerEmail):name(customerName),email(customerEmail){}
        void addProductToCart(Product product){cart.addItem(product);}
        void removeProductFromCart(string productName){cart.removeItem(productName);}
        void checkout(){
            cart.display();
            if(cart.getItemCount()>0){
                cout<<"Checkout completed! Total Price: "<<cart.getTotalPrice()<<" $"<<endl;
                cart.saveCart();
            }
        }
        void exitProgram(){
            cout<<"\nFinal Cart Summary:"<<endl;
            cart.display();
            if(cart.getItemCount()==0){
                cout<<"You didn't purchase anything. Thank you for visiting!"<<endl;
            }
        }
};

void getValidInput(string prompt, double &value) {
    while(true){
        cout<<prompt;
        cin>>value;
        if(cin.fail() || value<0){
            cout<<"Invalid input! Please enter a valid number."<<endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }
}

void getValidInput(string prompt, int &value) {
    while(true){
        cout<<prompt;
        cin>>value;
        if(cin.fail() || value<0){
            cout<<"Invalid input! Please enter a valid number."<<endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }
}

int main(){
    string customerName, customerEmail;
    cout<<"Enter your name: ";
    cin>>customerName;
    cout<<"Enter your email: ";
    cin>>customerEmail;
    Customer obj(customerName, customerEmail);
    char choice;
    do{
        cout<<"\n1. Add Product\n2. Remove Product\n3. View Cart\n4. Checkout\n5. Exit\nEnter your choice: ";
        cin>>choice;
        if(choice=='1'){
            string name;
            double price;
            int quantity;
            cout<<"Enter product name: ";
            cin>>name;
            getValidInput("Enter price: ", price);
            getValidInput("Enter quantity: ", quantity);
            obj.addProductToCart(Product(name, price, quantity));
        }
        else if(choice=='2'){
            string name;
            cout<<"Enter product name to remove: ";
            cin>>name;
            obj.removeProductFromCart(name);
        }
        else if(choice=='3'){
            obj.checkout();
        }
        else if(choice=='4'){
            cout<<"Checking out...\n";
            obj.checkout();
            return 0;
        }
    }while(choice!='5');
    obj.exitProgram();
    cout<<"Thank you for shopping! Have a great day!"<<endl;
    return 0;
}
