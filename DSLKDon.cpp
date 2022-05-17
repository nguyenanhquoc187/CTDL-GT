#include <bits/stdc++.h>
using namespace std;
struct Data {
    string MaSv, Name;
    float gpa;
};
struct Nope {
    Data info;
    Nope *pNext;
};
struct List {
    Nope *pHead ;
    Nope *pTail;
};
Nope* CreateNope(Data x) {
    Nope *p;
    p = new Nope;
    if (p== NULL) exit(1);
    p->info = x;
    p->pNext = NULL;
    return p;
}
void CreateList(List &L) {
    L.pHead = NULL;
    L.pTail = NULL;
}
void AddHead(List &L, Nope *p) {
    if (L.pHead == NULL) {
        L.pHead = p;
        L.pTail = L.pHead;
    }
    else {
        p->pNext = L.pHead;
        L.pHead = p;
    }
}

int Search(List &L, string s) {
    Nope *p;
    p = L.pHead;
    while (p!= NULL && p->info.MaSv != s) {
        p = p->pNext;
    }
    if (p != NULL) return 1; 
    return 0;
}
int RemoveAfterQ(List &L, Nope *q) {
    Nope *p;
    if (q != NULL) {
        p = q->pNext;
        if (p != NULL) {
            if (p == L.pTail) L.pTail = q;
            q->pNext = p->pNext;
            delete p;
            return 1;
        }
    }
    return 0;
}
int RemoveHead(List &L) {
    Nope *p;
    if (L.pHead != NULL) {
        p = L.pHead;
        L.pHead = L.pHead->pNext;
        delete p;
        if (L.pHead == NULL) L.pTail = NULL;
        return 1;
    }
    return 0;
}
int RemoveX(List &L, string s) {
    Nope *p,*q = NULL;
    p = L.pHead;
    while (p != NULL && p->info.MaSv != s) {
        q = p;
        p = p->pNext;
    }
    if (p == NULL) return 0;
    if (q != NULL) RemoveAfterQ(L,q); else RemoveHead(L); 
    return 1;
}
void PrintList_Gpa(List &L) {
    Nope *p ;
    p = L.pHead;
    while (p != NULL) {
        if (p->info.gpa >= 5) cout << p->info.Name << " "<< p->info.MaSv << " " << p->info.gpa <<endl; 
        p = p->pNext;
    }
}
void XepLoai(List &L) {
    Nope *p;
    p = L.pHead;
    while (p != NULL) {
        cout << p->info.Name << " "<< p->info.MaSv << " " << p->info.gpa <<" ";
        if (p->info.gpa <= 3.6) cout<< "Yeu";
        if (p->info.gpa >=5 && p->info.gpa<6.5 ) cout<<"Trung Binh";
        if (p->info.gpa >=6.5 && p->info.gpa<7 ) cout<<"Trung Binh kha";
        if (p->info.gpa >=7 && p->info.gpa<8 ) cout<<"Kha";
        if (p->info.gpa >=8 && p->info.gpa<9 ) cout<<"Gioi";
        if (p->info.gpa > 9 ) cout<<"Gioi";
        cout<<endl;
        p = p->pNext;
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    List L;
    CreateList(L);
    cin.ignore();
    Data x;
    while (1) {
        getline(cin,x.Name);
        if (x.Name.empty()  ) break;
        cin >> x.MaSv >> x.gpa; 
        Nope *p = CreateNope(x);
        AddHead(L,p);
    }
    string s;
    cout<<"Nhap ma sinh vien can tim: "; cin >> s;
    if (Search(L,s) ) cout<<"Sinh vien co trong lop hoc\n"; else cout<<"Sinh vien khong co trong lop hoc\n";
    cout<<"Nhap ma sinh vien can xoa: " ; cin >> s;
    RemoveX(L,s);
    cout<<"Sinh vien co diem trung binh lon hon 5:\n";
    PrintList_Gpa(L);
    cout<<"Xep loai: \n";
    XepLoai(L);
}