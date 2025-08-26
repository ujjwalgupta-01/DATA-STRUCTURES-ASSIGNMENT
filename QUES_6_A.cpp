#include<iostream>
using namespace std ;
int main(){

    int sp[5][3]={
        {3,2,4},{0,1,3},{1,0,2},{1,1,5},{2,0,8}
    };
    
    int trans[100][100];
    trans[0][0] = sp[0][1]; 
    trans[0][1] = sp[0][0];
    trans[0][2] = sp[0][2]; 

    int k=1;
    for(int i=0;i<sp[0][0];i++){
        for (int j=1;j<=sp[0][2];j++){
            if(sp[j][1]==i){
                trans[k][0]=sp[j][1];
                trans[k][1]=sp[j][0];
                trans[k][2]=sp[j][2];
                k++;
            }
        }
    }
    cout<<"GIVEN SPARSE MATRIX :"<<endl;
  for(int i=0;i<=sp[0][2];i++){
     cout<<sp[i][0] << " "
             << sp[i][1] << " "
             << sp[i][2] << endl;
  }

    cout<<"NEW SPARSE MATRIX :"<<endl;
    for(int i=0;i<=sp[0][2];i++){
        cout<<trans[i][0] << " "
             << trans[i][1] << " "
             << trans[i][2] << endl;
    }
}