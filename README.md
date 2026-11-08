# cis165-lab8
Name: Kamryn Davis

Course section: CIS-165-W099
# Step-by-Step Process
  	geometry.cpp 
    (1) Create a geometry calculator menu with 4 choices    
  	(2) Ask the user their choice 
  	(3) If it is a menu choice outside 1-4, display an error
    (4) Choice 1: Ask the user for the radius and display the calculation 
    (5) Choice 2: Ask the user for the length/width and display the calculation
    (6) Choice 3: Ask the user for the base/height and display the calculation 
	(7) Choice 4: End the program
	(8) Display message if the user input a negative number 
	(9) Declare the named constant PI outside the main
	(10) Declare the variables as a double inside each if else statement 


# Test Table 
Restored it back to its original values, even though the test table also records other values. Ran it again after restoring it to its assigned values. I didn't set a precision, so std::cout uses its default: 6 significant digits.


| Value Used | Expected Results | Actual Output | Match or Fix |
| --- | --- | --- |  --- |
| Choice 1, radius 2 | Area 12.56636 | Area 12.5664 | Match |
| Choice 2, length 3, width 4.5| Area 13.5 | Area 13.5| Match | 
| Choice 3, base 5, height 3 | Area 7.5 | Area 7.5 | Match | 
| Choice 4 | Ends without dimension prompts or an area calculation | Ends the program | Match | 
| Choice 0 | Ends displays with an invalid-choice error | "ERROR: Choice must be between 1 and 4" | Match | 
| Choice 5 | Ends displays with an invalid-choice error | "ERROR: Choice must be between 1 and 4" | Match |
| Choice 1, radius -1 | Displays an error;use positive values for any other dimension | "ERROR: Radius cannot be negative" | Match |
| Choice 2, length/width -1 | Displays an error;use positive values for any other dimension | "ERROR: Length and width cannot be negative" | Match |
| Choice 3, base/height -1 | Displays an error;use positive values for any other dimension | "ERROR: Base and height cannot be negative" | Match |
| Choice 1, radius 0 | Area 0 | Area 0 | Match |
| Choice 1, radius 3 | Area 28.27431 | Area 28.2743 | Match |

# How To Run The Program 
	1.Copy the code from the file 
  	2.Go to	[OnlineGDB](https://www.onlinegdb.com/) and paste the code 
	3.Make sure the language is C++ and click "Run" 

# Explanation 
**How does your selection logic send each choice to the right calculation?**
If/else if compares the choice selected by the user and matches it to the right calculation. If it does not match any of the options, it displays an error. 
**Why is radius * radius correct while radius ^ 2 is not?**
The ^ operator does not square a number in C++. 
**Why does the triangle calculation use 0.5 rather than integer division 1 / 2?**
0.5 is a floating-point variable, while 1/2 is not. It would use integer division and result in 0. 
**Where do you check negative dimensions, and how do you handle zero and choice 4?**
I check for negative dimensions if the radius is less than 0 (< 0) before calculating. Zero is allowed and will just produce 0, while choice 4 will return 0. By returning 0, it does ask the user for any value. 
