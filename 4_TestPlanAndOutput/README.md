# HIGH LEVEL TEST PLAN
* Units
* Calculation
* Actual output
* Type of Test
* Bill Amount
* Units
* Exact bill amount to be calculated
* Pass Requirement

## High-Level Test Requriements

|Test ID| HLR | Description| Inputs|Expected O/P | Actual O/P|
--- | --- | --- | --- | --- | --- |
|TD01|HLR01|Calculating Domestic electricity bill|Choice|Sucess|Sucess|
|TD02|HLR02|Calculating Domestic electricity bill|Choice|Sucess|Sucess|
|TD03|HLR03|Calculating total amount at Domestics places|Choice|Sucess|Sucess|
|TD04|HLR04|Calculates total unit consumed at Domestics places|Choice|Sucess|Sucess|

   

# LOW LEVEL TEST PLAN
* Previous Reading
* current reading
* View the readings
* pass | Requirement 
* Units will be calculated
* Interger 2
* View the units 
* Pass Requirement 
* Selection of group to calculate the bill amount 
* Exit 
* Pass requirement 
* Cost of charge
* Selection of group to calculate the bill amount
* Three groups are available
* The energy charges will be added to customer charges ,ED,Fixed charges 
* Pass Requirements 
* Bill amounts will get as output 
* Exits from loops

## Low-Level Test Requriements

|Test ID| LLR | Description| cur_read | prev_read |Expected O/P (Amount)| Actual O/P (Amount)|
--- | --- | --- | --- | --- | --- | --- |
|TD01|LLR01_HLR01|Electricity bill calculation at Domestic if(units=30)&&state=1|   100| 150|  129.85| 129.85|
|TD02|LLR02_HLR01|Electricity bill calculation at Non-Domestic if(units>0 && units <50)&&state=1| 100| 145|  253.6|  253.6|
|TD03|LLR03_HLR01|Electricity bill calculation at Non-Domestic if(units>51 && units <100)&&state=1| 100| 200|  482.3| 482.3|
|TD04|LLR04_HLR01|Electricity bill calculation at Non-Domestic if(units<101&&units<200)&&state=1|   150| 300|  985.8|  985.8|
|TD05|LLR05_HLR02|Electricity bill calculation at Non-Domestic if(units<201 && units<300)&&state=1|   100| 380|   2234.48|   2234.48|
|TD06|LLR06_HLR02|Electricity bill calculation at Non-Domestic if(units>301 && units <400)&&state=1|   200| 555|  3118.78| 3118.78|
|TD07|LLR07_HLR02|Electricity bill calculation at Non-Domestic if(units>401 && units <500)&&state=1|   0| 425|   3956.45|  3956.45|
|TD08|LLR08_HLR02|Electricity bill calculation at Non-Domestic if(units>501)&&state=1|   520| 1040|   5611.64| 5611.64|
