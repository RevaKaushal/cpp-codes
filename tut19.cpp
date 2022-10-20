#include<iostream>
using namespace std;

class shop{
    int itemid[100];    //these are arrays 
    int itemprice[100]; //size of array->max number of entries is 100
    int counter;        //keeps the counting of items
    public:
     void initcounter(void){counter=0;} //function to initialise counting with 0
     void setprice(void);
     void displayprice(void);
};

void shop:: setprice(void){
    cout<<"enter Id of your item "<<counter+1<<endl; //for counting to start with 1 
    cin>>itemid[counter];
    cout<<"enter price of your item"<<endl;
    cin>>itemprice[counter];
    counter ++;
}

void shop:: displayprice(void){
    for(int i=0; i<counter; i++){
      cout<<"the price of item with id "<<itemid[i]<<" is "<<itemprice[i]<<endl;
    }
}

int main(){
    shop dukan; //making object dukan,for class shop
    dukan.initcounter();
    dukan.setprice();
    dukan.setprice();
    dukan.setprice();
    dukan.displayprice();
    return 0;
}