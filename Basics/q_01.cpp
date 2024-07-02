#include <bits/stdc++.h>
using namespace std;

// p_01
void pattern_01(){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"# ";
        }
        cout<<endl;
    }
}

void pattern_02(){
    for(int i=0; i<3; i++){
        for(int j=0; j<=i; j++){
            cout<<"# ";
        }
        cout<<endl;
    }
}

void pattern_03(){
    for(int i=1; i<=3; i++){
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void pattern_04(){
    for(int i=1; i<=3; i++){
        for(int j=1; j<=i; j++){
            cout<<i;
        }
        cout<<endl;
    }
}

void pattern_05(){
    for(int i=3; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<"# ";
        }
        cout<<endl;
    }
}

void pattern_06(){
    for(int i=3; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void pattern_07(int n){
    for(int i=1; i<=n; i++){
        //spaces 
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        //stars
        for(int k=1; k<=(2*i)-1; k++){
            cout<<"#";
        }
        cout<<endl;
    }
}

void pattern_08(int n){
    for(int i=n; i>=1; i--){
        //spaces 
        for(int j=1; j<n-i+1; j++){
            cout<<" ";
        }
        //stars
        for(int k=(2*i)-1; k>=1; k--){
            cout<<"#";
        }
        cout<<endl;
    }
}

void pattern_09(int n){
    for(int i=1; i<=n; i++){
        //spaces 
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        //stars
        for(int k=1; k<=(2*i)-1; k++){
            cout<<"#";
        }
        cout<<endl;
    }
    for(int l=n; l>=1; l--){
        //spaces 
        for(int j=1; j<n-l+1; j++){
            cout<<" ";
        }
        //stars
        for(int k=(2*l)-1; k>=1; k--){
            cout<<"#";
        }
        cout<<endl;
    }
}

void pattern_10(){
    for(int i=0; i<2; i++){
        for(int j=0; j<=i; j++){
            cout<<"# ";
        }
        cout<<endl;
    }
    for(int l=3; l>=1; l--){
        for(int j=1; j<=l; j++){
            cout<<"# ";
        }
        cout<<endl;
    }
}

void pattern_11(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            if((i+j)%2 != 0){
                cout<< 0;
            }else{
                cout<< 1;
            }
        }
        cout<<endl;
    }
}

void pattern_12(int n){
    for(int i=1; i<=n; i++){
        int dummy = i;
        //first triangle
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        //second triangle spaces
        for(int spaces=0; spaces<(2*i)+2; spaces++){
            cout<<' ';
        }
        //second triangle stars
        for(int stars=1; stars<=i; stars++){
            cout<<stars;
        }
        //now go to the new line
        cout<<endl;
        dummy-=1;
    }
}

void pattern_13(int n){
    for(int i=1; i<=n; i++){
        int dummy = i;
        // first triangle 
        for(int j=1; j<=i; j++){
            cout<<j;
        }

        //second triangle
        for(int spaces=1; spaces<=n-i; spaces++){
            //print a space
            cout<<' ';
        }

        //third triangle
        //spaces
        for(int spaces=1; spaces<=n-i; spaces++){
            //print the spaces
            cout<<' ';
        }
        //again numbers
        for(int num=1; num<=i; num++){
            cout<<dummy;
            dummy = dummy-1;
        }
        cout<<endl;
    }
}

void pattern_14(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if((i==2 && j==2) || (i==2 && j==3) || (i==3 && j==2) || (i==3 && j==3)){
                cout<<' ';
            }else{
                cout<< '*';
            }
        }
        cout<<endl;
    }
}


int main(){
 pattern_14(4);
 return 0;
}