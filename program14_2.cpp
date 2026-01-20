#include <iostream>
#include <list>
#include <cstdlib> //for using rand() function mean random function

using namespace std;

void display(list<int> &lst){
    list<int> :: iterator p;
    for(p = lst.begin(); p != lst.end(); ++p){
        cout<<*p<<", ";
    }
    cout<<endl<<endl;
}

int main(){
    list<int> list1;
    list<int> list2(5);

    //for random element pushing 
    for(int i = 0; i<3; i++){
        list1.push_back(rand()/100);
    }

    list<int> :: iterator p;
    for(p = list2.begin(); p != list2.end(); ++p){
        *p = rand()/100;
    }

    cout<<"List1"<<endl;
    display(list1);
    cout<<"List2"<<endl;
    display(list2);

    //Add two elements at the ends of list1
    list1.push_front(100);
    list1.push_back(200);

    //Removed an element at the front of list2
    list2.pop_front();

    cout<<"Now List1 "<<endl;
    display(list1);
    cout<<"Now List2 "<<endl;
    display(list2);

    list<int> listA,listB;
    listA = list1;
    listB = list2;

    //Merging two lists (unsorted)
    list1.merge(list2);
    cout<<"Merged unsorted lists "<<endl;
    display(list1);

    // Sorting and merging 
    listA.sort();
    listB.sort();
    listA.merge(listB);
    cout<<"Ascending order"<<endl;
    cout<<"Merged sorted lists"<<endl;
    display(listA);
    
    //Reversing a list
    cout<<"Descending order"<<endl;

    listA.reverse();
    cout<<"Reversed merged list "<<endl;
    display(listA);
    return 0;
}