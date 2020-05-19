# include <iostream>
using namespace std;

class single{
public:
int a;
    
    single(){
cout <<"this is single enheritance";
    }
};
class child : public single{
    public:
    int x;
    child(){
        cout<<"we will be performing addition in this program\n";
    }
    void input(){
        cout<<"enter the value of a and x\n";
        cin>>x>>a;
    }
    void add(){
        cout <<x+a;
    }
};
int main(){
    child ss;
    ss.input();
    ss.add();
    return 0;
}