#include <iostream>

using namespace std;

int main()
{
	string customerName;
    int quantity,product,iD;
    int printer=900;
    int phone=600;
    int table=100;
    float total,deposit,VAT;

    cout<<"---------WELCOME TO THE INF SUPERMARKET--------- \n"<<endl;
    cout<<"------------------------------------------------ \n"<<endl;
	
    //Requesting Customer Details
    cout<<"Please enter your full name: ";
    getline(cin,customerName);
    cout<<"Please enter your ID: ";
	cin>>iD;
    cout<<""<<endl;
	   
    while(product!=4){
    //Products available
    cout<<"Items in stock:"<<endl;
    cout<<"1. Printer    -   "<<printer<<"cedis"<<endl;
    cout<<"2. Phone      -   "<<phone<<"cedis"<<endl;
    cout<<"3. Table      -   "<<table<<"cedis"<<endl;
 	   	
    //customers request
    cout<<"NB: You can only purchase one item at a time"<<endl;
    cout<<"What product would you like to purchase"<<endl;
    cout<<"Please enter the numeric value assigned to the product to purchase"<<endl;
    cin>>product;
		
	if(product>=1 && product<=3){

    //Caculation
    if(product==1){
        cout<<"Please enter the quantity of printers you would like to purchase: "<<endl;
        cin>>quantity;
        VAT=0.12*(printer*quantity);
        total=(printer*quantity+VAT);
        cout<<"Your purchase is going to amount to "<<total<<" cedis"<<endl;
    }
    else if(product==2){
        cout<<"Please enter the quantity of phones you would like to purchase: "<<endl;
        cin>>quantity;
        VAT=0.12*(phone*quantity);
        total=(phone*quantity+VAT);
        cout<<"Your purchase is going to amount to "<<total<<" cedis"<<endl;
    }
    else if(product==3){
        cout<<"Please enter the quantity of tables you would like to purchase: "<<endl;
        cin>>quantity;
        VAT=0.12*(table*quantity);
        total=(table*quantity+VAT);
        cout<<"Your purchase is going to amount to "<<total<<" cedis"<<endl;
    }
 	else{
        cout<<"You entered a wrong option"<<endl;
    }
	
	cout<<"Please enter your deposit amount: "<<endl;
    cin>>deposit;
    cout<<"Press 4 to exit"<<endl;

    //notifying the customer
    int profit,loss;
    if(deposit>total){
        profit=deposit-total;
        cout<<"You have a balance of "<<profit<<" cedis"<<endl;
    }
    else{
        loss=total-deposit;
        cout<<"You are owing a sum of "<<loss<<" cedis"<<endl;
    }

    //receipt
    cout<<"________________________________________________________________"<<endl;
    cout<<"................................................................"<<endl;
    cout<<"                       INF SUPERMARKET RECEIPT                 "<<endl;
    cout<<""<<endl;
    cout<<"                       Purchase Details"<<endl;
    cout<<""<<endl;
    cout<<"Customer name: "<<customerName<<endl;
    cout<<"Customer ID number: "<<iD<<endl;
    if (product==1){
        cout<<"Item bought: Printer"<<endl;
    }
    else if (product==2){
        cout<<"Item bought: Phone"<<endl;
    }
    else{
        cout<<"Item bought: Table"<<endl;
    }
    cout<<"Item quantity: "<<quantity<<endl;
    cout<<""<<endl;
    cout<<"VAT amount: "<<VAT<<endl;
    if (product==1){
        cout<<"Total cost: "<<(printer*quantity)<<"cedis"<<endl;
    }
    else if (product==2){
        cout<<"Total cost: "<<(phone*quantity)<<"cedis"<<endl;
    }
    else {
        cout<<"Total cost: "<<(table*quantity)<<"cedis"<<endl;
    }

    if (deposit>total){
        cout<<"Total amount paid: "<<total<<"cedis"<<endl;
        cout<<"Balance: "<<profit<<"cedis"<<endl;
    }
    else{
        cout<<"Total amount paid: "<<total<<"cedis"<<endl;
        cout<<"Owing: "<<loss<<"cedis"<<endl;
    }
    cout<<"Amount deposited: "<<deposit<<"cedis"<<endl<<endl<<endl;
    cout<<"............Thank you for transacting with us................."<<endl<<endl;
    cout<<"..............................................................."<<endl;
    cout<<"_______________________________________________________________\n"<<endl;
    
   
}
 int choice;
	cout<<"Do you want to buy again"<<endl;
    cin>>choice;
    if(choice==1){
    	continue;
	}
	else{
		break;
	}
	}
    return 0;
}
