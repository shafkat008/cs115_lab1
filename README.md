^ You are in the Markdown tab.
<br>
Please click on the "Console" tab when you want to write terminal commands. 
<br>
You will compile and run your code in the Console.

## Video Playlist
https://www.youtube.com/playlist?list=PLRZPNe-9vN526ekb7ABHnRlFw4gtvUjsx

## Lab Notes:
https://www.cs.uregina.ca/Links/class-info/115/IntroLab_2.html

## Lab Exercise:
https://www.cs.uregina.ca/Links/class-info/115/exercise.html

Please follow along with the video demonstrations to complete your lab exercise.

### Preparation

<div class="TabbedPanelsContentGroup">

<div class="TabbedPanelsContent" style="display: block">

#### To Prepare

Create a directory for this lab (you might have already done part of this):
 
1.  ensure that you are in your Introduction directory: `pwd`

2.  make a directory called *cs115*: `mkdir cs115`

3.  change to the directory created in step 2: `cd cs115`

4.  make a directory called *lab1*: `mkdir lab1`

5.  change to the directory created in step 4: `cd lab1`

6.  Use the following command: `mv ../../lab1Grocery.cpp .`  

7.  Use the `pwd` command to show where you are![tooltip](Images/tooltip.png)  

8.  Please take a screenshot and add it into your Replit project to help you study
<br>
<br>
### Programming Exercise

#### Practice Editing and Compiling

Uncle Bob knows that you have been taking computer science classes and wants you to design a program for his small-town grocery store. He doesn't use bar codes and fancy equipment. He just wants to be able to input a cost for an item and whether or not both the taxes are applied to it.

He wants the values to be stored so that they can be printed out later. He has drawn up his idea of what he thinks his input and output should look like:

<pre>cost? 7.70
tax? (y/n) y
cost? 5.23
tax? (y/n) n
cost? 8.90
tax? (y/n) y
cost? 11.21
tax? (y/n) y
cost? 6.32
tax? (y/n) n
For your review, here are your values:
      Cost       Tax
      7.70      0.77
      5.23      0.00
      8.90      0.89
     11.21      1.12
      6.32      0.00
    ------------------
     39.36      2.78
Your total bill is:  42.14</pre>

Your task is to implement Uncle Bob's idea. To keep things simple, you can assume that each "customer" will have five items, and that the "teller" will never make a mistake typing. (O.K, these are pretty unbelievable, but we are trying to keep it simple)

Your cousin, Brittany, tried to write the code, but she made six mistakes. If you want to start with her code, you can use the repl link given for this lab.

A couple of CS110 labs might come in handy:

*   [Lab on one dimensional arrays](https://www.cs.uregina.ca/Links/class-info/110/arrays/index.html)
*   [Lab on outputting with format](https://www.cs.uregina.ca/Links/class-info/110/strings/output_oldtext.html)

Remember the commands that you need to compile (`g++ lab1Grocery.cpp -o output`) and run (`./output`) C++ code.  



#### If you would like, an algorithm is provided here:

1.  Declare two arrays: one for cost and one for tax
2.  Declare additional variables such as letter input (for y or n), and totals for cost and tax.
3.  Loop five times
    1.  prompt for cost
    2.  input the cost into the array
    3.  prompt for y and n
    4.  input the y and n
    5.  if the letter is y, then store the tax (cost * .10) into the tax array, otherwise, set the tax array value to 0
4.  Print some headers (such as " Cost Tax ")
5.  Loop five times
    1.  print the cost and the tax
    2.  add the current cost (in the array) to a total
    3.  add the current tax (in the array) to a total
6.  Print the cost total and the tax total
7.  Print the total bill

## How to Submit Lab 1
* Please check the lab 1 submission page on UR Courses for full submission details
* Please include your name, student number, and the date at the top of the **lab1Grocery.cpp** file
* You will submit your **lab1Grocery.cpp** file in UR Courses by the specified deadline
* When you are ready, you can click **Submit** on your Replit project (if you make changes, please click **Resubmit** before the specified deadline)