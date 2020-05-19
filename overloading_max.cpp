# include <iostream>
using namespace std;
class Max{
public:
void getinput(){
int a,b,c;
cout <<"enter the value of a,b and c";
cin>>a>>b>>c;
cout <<a<<b<<c; 
}
void getinput(int a ,int b,int c){
  if (a>b && a>c){
    cout <<a<<"is greatest";
  }
  else if (b>a && b>c){
cout <<b<<"is greatest";
  }
  else if (c>a && c>b){
cout<<c<<"is greatest";
  }
}

};
    int main(){
      Max max;
      max.getinput();
      max.getinput( a,b,c);

      
    }


