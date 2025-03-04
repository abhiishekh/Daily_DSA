#include<iostream>
using namespace std;

void Fibonaci(int range){
    int first = 0 ; // print the first postion in the series 
    int second = 1; // print the second postion in the series 

    if(range <= 0 ){ // if the range is 0 or less than 0 then simply return ;
        return;
    }

    cout<< first << " "; // print manually first postion 
    cout << second<< " "; // print manually second position

    for(int i = 2; i <= range; i++){
        int next = first + second; // calculate the prev + prev's prev
        cout<< next << " ";
        first = second ; // update first
        second = next; // update second
    }
}

int main(){
    Fibonaci(8);
}