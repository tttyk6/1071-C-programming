package p2;

public class salariedEmployee {
	
	protected int salary;

	@Override
	public String toString() {
		return String.format("Name: %s\nID: %sEmpID: %dTitle: %s",name ,id ,empid ,title);
	}
	
	

	

}



/*
//Screen Output

Name: John
ID: A123456789
EmpID: 1100
Title: Manager
Salaried Employee with salary 60000 per month.
Year earning: 720000
--------------------------------------
Name: Joyce
ID: J376829345
EmpID: 1200
Title: Secretary
Hourly Employee working 2500 hours with the rate of 130 dollars per hour.
Year earning: 325000
--------------------------------------
Name: David
ID: B135798642
EmpID: 1151
Title: Engineer
Salaried Employee with salary 50000 per month.
Year earning: 600000
--------------------------------------
*/