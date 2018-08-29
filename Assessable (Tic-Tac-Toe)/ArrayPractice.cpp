#include<iostream>

//DELETE THIS LATER
int main()
{
	/*
	// The char is the type that you want to use so char = character.
	// paulOne is the name of the char or what the identifier is called when you want to call it or compare it to others.
	// The two brackets are like the rows in columns is my sense. The first bracket [2], is just one row, but it has two numbers or columns in it. Example: [2] = {'1','2'};
	// The second bracket is how many of those rows and columns or copies of the first bracket do you want. So if [2] = {'1','2'}; Then [2][2] = {{'1','2'},
	//																																			  {'1','2'}; It makes two rows, with 2 columns (WHAT!!!)
	char paulOne[2][2] = { { '1', '2' },
	{ '3', '4' } };

	// The single loop part makes sense to me, it is sort of a statement, if this integer, char, or whatever is bigger, smaller, equal to, true or false, then this loop will continue until that...
	// ... char, num, etc does not work with that loop anymore which will break the loop and continue.
	// Question: I always wondered and this doesn't make some sense to me which was that i know that the int i is something that you identify in the (), but why do you do the i++ and how does that..
	// ... work in the loop?
	for (int i = 0; i < 2; i++)
	{
		// Okay so i kinda know what a nested for loop now is well what i think it is, a for loop... inside a for loop. (WHAT I KNOW RIGHT!!!)
		for (int n = 0; n < 2; n++)
		{
			// Alright, this part of the code kinda confuses me a bit. So i get you print out your result or what you want your program to show the std::cout yada yada, but the in this instance...
			// ... paul[i][n], how does that go back to find the values of 1,2,3,4 or print them all out. Like if int i = 0 and if it is less than 2, then print out 1 and 2? That does not make ...
			// sense to me at all.
			std::cout << paulOne[i][n];
			// 
		}
		std::cout << std::endl;
	}
	*/


	char paulOne[2][2] = { { '1', '2' },
						   { '3', '4' } };

	// Alright, here we go... the for loop, or the outside for loop, it starts off by stating that while int i, a integer that we made within the (), is less than 2 since in array that we made...
	// ... for paulOne, is only 2 by 2 which means that since there are only two numbers in each row, the index will start off for 0 for the first number, than the second or next number, the...
	// ... index for the next number is one and since we only have two numbers, we dont want the loop to go up more than those 2 index values (0 and 1) so if it goes to the next index which ...
	// would be 2, since there is no number at all there, it will be like "hey this number (i = 2) is now bigger than this other number (< 2), so i am gonna break off of this loop and continue on".
	// Coming off of this, if i which starts off at 0, if it is less than two, which when it starts, it is, then that i++ at the end which all it means is that it is a shorter way of writing...
	// ... i + 1, will add that 1 where that int i = 0, which will then change the int i from int i =0 to int i = 1;. Since int i which now = 1 and since it is still less< than 2, it will add...
	// .. another 1 to that int i which instead of = 1, it will now = 2. But OH WAIT!!! since i now equals 2, and it is not less than 2 anymore, it will break from this loop and move on.
	for (int i = 0; i < 2; i++)
	{
		// But OH WAIT, THERE'S MORE!!! as you can see, there is a loop in another loop, which is called a nested for loop. So going back to the first case for (int i = 0; i < 2; i++) ...
		// since i is 0 and because it is less than 2 which is true, instead of adding 1 first, it will go into the next loop since it is true so far.
		for (int n = 0; n < 2; n++)
		{
			std::cout << paulOne[i][n];
		}
		std::cout << std::endl;
	}

	return 0;
}