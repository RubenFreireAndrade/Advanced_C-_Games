#pragma once
#include<iostream>
#include<string>
#include<list>
#include<forward_list>
#include<algorithm>

class Inventory
{

public:

	Inventory();
	~Inventory();

	void ShowItems();
	void AddItem(std::string newItem);
	void CheckItem(std::string playerChoice);
	std::string GetChosenItem();
	
private:

	std::list<std::string> inventory;
	std::list<std::string>::iterator it;

	std::string itemChosen;
};

