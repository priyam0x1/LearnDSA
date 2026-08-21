#include<iostream>
using namespace std;

int main(){
    float pen, book;
    cout<<"Enter Book Price : ";
    cin>>book;
    cout<<"Enter Pen Price : ";
    cin>>pen;

    float price = (pen + book) * 1.18;
    cout<<"Total bill with GST : "<<price;
    return 0;
}