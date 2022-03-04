# Introduction
The amount of money framed by the supplier for the supply of electrical energy to various types of consumers is known as "electrical tariff".The tariff covers the total cost of producing and supplying electrical energy and in addition to reasonable cost. The actual tariff that the consumer pay depends on the consumption of the eletricity. The industrial consumers pay more tariff because they use more power for long times than the domestic consumers. The electricity tariff depends on the following factors : 1) Type of load, Time at which load is required, The amount of energy used. The total bill of consumer has these parts namely fixed charge, rate of charge, costumer charge, Electrical duty and no of units consumed.

# FlowChart
![Screenshot (189)](https://user-images.githubusercontent.com/99093515/153276966-1cd6a0ab-d65b-42bf-a555-59cdc2d5ac82.png)

# SWOT Analysis
![Screenshot (193)](https://user-images.githubusercontent.com/99093515/156719840-d176e273-530a-4be7-8e3e-36d483d000fb.png)

# Requirements
## **High Level Requriements**
 
|HLR(ID)|Description|
--- | --- | 
|HLR01|	Calculates electricity bill according to state |
|HLR02|	Calculates electricity bill at particular tax decided by govt|	
|HLR03|	Calculates total Amount at Domestics places|
|HLR04| Calculates total unit consumed at Domestics places|
|HLR05|	Calculates total Amount at Non-Domestics places|
|HLR06| Calculates total unit consumed at Non-Domestics places|

## **Low Level Requriements**
   
|LLR(ID)|Description|
--- | --- | 
|LLR01_HLR_01| Electricity bill calculation at Domestic (Units * fixed charges)|
|LLR02_HLR_01| Electricity bill calculation at Non-Domestic if(units>0 && units <50)|
|LLR03_HLR_01| Electricity bill calculation at Non-Domestic if(units>50 && units <100)|
|LLR04_HLR_01| Electricity bill calculation at Non-Domestic if(units<101 && units<200)|	
|LLR05_HLR_02| Electricity bill calculation at Non-Domestic if(units<200 && units<300)|
|LLR06_HLR_02| Electricity bill calculation at Non-Domestic if(units>301 && units <400)|
|LLR07_HLR_02| Electricity bill calculation at Non-Domestic if(units>401 && units <500)|
|LLR08_HLR_02| Electricity bill calculation at Non-Domestic if(units>500)|
