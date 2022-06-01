#include<iostream>
using namespace std;

class data{
	public:
		int input();
		int proses();
		int cari();
	private:
		int n, pil, tmp, c, jumlah, asc, angka[20],a;
		string nama[100], prodi[50];
		int nim[50], no_tlp[50];
};

int data::input(){
	cout<<"Isi data dibawah berikut! "<<endl;
	cout<<"Banyak data : ";
	cin>>n;
	for(int i=0; i<n; i++){
		cout<<"Nama     : ";
		cin>> nama[i];
		cout<<"NIM      : ";
		cin>>nim[i];
		cout<<"Prodi    : ";
		cin>>prodi[i];
		cout<<"No. Telp : ";
		cin>>no_tlp[i];
		cout<<endl;
	}
}
	
int data::proses(){
	cout << "Masukan jumlah bilangan NIM: ";
    cin >> jumlah;
    int nilai[jumlah];
    for(int i=0; i<jumlah; i++){
        cout << "Angka NIM ke-" << (i+1) << " : ";
        cin >> nilai[i];
    }
    for(int c=1;c<jumlah;c++)
    { 
        for(int d=0;d<jumlah-c;d++)
        { 
            if(nilai[d]<nilai[d+1])
            { 
                asc=nilai[d];
                nilai[d]=nilai[d+1];
                nilai[d+1]=asc; 
            } 
        } 
    }
 
    cout << endl << "Hasil Pengurutan Descending";
    for(int i=0;i<jumlah;i++)
    {
        cout << " " << nilai[i];
    } 
    
    cout<<endl;
    cout<<"Jumlah bilangan NIM : ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cout<<"Angka NIM ke- "<<i<<" : ";
        cin>>angka[i];
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            if(angka[i]<angka[j])
            {
                a=angka[i];
                angka[i]=angka[j];
                angka[j]=a;
            }
        }
    }
    cout<<"\nHasil pengurutan Ascending :\n";
    for(int i=1; i<=n; i++)
    {
        cout<<" "<<angka[i];
    }
    cout<<endl;
}

		
int data::cari(){
	cout<<"Masukkan NIM yang akan dicari : ";
	cin>>c;
	
	for(int i=0; i<=n; i++){
		if(nim[i] == c){
			cout<<"NIM berada pada data ke-"<<i+1<<endl;
			cout<<"Data mahasiswa ke-"<<i+1<<endl;
			cout<<"NIM  : "<<nim[i]<<endl;
			cout<<"Nama : "<<nama[i]<<endl;
			cout<<"Prodi : "<<prodi[i]<<endl;
			cout<<"No. Telp : "<<no_tlp[i];
		}
	}
}
	

int main(){
	data yudit;
	yudit.input();
	yudit.proses();
	yudit.cari();
}
