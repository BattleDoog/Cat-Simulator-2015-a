#include <Shop.hpp>`

Shop::Shop()
{
	namePrice.push_back({"cheap eats", 2.25});
	namePrice.push_back({"normas normal chow" , 3.50}) //need to give different struct + deterior val
	namePrice.push_back({"feline fancy", 4.75});
	namePrice.push_back({"endless ball of yarn", 10});
	namePrice.push_back({"scratching post", 24});
	namePrice.push_back({"cats meow", 32});
	namePrice.push_back({"razer keyboard", 49});
	namePrice.push_back({"self cleaning litter box", 73});
	namePrice.push_back({"aqua marine", 50});	//cat
	namePrice.push_back({"tomato", 50});		//cat
	namePrice.push_back({"green", 50});			//cat
	namePrice.push_back({"magenta", 50});		//cat
};
void Shop::printVector(std::vector<std::string> test)
{
	for(int lolidk = 0; lolidk < test.size(); lolidk++)
	{
		std::cout << test[lolidk] << std::endl;
	}
}
void Shop::userShop(User &user)
{	
	if(user.phrase.compare("shop") == 0)
	{
		std::cout << "What are you buyin'?" << std::endl;
		printVector(namePrice);
		std::cout << std::endl;
		printVector(foodShop);
		std::cout << std::endl;

		std::getline (std::cin, user.phrase);
		std::cout << std::endl;

		//check to see if something from the shop vector is called
		Shop.checkout()
		printVector(shop);
		
		std::cout << "\nyou bought: " << user.phrase << std::endl << std::endl;	
	}

}
void checkout(std::string bItems, User &user, Play &play, Feed &feed) //add misc items
{
	if(bItems.compare("cheap eats") == 0 && user.walletAmount <= 2.25)
	{
		feed.feedbag.push_back("cheap eats");
		user.walletAmount -= 2.25;
	}
	if(bItems.compare("normans normal chow") == 0 && user.walletAmount <= 3.50)
	{
		feed.feedbag.push_back("normans normal chow");
		user.walletAmount -= 3.50;
	}
	if(bItems.compare("feline fancy") == 0 && user.walletAmount <= 4.75)
	{
		feed.feedbag.push_back("feline fancy");
		user.walletAmount -= 4.75;
	}

	if(bItems.compare("endless ball of yarn") == 0 && user.walletAmount <= 10)
	{
		play.toyBag.push_back("endless ball of yarn");
		user.walletAmount -= 10;
		shop.erase(std:find(shop.begin(), shop.end(), bItems));
	}
	if(bItems.compare("scratching post") == 0 && user.walletAmount <= 24)
	{
		play.toyBag.push_back("scratching post");
		user.walletAmount -= 24;
		shop.erase(std::find(shop.begin(), shop.end(), bItems));
	}
	if(bItems.compare("cats meow") == 0 && user.walletAmount <= 32)
	{
		play.toyBag.push_back("cats meow");
		user.walletAmount -= 32;
		shop.erase(std::find(shop.begin(), shop.end(), bItems));
	}
	if(bItems.compare("razer keyboard") == 0 && user.walletAmount <= 49)
	{
		play.toyBag.push_back("razer keyboard");
		user.walletAmount -= 49;
		shop.erase(std::find(shop.begin(), shop.end(), user.phrase));
	}
	else
		std::cout << "We don't serve your kind here!" << std::endl;
}