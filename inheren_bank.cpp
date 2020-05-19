# include <iostream>
using namespace std;

class bank{
    public:

char bank_name[5][30]={};
char branch_name[5][30]={};
int ifsccode[5]={};
public:
void setBank_info(){
    int i=0;

cout<<"enter the bank name :";
cin>>bank_name[i];


cout<<"enter branch name :";
cin>>branch_name[i];


cout<<"enter ifsc code :";
cin>>ifsccode[i];


    
}

};
class account :public bank {
    
    public:
    int j=0;
     int i=0;
    char account_type [5][30]={};
    char costumer_name[5][30];
    int account_number[5]; 
    int balance [5];
    account(){
       
        cout<<"enter the name of account holder :";
        cin>>costumer_name[i];
        cout<<"enter the account type :";
        cin>>account_type[i];
        cout<<"enter account no. :";
        cin>>account_number[i];
        cout<<"enter balance left in your account :";
        cin>>balance[i];
        ++i;
        
        
    }
    void withdraw (){
        int j=0;
        cout<<"enter the amount you want to withdraw :";
        cin>>j;
        if (balance[i]>j){
            cout<<"please collect your amount and your rest amount is :"<<balance[i]-j;
            balance[i]=balance[i]-j;
            
            ++i;
        }
        else
        cout<<"you have insufficeint balance :";
        ++i;
        getBank_info();
    }
    void diposit(){
        
        cout<<"enter the amount you want to diposit :";
        cin>>j;
        cout <<"your amount has been added sucessfully"<<"your balance is :"<<balance[i]+j;
    balance[i]=balance[i]+j;
    ++i;
    getBank_info();
    }
    void getBank_info(){
    
    int i=0;
        cout<<"\n"<<"coustomer name :"<<costumer_name[i]
        <<"\n"<<"acocount type :"<<account_type[i]<<"\n"
        <<"bank name :"<<bank_name[i]<<
        "\n"<<"branch name :"<<branch_name[i]<<"\n"<<"ifsc code :"<<ifsccode[i]<<"\n"<<"your remaining balance is :"
        <<balance[i]-j;
   
}
 };

int main(){

   account jj;
   jj.setBank_info();
   int o=0;
        cout <<"enter 1 to withdraw and 2 to diposit :";
        cin>>o;
        if (o==1){
            jj.withdraw();
        }
        else if (o==2){
           jj.diposit();
        }
        else 
        cout <<"entry invalid";
return 0;
}