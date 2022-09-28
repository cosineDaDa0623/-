#include <iostream>
#include <algorithm>
#include "Define_SeqList.h"
using namespace std;
void init_seqlist(seqlist *L);
void print(seqlist *L);
int add(seqlist *L, int x);
void addELM(seqlist *L);
int delete_e(seqlist *L, int x);
void sort_seqlist(seqlist *L);
void delete_repeat(seqlist* L);
void reverse_seq(seqlist *L);
void cy_move(seqlist *L, int dir);
void cy_mv_k(seqlist *L, int k, int dir);
seqlist* merge(seqlist* L1, seqlist* L2);
int main() {
    seqlist *L = new seqlist;
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
            init_seqlist(L);
        }
        else if(op == 2){
            addELM(L);
            print(L);
        }
        else if(op == 3){
            int x;
            cout << "������Ҫɾ����Ԫ�أ�";
            cin >> x;
            if(delete_e(L, x)) print(L);

        }
        else if(op == 4){
            print(L);
        }
        else if(op == 5){
            delete_repeat(L);
            print(L);
        }
        else if(op == 6){
            reverse_seq(L);
            print(L);
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
            cy_mv_k(L, k, dir);
            print(L);
        }
        else if(op == 8){
            seqlist* L1 = new seqlist;
            seqlist* L2 = new seqlist;
            init_seqlist(L1);
            init_seqlist(L2);
            cout<<"���������һ��˳���Ԫ��"<<endl;
            addELM(L1);
            cout<<"��������ڶ���˳����Ԫ��"<<endl;
            addELM(L2);
            sort_seqlist(L1);
            print(L1);
            sort_seqlist(L2);
            print(L2);
            print(merge(L1, L2));
        }
        else{
            break;
        }
    }

    return 0;
}

