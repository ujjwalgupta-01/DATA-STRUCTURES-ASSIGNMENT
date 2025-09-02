#include<iostream>
#include<string>
using namespace std;
class Stack{
    private:
    int top=-1;
    int st[10];
    
    public:

    void push(int x){
        top++;
        st[top]=x;
    }
    void Top(){
        if(top==-1){
            cout<<"stack is empty :("<<endl;
        }
        else
        cout<<"Top element is -> "<<st[top]<<endl;
    }
    void pop(){
        if(top==-1){
            cout<<"Not Possible"<<endl;
        }
        else{
            top--;
        }
    }
    void size(){
        cout<<"size of stack is -> "<<top+1<<endl;
    }
    void Display(){
        for(int i=0;i<=top;i++){
            cout<<st[i]<<" ";
        }
    }
        
    
    void peek(){
        if(top==-1){
            cout<<"stack is empty :("<<endl;
        }
        else
        cout<<"Top element is -> "<<st[top]<<endl;
    }
     int isFull() {
        return (top == 5);
    }
    int isEmpty(){
        return (top == -1);
    }
};
int main(){
    Stack st;
    int s=0,value;
    while(s!=9){
        cout<<"\n------STACK MENU-----\n";
        cout<<"1. Push \n";
        cout<<"2. Pop \n";
        cout<<"3. Size \n";
        cout<<"4. Display \n";
        cout<<"5. Is It Empty \n";
        cout<<"6. Is It Full \n";
        cout<<"7. Peek \n";
        cout<<"ENTER THE CHOICE ->";
        cin>>s;
         
        switch(s){
            case 1:
            cout<<"ENTER THE VALUE ->";
            cin>>value;
            st.push(value);
            break;

            case 2:
            st.pop();
            break;

            case 3:
            st.size();
            break;

            case 5:
            if(st.isEmpty())
            cout<<"yess the stack is empty";
            else 
            cout<<"not empty";
            break;

            case 6:
            if(st.isFull())
            cout<<" yes it is full ";
            else 
            cout<<"not full :(";
            break;

            case 4:
            st.Display();
            break;

            case 7:
            st.peek();
            break;

            case 8:
            cout<< "THANks For Visiting" <<endl;

            default:
            cout<<"NOT A VALID CHOICE :( ";
        }

    }
}