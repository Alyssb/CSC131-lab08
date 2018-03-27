# Lab 8 - Retail Calculator

## Introduction

Write a C++ program that asks the user to enter an item's description (see sample program runs below for examples.) The program then asks for the item's wholesale cost and its markup percentage. It should then display the item's retail price. For example, if an item's wholesale cost is 5.00 and its markup percentage is 50%, then the item's retail price is 7.50.

Your program should have a function named `calculateRetail` that receives the wholesale cost and the markup percentage as arguments and returns the retail price of the item.

Sample program runs are as follows (User input is shown following the :)

```text
Enter item description: gallon of milk
You entered gallon of milk
Enter item wholesale cost: 1.5
You entered 1.5
Enter item markup percentage: 150
You entered 150

Retail price for gallon of milk is 3.75
```

```text
Enter item description: pair of shoes
You entered pair of shoes
Enter item wholesale cost: 60
You entered 60
Enter item markup percentage: 62.50
You entered 62.5

Retail price for pair of shoes is 97.5
```

```text
Enter item description: bicycle
You entered bicycle
Enter item wholesale cost: 80
You entered 80
Enter item markup percentage: 75
You entered 75

Retail price for bicycle is 140
```

Notice that whenever the program reads input from the user, it displays that input back to the user. Make sure that your program does the same.

## Tasks

Clone this repository and create a `develop` branch within which to do your work. After completing each of the following tasks, commit your changes with an appropriate commit message. Before you leave lab, be sure to push your commits to GitHub so you can create a pull request to submit on Blackboard.

1. Update the header comments; removing the TODO comment while you're at it.
1. Stub out your `calculateRetail` function so that it always returns 0.
1. Implement your `main` function, calling `calculateRetail` in the appropriate places.
1. Finalize the implementation of your `calculateRetail` function so that it calculates (and returns) the expected result.

## Submission Details

The usual assignment protocol is followed:

1. Accept this assignment using the URL found in the Blackboard assignment which creates your repository in your GitHub account.
1. Clone your repository and create a branch named develop within which to do your work.
1. Implement the code indicated by the # TODO: comments.
1. Minimally make commits after finishing each function; more commits are encouraged but not required.
1. Once the program behaves as prescribed, push your final commit to GitHub and create a pull request, requesting to merge your `develop` branch into your `master` branch.
1. After the pull request is created, copy the URL of the pull request and paste it into a Text Submission on Blackboard. You should make the URL a working hyperlink that opens the pull request in a new browser window. NOTE: The assignment is officially submitted by the act of creating and submitting this Blackboard Text Submission and it is the timestamp of that activity that dictates when your assignment was actually submitted.

## Due Date

Your assignment must be submitted to Blackboard by 23:59 Tuesday 27 March 2018.
