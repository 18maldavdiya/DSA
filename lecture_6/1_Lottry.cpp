#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>=300 && n<=460){
        cout<<"the prize is Maccbook";
    }
    else if(n>=200 && n<=280){
        cout<<"the prize is Kurkure";
    }
    else if(n>=1100 && n<=1500){
        cout<<"the prize is Cycle";
    }
    else if(n>=50 && n<=80){
        cout<<"the prize is Bick";
    }
    else{
        cout<<"Batter luck next time";
    }

}