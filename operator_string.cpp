# include <iostream>
# include <string.h>
 using namespace std;
 int j=0;
 class StringP{ 
     
     public:
     
     char str1[20];
     void getinput(){
         cout<<"enter the first string";
         gets(str1);
         cin.get();
        
     }
     void display(){
         cout<<str1;
     }
     StringP operator + (StringP obj){
         StringP bbj;
        strcat(str1,obj.str1);
        strcpy(bbj.str1,str1);
        return bbj;
     }  
    int operator == (StringP obj1){
       
          if (strcmp(str1,obj1.str1)){
               ++j;
    }
        return 0;
     }  
    
 };
    int main(){
        int i;
         StringP strr1,strr2,strr3;
        
        cout<<"press 1: for comparing string"<<"\n"<< "2: for concatinating the string";
            cin>>i;
        if (i==2){
            
            
            strr1.getinput();
            strr2.getinput();
           strr3= strr1+strr2;
            strr3.display();
            return 0;
        }
       if (i==1){
         strr1.getinput();
         cout<<"\n-------------------------------------------";
            strr2.getinput();
        strr1==strr2;
        if(j>0){
            cout<<"string is same";
        }
        else
        cout<<"string is not same";
       }
       }
