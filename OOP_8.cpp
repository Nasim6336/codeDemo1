#include<iostream>
using namespace std;


class matrix{
public:

   int a [20][20], transp[20][20];
   int j, i, r,c;

   void getData(){
       cout<<"enter the number of rows and columns:";
       cin>>r>>c;
       cout<<"enter the matrix :"<<endl;
       for(i = 0; i<r; i++){
        for(j = 0; j<c; j++){
            cout<<"enter element a"<<i+1<<j+1<<":";
            cin>>a[i][j];
        }
       }

       cout<<"the  matrix is :"<<endl;


        for(i = 0; i<r; i++){
        for(j = 0; j<c; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
       }


   }

   void transpose(){



 for(i = 0; i<r; i++){
        for(j = 0; j<c; j++){
            transp[j][i] = a[i][j];
        }
       }


   }



   void putData()
   {
       cout<<"the transpose matrix is :"<<endl;


        for(i = 0; i<c; i++){
        for(j = 0; j<r; j++){
            cout<<transp[i][j]<<" ";
        }
        cout<<endl;
       }
   }


};



int main(void)
{
    matrix a;

    a.getData();
    a.transpose();
    a.putData();
    return 0;
}
