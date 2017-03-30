#include <iostream>
#include <stdio.h>
#include<conio.h>

using namespace std;

struct Node{
	int data;
	Node *next;
};
 Node *head;
    int isEmpty()
	{
	if (head==NULL)
		return 1;
	else
		return 0;
	}

void indepan(int dt2)
{
	Node *grs;
	grs = new Node;
	grs->data = dt2;
	grs->next = NULL;
	if(isEmpty()==1)
	{
		head = grs;
		head->next = NULL;
	}
	else{
		grs->next = head;
		head = grs;
	}
	cout<<"\n Data Masuk \n";
}

void tampildata()
{
	Node *hlp;
	hlp = head;
	if(isEmpty() == 0)
	{
	cout<<"\n Hasil Data \n";
	while(hlp !=NULL)
	{
	cout<<hlp->data<<"\n";
	hlp=hlp->next;
		}
		cout<<endl;
	}
	else cout<<"Data Kosong\n";
}

void hapusDepan()
{
	Node *hapus;
	int y;
	if(isEmpty()==0)
	{
		if(head->next != NULL)
		{
			hapus=head;
			y=hapus->data;
			head = head->next;
			delete hapus;
		}
		 else 	{
			y= head->data;
			head=NULL;
		}
		cout << y << " Data terhapus\n";
	}
	else cout<<"data belum ada\n";
}

void hapusBelakang()
 {
	Node *hapus,*hlp;
	int d;
	if (isEmpty () == 0) {
		if (head->next != NULL )
		 {
			hlp = head;
			while (hlp->next->next != NULL)
			 {
				hlp = hlp ->next;
			}
			hapus = hlp->next;
			d = hapus -> data;
			hlp->next = NULL;
			delete hapus;
		}
		else {
			d = head -> data;
			head = NULL;
		}
		cout<<"data telah terhapus\n";
	}
	else cout<<"masih belom ada data\n";
}
void masukbelakang(int dtbaru)
{
	Node *grs, *hlp;
	grs = new Node;
	grs -> data = dtbaru;
	grs -> next = NULL;
	if (isEmpty() == 1)
	 {
		head = grs;
		head -> next = NULL;
	} else
	{
		hlp = head;
		while (hlp->next != NULL)
		{
			hlp=hlp->next;
		}
		hlp -> next = grs;
	}
	cout <<"Data telah masuk\n";
}

int main()
{
	int i;
	int dt2;

	cout<<"1. Input Data Dari Depan "<<endl;
	cout<<"2. Input Data Dari Belakang "<<endl;
	cout<<"3. Hapus Depan "<<endl;
	cout<<"4. Hapus Belakang "<<endl;
	cout<<"5. Tampilkan Hasil "<<endl;
	cout<<"6. Selesai "<<endl;

	while (true)
	 {
		cout<<"Pilihan = ";
		cin>>i;
		if (i== 1 ) {
			cout<<"Data : ";
			cin>>dt2;
			indepan(dt2);
		}
		else if (i == 2 )
		{
			cout<<"Data : ";
			cin>>dt2;
			masukbelakang(dt2);
		}
		else if (i== 3 )
		{
			hapusDepan();
		}
		else if (i == 4 )
		 {
			hapusBelakang();
		}
		else if (i == 5 )
		{
			tampildata();
		}
		else if (i == 6 )
		 {
			break;

		}
	}
}
