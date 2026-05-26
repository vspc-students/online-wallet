#include <iostream>
using namespace std;
class Wallet{
	private:
		double balance;
		int pin;
	public:
		Wallet(double b= 0, int p=0):balance(b), pin(p){
		};
		~Wallet(){
		};
		
		//password stugel
		bool checkpin(int input){
			return input==pin;
		}
		
		
		//Gumar avelacnel
		void deposit(double amount){
			if(amount > 0){
				balance+=amount;
				cout<<"Գումարը հաջողությամբ փոխանցվել է\n";
			}
			else{
				cout<<"mutqagrel chisht gumar\n";
			}
			
		}
		
		//gumar hanel
		void withdraw(double amount){
			if(amount<0){
				cout<<"mutqagrel chisht gumar\n";
				
			} else if(amount<balance){
				balance-=amount;
				cout<<"gumary hajoxutyamb kanxikacvec\n";
			}else{
				cout<<"gumary shat e mnacordic\n";
			}
	
		}
		
		
		//mnacordy nayel
		void showBalance (){
		cout<<"dzer mnacordy kazmume    "<<balance<<" dram\n";
		}
		
};

int main(){
	Wallet w(1200, 1000);
	
	int inputpin;
	
	cout<<"mutqagrel  Pin:";
	cin>>inputpin;
	
	if(w.checkpin(inputpin)){
		
		w.showBalance();
		double amount1;
		cout << "mutqagrel poxancvox gumary\n";
		cin>>amount1;
		w.deposit(amount1);
		w.showBalance();
		double amount2;
		cout<<"mutqagrel kanxikacvox gumary\n";
		cin>>amount2;
		w.withdraw(amount2);
		
		w.showBalance();
	}
	else{
		cout<<"Sxal pin";
		
	}
	return 0;
}

