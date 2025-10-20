#include<iostream>
using namespace std;
int fact(int x = 4){
    if(x == 0){
        return 1;
    }
   
    return x * fact(x - 1);
    cout<<endl<<x<<" "<<endl;
}
    int main(){
    cout<<fact();
    return 0;
}