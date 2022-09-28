#include <iostream>
#include "LINKLIST.h"

void init_linklist(Node* h);
void print(Node* h);
Node* add(Node* h);
int delete_e(Node *h, int x);
void sort_linklist(Node *h);
void delete_repeat(Node *h);
void reverse_link(Node* h);
void cy_move(Node *h, int dir);
void cy_mv_k(Node *h, int k, int dir);
Node* merge(Node* L1, Node* L2);
int main() {
    using namespace std;
    Node* h = new Node;
    init_linklist(h);
    while(1) {
        int op;
        cout << "*****��ҳ*****" << endl;
        cout << "1.��ʼ��˳���" << endl;
        cout << "2.���Ԫ��" << endl;
        cout << "3.ɾ��Ԫ��" << endl;
        cout << "4.��ӡ˳���" << endl;
        cout << "5.ɾ���ظ�Ԫ��" << endl;
        cout << "6.��ת���Ա�" << endl;
        cout << "7.ѭ���ƶ�kλ" << endl;
        cout << "8.�ϲ������Ѿ��ź�������Ա�" << endl;
        cout << "���������--�˳�" << endl;
        cout << "*********" << endl;
        cin >> op;
        if(op == 1){
            init_linklist(h);
        }
        else if(op == 2){
            add(h);
            print(h);
        }
        else if(op == 3){
            int x;
            cout << "������Ҫɾ����Ԫ�أ�";
            cin >> x;
            cout<<"ɾ��ǰ��";
            print(h);
            if(delete_e(h, x)) {
                cout<<"ɾ����";
                print(h);
            }
        }
        else if(op == 4){
            print(h);
        }
        else if(op == 5){
            cout<<"ɾ��ǰ��";
            print(h);
            delete_repeat(h);
            cout<<"ɾ����";
            print(h);
        }
        else if(op == 6){
            cout << "��תǰ��" ;
            print(h);
            reverse_link(h);
            cout << "��ת��";
            print(h);
        }
        else if(op == 7){
            cout << "�������ƶ�λ��" << endl;
            int k;
            cin >> k;
            int dir = -1;
            while(dir != 0 && dir != 1){
                cout << "�������ƶ����� 0---��    1---��"<<endl;
                cin >> dir;
            }
            cy_mv_k(h, k, dir);
            print(h);
        }
        else if(op == 8){
            Node* L1 = new Node;
            Node* L2 = new Node;
            init_linklist(L1);
            init_linklist(L2);
            cout<<"���������һ��˳���Ԫ��"<<endl;
            add(L1);
            cout<<"��������ڶ���˳����Ԫ��"<<endl;
            add(L2);
            sort_linklist(L1);
            print(L1);
            sort_linklist(L2);
            print(L2);
            print(merge(L1, L2));
        }
        else{
            break;
        }
    }

    return 0;
}
