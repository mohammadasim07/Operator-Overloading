#include<iostream>
#include<string>
using namespace std;
struct car{
    int carNumber;
    string name;
    car(int number,string name)
    {
        carNumber = number;
        name = name;
    }
};
void operator<<(ostream& Cout , car A){
    Cout<<"Car number:"<<A.carNumber<<endl;
    Cout<<"Car name:"<<A.name<<endl;
}

int main(){
    car a = car(1221,"BMW");
    cout<<a;
}