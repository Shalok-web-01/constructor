#include<iostream>
using namespace std;
class game{
	public:
		string name, server, ipaddress;
		int year;
		
		
		 game(string x, string y, string z, int a){
			name=x;
			server=y;
			ipaddress=z;
			year=a;
		}
		void getvalue(){
			cout<<"The host name is: "<<name<<endl<<"The server name is: "<<server<<endl<<"The ip for this server is: "<<ipaddress<<endl<<"The server made in: "<<year;
			
		}
		
};
int main(){
	game server("SMARTYPIE","Battlepie","play.battlepie.net",2025);
	server.getvalue();
	
}
