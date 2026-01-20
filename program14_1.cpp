#include <iostream>
#include <vector>
using namespace std;

//function declaration 
void display(vector<int> &v){
    for(int i = 0;i<v.size(); i++){
        cout<<v[i]<<" ";

    }
    cout<<endl;
}

int main(){
    vector<int> v;
    cout<<"initial size = "<<v.size() <<endl;
    //putting values into the vector 
    int x; 
    cout<<"Enter five integer values : ";
    for(int i = 0; i<5; i++){
        cin>>x;
        v.push_back(x);
    }
    cout<<"Size after adding 5 values : ";
    cout<<v.size()<<endl;

    // Display the contents 
    cout<<" Current contents : "<<endl;
    display(v);

    //Add one more value 
    v.push_back(6.49654);

    //Display size and contents 
    cout<<"\nSize = "<<v.size()<<endl;
    cout<<"Contents now : "<<endl;
    display(v);

    //Inserting elements 
    vector<int>::iterator itr = v.begin(); //iterator 
    itr += 3;
    v.insert(itr, 1,9);

    //display the contents 
    cout<<"\nContents after inserting : "<<endl;
    display(v);

    //Removing 4th and 5th elements
    cout<<"Removing 4th and 5th elements."<<endl;
    v.erase(v.begin()+3,v.begin()+5);

    //Display the contents 
    cout<<"\nContents after deletion : "<<endl;
    display(v);
    cout<<"END\n";
    return (0);
}