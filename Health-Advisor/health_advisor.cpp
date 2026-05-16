#include<iostream>
using namespace std;
void healthCare(int age,int sleep, int waterIntake){
     if ( sleep < 8){
     	cout<<"warning! if you wants to live long then you need to sleep more"<<endl;
     }else{
     	cout<<"good! you are healthy keep it up."<<endl;
     }
      if( waterIntake < 4){
     	cout<<"warning! you can suffer from hydration and will feel tired."<<endl;
     }else{
     	cout<<"good! you have taken well care of your body keep it up."<<endl;
     }if(age > 60){
     	cout<<"Note: since you are a senior please cosult a doctor after heavy exercise."<<endl;
     }
}
int main (){
     int a;
     cout<<"enter age(1 - 100) = "<<endl;
     cin>>a;
     if(a <= 0 || a > 100){
     	cout<< "Error: invalid age! please enter your true age between 1 and 100."<<endl;
     	return 0;
     }
     int b;
     cout<<"enter sleep hours = "<<endl;
     cin>>b;
     int c;
     cout<<"enter waterIntake (litres)= "<<endl;
     cin>>c;
     healthCare(a,b,c);
     return 0;
}

