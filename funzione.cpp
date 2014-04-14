#include<iostream>
using namespace std;





int main(){
    int x,y;
    
    int x1,y1;
    
    
    cout<<"inserisci primo punto"<<endl;
    cout<<"x   ";
    cin>>x;
    cout<<endl<<"y    ";
    cin>>y;
    cout<<endl;
    cout<<"inserisci secondo punto"<<endl;
    cout<<"x    ";
    cin>>x1;
    cout<<endl<<"y    ";
    cin>>y1;
    
    cout<<endl;
    
    if(x1>0&&y1>0){
                   cout<<"la funzione puo' passare per l'asse x"<<endl;}
                   
                   if(x1<0&&y1>0){
                                  cout<<"la funzione puo' passare per l'asse x"<<endl;}
                                  
                                  if(x1<0&&y1<0){
                                                 cout<<"la funzione passa sull'asse x"<<endl;}
                                                 
                                                 if(x1>0&&y1<0){
                                                               cout<<"la funzione passa per l'asse x"<<endl;}
                                                               
                                                               
                                                               
                                                               
                                                               system("pause");
                                                               return 0;}
