#pragma once
#include<string>
double CheeseBurger = 38.99;
double BeefBurger = 35.99;
double BBQChicken = 42.99;
double CrispyChicken = 42.99;
double SpicyBuffalo = 45.99;
double BeefBacon = 47.99;
double Combo = 9.99;
double TotalPriceCalc(double q[8]) {
	double p[8];
	double Total=0;
	p[0] = q[0] * CheeseBurger;
	p[1] = q[1] * BeefBurger;
	p[2] = q[2] * BBQChicken;
	p[3] = q[3] * CrispyChicken;
	p[4] = q[4] * SpicyBuffalo;
	p[5] = q[5] * BeefBacon;
	p[6] = q[6] * Combo;
	for (int i = 0; i < 8; i++) {
		Total += p[i];
	}
	return Total;
}
double TotalCalorieCalc(double q[8]) {
	double c[8];
	double CheeseBurgerCal = 303;
	double BeefBurgerCal = 225;
	double BBQChickenCal = 226;
	double CrispyChickenCal = 129;
	double SpicyBuffaloCal = 505;
	double BaconCal = 420;
	double ComboCal = 592;
	double TotalCals = 0;
	c[0] = q[0] * CheeseBurgerCal;
	c[1] = q[1] * BeefBurgerCal;
	c[2] = q[2] * BBQChickenCal;
	c[3] = q[3] * CrispyChickenCal;
	c[4] = q[4] * SpicyBuffaloCal;
	c[5] = q[5] * BaconCal;
	c[6] = q[6] * ComboCal;
	for (int i = 0; i < 8; i++) {
		TotalCals += c[i];
	}
	return TotalCals;
}
bool Registryfunction(std::string username, std::string phoneNum, std::string pass, std::string passConf) {

	//check for all data
	while (pass != passConf || pass.length() < 8 || phoneNum.length() < 11 || phoneNum.length() != 11)
	{
		if (pass.length() < 8 && pass != passConf && phoneNum.length() != 11)   //case 3 all data wrong
		{
			//cout << "Register faild\n\t\t The password is short ,don't identical and phone nummber is invalid \nTry again\n";
			phoneNum.erase(); pass.erase(); passConf.erase();
			//cout << "Please enter password :\n"; cin >> user.pass;
			//cout << "confirmation password :\n"; cin >> user.passconf;
			//cout << " Please enter phone number :\n"; cin >> user.phoneNumber;
			return false;
		}
		if (phoneNum.length() != 11) // case 4 phone number wrong
		{
			//cout << "Register faild\n\t\t The phone number is invalid\nTry again\n";
			phoneNum.erase();
			//cout << " Please enter phone number :\n"; cin >> user.phoneNumber;
			return false;
		}
		if (pass != passConf) //case 5 el pass m4 zay b3d
		{
			//cout << "Register faild\n\t\t The password not identical\nTry again\n";
			pass.erase(); passConf.erase();
			//cout << "Please enter password :\n"; cin >> user.pass;
			//cout << "confirmation password :\n"; cin >> user.passconf;
			return false;
		}
		if (pass.length() < 8)   //case 6 password short 
		{
			//cout << "Register faild\n\t\t The password is short\nTry again\n";
			pass.erase(); passConf.erase();
			//cout << "Please enter password :\n"; cin >> user.pass;
			//cout << "confirmation password :\n"; cin >> user.passconf;
			return false;
		}

	}
	if (pass == passConf && pass.length() >= 8 && phoneNum.length() == 11)  // kol haga tmam
	{
		//cout << "\nRegister completed\n";
		return true;
	}

}
struct Accounts {
	std::string username;
	std::string password;
	std::string phonenumber;
}acc1;


