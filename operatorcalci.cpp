# include <iostream>
using namespace std;

class Calci{
public:
int a,b;
void input (){
    
    cout<<"enter first number";
    cin>>a;
    cout<<"enter second number";
    cin>>b;
}
void display(){ 
    cout<<"solution:"<<a<<" "<<b;
}
Calci operator + (Calci c){
    Calci cal2;
    cal2.a =a+c.a;
    cal2.b =b+c.b;
    return cal2;
}
Calci operator - (Calci c){
    Calci cal2;
    cal2.a=a-c.b;
    cal2.b =b-c.b;
    return cal2;
}
Calci operator / (Calci c){
    Calci cal2;
    cal2.a=a/c.b;
    cal2.b =b/c.b;
    return cal2;
}
Calci operator * (Calci c){
    Calci cal2;
    cal2.a = a*c.b;
    cal2.b =b*c.b;
    return cal2;
}
};
int main(){
    int x;
    Calci cal,cal1,cal3;
 cout <<"enter 1. for addition 2. for substraction 3. for division 4.for multiplication";
 cin>>x;
 if (x==1){
     cal.input();
     cal1.input();
     cal3= cal+cal1;
    cal3.display();
 }
 else if (x==2){
      cal.input();
     cal1.input();
     cal3= cal-cal1;
     cal3.display();
 }
 else if (x==3){
    cal.input();
     cal1.input();
     cal3= cal/cal1;
     cal3.display();
 }
 else if (x==4){
    cal.input();
     cal1.input();
     cal3= cal*cal1;
     cal3.display();
 }
     return 0;
}