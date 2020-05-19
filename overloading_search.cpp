# include <iostream>
using namespace std;

  
class Search {
 
public:
int num[30] ={};
    int count=0;
    char word[30]; 
void intArray( ){
    int i;
    

cout <<"enter nos. of test you want to add in int array :(sould be less than 30)";
cin>>count;
for (i=0;i<count;i++){
    cout<<"enter the value of array:"<<i;
    cin>>num[i];
}
} 
void charArray( ){
    int i;
cout <<"enter the char you want to add in array :(sould be less than 30)";
cin>>count;

for (i=0;i<count-1;i++){
    cout<<"enter the value of array:"<<i;
    cin>>word[i];
}
  
}
void search1 (int a){
    int i;
    for (i=0;i<count;i++){
if (a== num[i]){
    cout<<"input value matched";
}
    }
}
void search1 (char a){
    int i;
  for (i=0;i<count;i++){
if (a== word[i]){
    cout<<"input char matched";
}
    }
}
};
 int main(){
     Search search;
cout <<"press 1 to add number and search on it and 2 to add string and search words on the given string";
int x,y;
char ch;
cin>>x;
if (x==1){
    search.intArray(); 
cout<<"enter the no. you want to search in array";
cin>>y;
search.search1(y);

}
if (y==2){
    search.charArray();
cout<<"enter the character you want to search in array";
cin>>ch;
search.search1(ch);

}

}