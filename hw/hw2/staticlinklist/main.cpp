#include "iostream"
#include "stack"
using namespace std;
int idx = 1;
const int N = 1e5 + 10;
int e[N], ne[N];//e�����������ݣ�ne����������һ��λ�õ�ָ��

void add(int x){
    e[idx] = x;
    ne[idx] = idx + 1;
    idx++;
}

void print(int p){
    for(int i = p ; ne[i] ; i = ne[i]){
        cout << e[i] << " ";
    }
    puts("");
}

void reverse(){
    stack<int> stk;
    for(int i = 1 ; ne[i] ; i = ne[i]){
        stk.push(e[i]);
    }
    int p = 1;
    while(!stk.empty()){
        int tmp = stk.top();
        stk.pop();
        e[p] = tmp;
        p = ne[p];
    }
}
void addELM(){
    int num;
    srand(1);
    cout << "������Ҫ���Ԫ�صĸ���" << endl;
    cin >> num;
    cout<<"1.�������   2.�ֶ�����"<<endl;
    int choice;
    cin >> choice;
    if(choice == 1){
        for (int i = 0; i < num; i++) {
            int x;
            x = rand() % 100 + 12;

            add( x);
        }
    }
    else{
        cout << "������Ҫ��ӵ�Ԫ�أ�";
        for (int i = 0; i < num; i++) {
            int x;
            cin >> x;
            add(x);
        }
    }
}
int main(){
    int n;
    addELM();
    cout << "��תǰ" << endl;
    print(1);
    reverse();
    cout << "��ת��" << endl;
    print(1);
    return 0;
}

