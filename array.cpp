#include <iostream>
using namespace std;
int main ()
{
	int matriks1[3][3];
	int matriks2[3][3];
	int m,n;
	int hasil[3][3];
	
	cout << "\t\tOPERASI PADA MATRIKS\n\n";
	
	//PENJUMLAHAN
	cout << "A. PENJUMLAHAN\n"<<endl;
	cout << "Masukan angka untuk matriks pertama "<< endl;
	for (m=0; m<3; m++){
		for (n=0; n<3; n++){
			cout<<"Baris "<<m+1 <<" Kolom "<< n+1 << " = ";
			cin>>matriks1[m][n];
		}
		cout << endl;
	}
	cout << "Masukan angka untuk matriks kedua\n"<< endl;
	for (m=0; m<3; m++){
		for (n=0; n<3; n++){
			cout << "Baris "<< m+1<< " Kolom "<< n+1 << " = ";
			cin >> matriks2[m][n];
		}
		cout << endl;
	}
	
	cout << "Matriks pertama adalah\n";
	for ( m=0; m<3; m++){
		for ( n=0; n<3; n++){
			cout << matriks1[m][n]<< " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "Matriks kedua adalah\n";
	for ( m=0; m<3; m++){
		for (n=0; n<3; n++){
			cout << matriks2[m][n]<< " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "Hasil dari penjumlahan matriks 1 dan 2 adalah :"<< endl;
	for (m=0; m<3; m++){
		for (n=0; n<3; n++){
			hasil[m][n]= matriks1[m][n] + matriks2[m][n];
			cout << hasil[m][n]<< "   ";
		} cout << endl;
	} 
	
	//PENGURANGAN
	cout << "B. PENGURANGAN\n"<<endl;
	cout <<"Masukan angka untuk matriks pertama "<< endl;
	for ( m=0; m<3; m++){
		for (n=0; n<3; n++){
			cout << "Baris "<< m+1 << " Kolom "<< n+1 <<" = ";
			cin>> matriks1[m][n];
		}
		cout << endl;
	}
	cout << "Masukan angka untuk matriks kedua "<< endl;
	for (m=0; m<3; m++){
		for (n=0; n<3; n++){
			cout << "Baris "<< m+1 << " Kolom "<< n+1<< " = ";
			cin>> matriks2[m][n];
		} cout<< endl;
	}
	cout << "Matriks pertama adalah \n";
	for ( m=0; m<3; m++){
		for (n=0; n<3; n++){
			cout << matriks1[m][n] << " ";
		} cout << endl;
	}
	cout << "Matriks kedua adalah \n";
	for (m=0; m<3; m++){
		for (n=0; n<3; n++){
			cout << matriks2[m][n] << " ";
		}
		cout << endl;
	}
	
	cout << endl;
	cout << "Hasil dari pengurangan matriks 1 dan 2 adalah :"<<endl;
	for (m=0; m<3; m++){
		for (n=0; n<3; n++){
		hasil[m][n]= matriks1[m][n] - matriks2[m][n];
		cout<<hasil[m][n] << "   ";	
		} cout<< endl;
	}	
	
		cout << "C. PERKALIAN\n"<<endl;
	cout << "Masukan angka untuk matriks pertama "<< endl;
	for (m=0; m<3; m++){
		for (n=0; n<3; n++){
			cout<<"Baris "<<m+1 <<" Kolom "<< n+1 << " = ";
			cin>>matriks1[m][n];
		}
		cout << endl;
	}
	cout << "Masukan angka untuk matriks kedua\n"<< endl;
	for (m=0; m<3; m++){
		for (n=0; n<3; n++){
			cout << "Baris "<< m+1<< " Kolom "<< n+1 << " = ";
			cin >> matriks2[m][n];
		}
		cout << endl;
	}
	
	cout << "Matriks pertama adalah\n";
	for ( m=0; m<3; m++){
		for ( n=0; n<3; n++){
			cout << matriks1[m][n]<< " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "Matriks kedua adalah\n";
	for ( m=0; m<3; m++){
		for (n=0; n<3; n++){
			cout << matriks2[m][n]<< " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "Hasil dari penjumlahan matriks 1 dan 2 adalah :"<< endl;
    for(m=0; m<3; m++)
    {
        for(n=0; n<3; n++)
        {
            cout<<" "<<matriks1[m][n];
        }
        if(m==1)
        {
            cout<<" +";
        }
        else
        cout<<"\t";
        for(n=0; n<3; n++)
        {
            cout<<" "<<matriks2[m][n];
        }
        if(m==1)
        {
            cout<<" =";
        }
        else
        cout<<"\t";
        for(n=0; n<3; n++)
        {
            cout<<" "<<hasil[m][n];
        }
    cout<<endl;
    }
    	
	
		
return 0; 	
}
