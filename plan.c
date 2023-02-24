int main()
{
	//Test #1
	mintf("");
	//Expect: ""
	
	//Test #2
	mintf("hello there");
	//Expect: "hello there"
	
	//Test #3
	mintf("%d", 1234);
	//Expect: "1234"

	//Test #4
	mintf("%s", "The sky is green");
	//Expect: "The sky is green"
	
	//Test #5
	mintf("%x", 4553);
	//Expect: "11c9"
	
	//Test #6
	mintf("There were %d birds in the field", 345);
	//Expect: "There were 345 birds in the field"
	
	//Test #7
	mintf("%s is %d", "the worlds population", 8000000000);
	//Expect: "the worlds population is 8000000000);
	
	//Test #8
	mintf("My paycheck is %$.", 345);
	//Expect: "My paycheck is $3.45."
	
	//Test #9
	mintf("I have %d computers", 54, 32, 12, 34);
	//Expect: "I have 54 computers"
	
	//Test #10
	mintf("The temperature is %x", -35633);
	//Expect: "The temperature is -8b31"
}
