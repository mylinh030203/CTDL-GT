#include <bits/stdc++.h>
using namespace std;
struct sinhvien
{
    char ten[30];
    char lop[10];
    float Math;
    float Physical;
};
void Them(sinhvien *s, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "nhap ten " ;
        fflush(stdin);
        gets((*(s + i)).ten);
        cout << "nhap lop " ;
        gets((*(s + i)).lop);
        cout << "nhap diem toan ";
        cin >> (*(s + i)).Math;
        cout << "nhap diem vat ly ";
        cin >> (*(s + i)).Physical;
    }
}
void Inthongtin(sinhvien s)
{
        cout << s.ten << " " << s.lop << " " << s.Math << " " << s.Physical << endl;
}

void Timkiem(sinhvien *s, char ten[], int n)
{
    cout << "Cac sinh vien co ten " << ten << endl;
    bool check = true;
    for (int i = 0; i < n; i++)
    {
        if (strcmp((*(s + i)).ten, ten) == 0)
        {
            Inthongtin(*(s + i));
            check = false;
        }
    }
    if (check)
        cout << "Khong ton tai sinh vien nao co ten tren" << endl;
}
void chinhsua(sinhvien *s, char ten[], int n, char lop[])
{
    for (int i = 0; i < n; i++)
    {
        if (strcmp((*(s + i)).ten, ten) == 0)
            strcpy((*(s + i)).lop, lop);
    }
}
int main()
{
    int n; 
    char ten[30];
    char lop[30];

    sinhvien *s = new sinhvien[100];
    cout<<"<-------Menu------->"<<endl;
    cout << "1. Them Thong Tin" << endl;
    cout << "2. Sua Thong Tin" << endl;
    cout << "3. Tim Kiem Thong Tin" << endl;
    cout << "4.Thoat" << endl;
    int choose;
    do
    {
        cout << "Moi chon ";
        cin >> choose;
        switch (choose)
        {
        case 1:
        {
            cout<<"nhap so sinh vien can them ";
            cin>>n;
            Them(s, n);
            for(int i=0; i<n; i++)
                Inthongtin(*(s+i));
            break;
        }
        case 2:
        {
            cout << "Nhap tên can sua ";
            fflush(stdin);
            gets(ten);
            cout << "Nhap lop moi ";
            fflush(stdin);
            gets(lop);
            chinhsua(s, ten, n, lop);
            for(int i=0; i<n; i++)
                Inthongtin(*(s+i));
            break;
        }
        case 3:
        {
            cout << "Nhap ten can tim ";
            fflush(stdin);
            gets(ten);
            Timkiem(s, ten, n);
            //  Inthongtin(*(s + (n - 1)));
            break;
        }
        default:
        {
            cout << "Khong co trong menu";
            break;
        }
        }
    } while (choose != 4);
}
