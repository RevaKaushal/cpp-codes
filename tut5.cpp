//******SELECTION STATEMENT*****
// tareeka 1
/*#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"tell me your age please"<<endl;
    cin>>age;
    if (age<18){
       cout<<"you are underage"<<endl;
    }
    else if (age==18){
        cout<<"you just got in"<<endl;
    }
    else{
        cout<<"meet you there buddy"<<endl;
    }
return 0;
}*/

// tareeka 2
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"plz tell me your age"<<endl;
    cin>>age;

    switch(age){
    case 18:
        cout<<"you are 18"<<endl;
        break;
    case 22:
        cout<<"you are 22"<<endl;
        break;
    case 30:
        cout<<"you are 30"<<endl;
        break;
    default:
    cout<<"no special case"<<endl;
        break;
    }

cout<<"done with switch";
return 0;
}
