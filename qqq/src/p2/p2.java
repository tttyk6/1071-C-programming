package p2;

public class p2 extends Employee {

public static void main(String[] args) {
Employee emp[] = new Employee[10];
int empCount = 0;
emp[empCount++] = new SalariedEmployee("John", "A123456789", 1100, "Manager", 60000);
emp[empCount++] = new HourlyEmployee("Joyce", "J376829345", 1200, "Secretary", 2500, 130);// hours=2500, hourlyPay=130
SalariedEmployee salariedEmp = new SalariedEmployee();
salariedEmp.setSalary(50000); // Salary=50000
salariedEmp.setName("David");
salariedEmp.setId("B135798642");
salariedEmp.setEmpID(1151);
salariedEmp.setTitle("Engineer");
emp[empCount++] = salariedEmp;

for (int i = 0; i < empCount; i++) {
   System.out.println(emp[i]);
   System.out.printf("Year earning: %d\n", emp[i].yearEarning());
   System.out.println("--------------------------------------");
}
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