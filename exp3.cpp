#include<iostream>
using namespace std;
class account{
public:
int accno;
string name;
float balance;
void display(){
cout<<"account no:"<<accno
<<",name:"<<name
<<",balance:"<<balance<<endl;
}
};
int main(){
account a1,a2;
a1.accno=3400;
a1.name="manaswini";
a1.balance=500000;
a2.accno=5320;
a2.name="neeraj";
a2.balance=521000;
a1.display();
a2.display();
return 0;
}
