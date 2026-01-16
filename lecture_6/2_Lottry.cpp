#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>=300 && n<=460){
        cout<<"You wan a Maccbook"<<endl;
        if(n>=300 && n<= 380){
            cout<<"Model : M1 Mac";
        }
        else{
            cout<<"Model : M2 Mac";
        }
    }
    else if(n>=200 && n<=280){
        cout<<" you won pack of Kurkure"<<endl;
        if(n>=200 && n<= 240){
            cout<<"Flavor: Chilli Kurkura";
        }
        else{
            cout<<"Flavor: onion Kurkura";
        }
    }
    else if(n>=1100 && n<=1500){
        cout<<"You won the cycle"<<endl;
        if(n>=1100 && n<= 1300){
            cout<<"Brand : Avon Cysle";
        }
        else{
            cout<<"Brand : hero cycle";
        }
    }
    else if(n>50 && n<=80){
        cout<<"you won a Bick"<<endl;
         if(n>=50 && n<= 65){
            cout<<"Model : Bullet";
        }
        else{
            cout<<"Model : Rajdoot";
        }

    }
    else{
        cout<<"Batter luck next time";
    }
    return 0;

}