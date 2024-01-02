#include <iostream>
using namespace std;
int main(){
    int P,R,T,SP;
    cout<<"enter the following details to print Simple Interest"<<endl;
    cout<<"principal amount=";
    cin>>P;
    cout<<"rate of interest per annum=";
    cin>>R;
    cout<<"Time=";
    cin>>T;
    SP=(P*R*T)/100;
    cout<<"Simple Interest is ="<<SP;
}