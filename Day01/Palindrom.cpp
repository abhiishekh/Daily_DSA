#include<iostream>

using namespace std;
void Palindrom(int number ){
    int reminder , sum =0,temp = number;

    while(number > 0 ){
        reminder = number % 10 ;
        sum = sum*10 + reminder;
        number = number / 10;
    }

    if(sum == temp ){
        cout<< " Number is Palindrom "<< endl;
  
    }else{
        cout<<"Number is not Palindrom"<<endl;

    }
}

int main(){
    Palindrom(1212);
    return 0;
}