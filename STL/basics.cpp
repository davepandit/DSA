#include <bits/stdc++.h>
using namespace std;

//how to make a pair
void learnPair(){
    pair<int, int> p = {1 , 3};
    cout<<p.first<<endl;
    //nested pair
    // {1, {2, 3}}
    pair<int, pair<int, int>> nestedPair = {1, {2, 3}};
    //access the nested pairs like this 
    cout<<nestedPair.first<<endl;
    cout<<nestedPair.second.second;

    //making an array where the elements are of the pair datatype yes pair can serve as a datatype too
    pair<int, int> arr[] = {{1, 2}, {3, 4}};
    //the elements of array are
    cout<<arr[0].second;
    
}

//here we discuss about the vectors in c++
void learnVector(){
    //we can declare a simple vector as follows
    vector<int> vec = {1, 2, 4};
    // cout<<vec;
    // we cannot console log a vector like this 
    // Print each element
    // for (int num : vec) {
    //     cout << num << " ";
    // }
    // cout << endl;

    vector<int> v2;//this line only creates an empty array or vector whatever
    v2.push_back(2);
    v2.emplace_back(4);

    //print the ele of the vector 2
    for(int num:v2){
        cout<<num<<endl;
    }

    //now we can use a pair as a data type too
    vector<pair<int, int>> v3;
    v3.push_back({1, 2});
    v3.emplace_back(3, 4);

    //some other handy things
    vector<int> v4(5, 30);//yahan 5 times 30 aa jayega us vector ke aandar

    //copying the contents of one container 
    vector<int> v5(v4);
}


//lets learn about the iterators
void learnIterators(){
    vector<int> v1 = {10, 20, 30};
    vector<int>::iterator it1 = v1.begin();//this points to the memory address of the 1st ele in the vector
    vector<int>::iterator it2 = v1.end();//this points to the memory address just after 30 in the above vector

    // in orer to loop through the ele we can use something like this 
    for(vector<int>::iterator it3 = v1.begin(); it3!=v1.end(); ++it3){
        cout<<*(it3);//this basically prints the value at that particular location
    }

    //delete

    //in order to delete an ele from the vector what we can do is basically use the erase function 
    v1.erase(v1.begin());

    //what if we want to delete a bunch of numbers then we need to pass the start address and the index just after the endone because here the second value is exclusive
    v1.erase(v1.begin(), v1.begin()+2);//[)

    //insert

    //take an example like this {1, 2, 3}
    //insert 4 at the first place
    v1.insert(v1.begin(), 4);

    //what if i want to insert more than one ele then we can use the normal technique
    vector<int> v(3, 4);

    v.insert(v.begin()+1, 3, 5);

    //how to insert one vector into another 
    vector<int> vx_01(2, 50);//[50, 50]
    vector<int> vx_02(2, 100);//[100, 100]

    //now say i want to insert vx_02 into the vx_01 so we can do that very easily this is achieved as follows
    vx_01.insert(vx_01.begin(), vx_02.begin(), vx_02.end());//[100, 100, 50, 50]

    //in order to see the size of the vector we have something as the 
    cout<<v.size();

    //swap 2 vectors
    v1.swap(v2);

    //pop out the last ele
    v.pop_back();

    //is empty
    v.empty();//returns true or false 

    //clear the vector
    v.clear();

}

int main(){
    // learnPair();
    // learnVector();
    learnIterators();
    return 0;
}