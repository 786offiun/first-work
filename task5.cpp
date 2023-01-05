 #include<iostream>
 using namespace std;
 int main()
{ 
 float aggregate;
 int intermarks;
 int matrickmarks;
 int ecatmarks;
 string name;
 cout<<"enter your name: "<<endl;
 cin>>name;
 cout<<"enter your inter marks: "<<endl;
 cin>>intermarks;
 cout<<"enter your matrick marks "<<endl;
 cin>>matrickmarks;
 cout<<"enter your ecat marks: "<<endl;
 cin>>ecatmarks;
 aggregate=(0.5*ecatmarks)+(0.4*intermarks)+(0.1*matrickmarks);
 cout<<"your name is :"<<name<<endl;
 cout<<"your aggregate is :"<<aggregate<<endl;






 
}