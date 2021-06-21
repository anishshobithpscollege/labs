# Expirement - 5

## Aim
An electricity board charges the following rates for the use of electricity: for the first
`200` units `80` paise per unit, for the next `100` hundred units `90` paise per unit; beyond 300
units, rupee `1` per unit. All users are charged a minimum of Rs. `100` as meter charge. If the
total amount is more than Rs `400`, then an additional surcharge of `15%` of total amount is
charged. Write a program to read the name of the user, number of units consumed and
print out the charges.

## Topic Learning Objective:
To apply cascading if-else for decision making.

## Description
An electricity bill generator generates the electricity bills based on the number of units of
electricity consumed by the consumer taking into consideration the minimum charges,
additional surcharges for a total amount of more than Rs `400`, varying cost per unit for the first
`200` units, the next `100` units, and units beyond `300`.

## Illustration
Consider the number of units consumed is `425`.
The electricity bill is generated as follows,
Charges = `100` paise (the minimum charge) + `200 * 0.8` (`80` paise per unit for the first `200` units)
+ `100 * 0.9` (`90` paise per unit for the next `100` units) + `125 * 1` rupee (Rs `1` per unit beyond `300`
units) = Rs `475/-`
If the total amount is more than Rs `400`, then an additional surcharge of 15% of total amount is
charged. Hence Charges = `475` (Total amount) + `71.25` (`15%` of `475`) = Rs `546.25/-`

## Algorithm
```
Step 1: [Begin]
        Start
Step 2: [Read the name of the user]
        Read name
Step 3: [Read the number of units of electricity consumed]
        Read units
Step 4: [Generate the bill]
        if (units == 0)
            charges <- 100
        else if (units <= 200)
            charges <- 100 + (units*0.8)
        else if (units <= 300)
            charges <- 100 + (200*0.8) + ( (units-200) * 0.9)
        else
            charges <- 100 + ( (200*0.8) + (100*0.9) + ( (units-300) * 1))
    
        if (charges > 400)
            charges += charges *0.15;

Step 5: [Print electricity bill]
        Print name of user, charges

Step 6: [Terminate]
        Stop
```

## Flowchart


## Outputs

1st Output

![1st Output](https://github.com/Anish-Shobith/college/blob/main/1styear/lab%20sessions/5th%20expirement/outputs/1.png?raw=true)

2nd Output

![2nd Output](https://github.com/Anish-Shobith/college/blob/main/1styear/lab%20sessions/5th%20expirement/outputs/2.png?raw=true)

3rd Output

![3rd Output](https://github.com/Anish-Shobith/college/blob/main/1styear/lab%20sessions/5th%20expirement/outputs/3.png?raw=true)

4th Output

![4th Output](https://github.com/Anish-Shobith/college/blob/main/1styear/lab%20sessions/5th%20expirement/outputs/4.png?raw=true)
