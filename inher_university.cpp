# include <iostream>
using namespace std;
 
 class university{

       public:
      
int university_code;
 string university_name;
 string university_city;
     


 };
 class college : public university{

       public:
        int j=0;
       
         int college_code[30];
             char college_name[20][30];
                  char college_city[20][30];
       
       int i=0;
                   college(){
                  university_name="pune university"; 
                  
                   
                   }
                   college(string s){
      university_name=s;
      
      cout <<university_name;

}
        
           
       
       void setcollegedata(){
            
           
             
                   cout<<"enter the college code :";
                   cin>>college_code[i];
                   cin.get();
                   cout<<"enter college name :";
                   cin>>college_name[i];
                   cin.get();
                   cout<<"enter college city :";
                   cin>>college_city[i];
                   cin.get();
                  ++i;
                  

             }
            void setuniversitydata(){
                 
                 
                  cout <<"enter university code :";
                  cin>>university_code;
                  cout <<"enter university city :";
                  cin>>university_city;
                 
                 
             }
             void showUniversityResult(){
                   cout<<"university name :"<<university_name<<"      "<<"university code :"
                   <<university_code<<"      "<<"university city :"<<university_city<<"\n"<<"   list of colleges   "<<"\n"<<"college name"
                   <<"      " <<"college city"<<"      "<<"college code";
             }
                  void showCollegeResult(int s){
                        int w,q;
                        w=s;
                        for (q=0;q<=w;q++){
                              cout<<"\n"<<college_name[q]<<"         "<<college_city[q]<<"          "<<college_code[q];
                        }

                  }
 };
 int main(){
       int f,r,k;
      college cc,rr;
      cout<<"enter 1. to show default university and 2. for other university :";
      cin>>r;
      cout<<"enter the number of colleges of list you want to enter :";
      cin>>k;
      if (r==1){
            college();
            cc.setuniversitydata();
           
            for (f=0;f<=r;f++){
            cc.setcollegedata();
            
            
            }
            cc.showUniversityResult();
            cc.showCollegeResult(k);
            
      }
      else if (r==2){
            string s;
            cout <<"enter the name of other university :";
            cin>>s;
            cin.get();
            college jj(s);
            rr.setuniversitydata();
           
            for (f=0;f<=r;f++){
            rr.setcollegedata();
            
            
            }
            rr.showUniversityResult();
            rr.showCollegeResult(k);
      }


 
return 0;
 }