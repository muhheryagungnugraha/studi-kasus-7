#include <iostream>
using namespace std;

class data{
	public:
		void input();
		void urut();
		void cari();
	private:
		int n,pil;
		string nama[100],prodi[100];
		double nim[100],no_hp[100],tmp,c;
};

void data::input(){
	cout<<"Banyaknya data : "; cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Data Mahasiswa ke-"<<i+1<<endl;
		cout<<"NIM    : "; cin>>nim[i];
		cout<<"Nama   : "; cin>>nama[i];
		cout<<"Prodi  : "; cin>>prodi[i];
		cout<<"No.Tlp : "; cin>>no_hp[i];
		cout<<endl;
	}
}

void data::urut(){
	cout<<"1. Naik"<<endl;
	cout<<"2. Turun"<<endl;
	cout<<"Pilihan anda : "; cin>>pil;
	switch (pil){
		case 1:
			cout<<"data diurut (Naik): ";
	     	for(int a=0; a<n; a++)
	      	{
	            for(int b=n-1; b>=a; b--)
	            {
	             if(nim[b]<nim[b-1])
	             {
	             tmp = nim[b];
	             nim[b] = nim[b-1];
	             nim[b-1] = tmp;
	             }
	
	            }
	            cout<<nim[a]<<" ";
	        }
	        break;
	    case 2:
	    	cout<<"\nData diurut (Turun) : ";
	       for(int i=1;i<n;i++)
    		{
		        for(int d=0;d<n-i;d++)
		        {
		            if(nim[d]<nim[d+1])
		            {
		                tmp=nim[d];
		                nim[d]=nim[d+1];
		                nim[d+1]=tmp;
		            }
		        }
		    }
		    for(int i=0;i<n;i++)
		    {
		        cout << " " << nim[i];
		    }
		break;
	}
}

void data::cari(){
	cout << "\nInput angka yang akan dicari: ";
  	cin >> c;

	// proses pencarian array
	for(int i = 0; i <= n; i++){
	    if(nim[i] == c){
	      cout << "NIM ditemukan pada data ke-" << i+1<<endl;
	      cout<<"Data Mahasiswa ke-"<<i+1<<endl;
			cout<<"NIM    : "<<nim[i]<<endl;
			cout<<"Nama   : "<<nama[i]<<endl;
			cout<<"Prodi  : "<<prodi[i]<<endl;
			cout<<"No.Tlp : 0"<<no_hp[i]<<endl;
	    }
	}
}
  

int main(){
	data mhs;
	mhs.input();
	mhs.urut();
	mhs.cari();
	return 0;
}
