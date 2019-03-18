package p2;

public class Employee {

	protected String name;
	protected String id;
	protected int empid;
	protected String title;

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public String getId() {
		return id;
	}

	public void setId(String id) {
		this.id = id;
	}

	public int getEmpid() {
		return empid;
	}

	public void setEmpid(int empid) {
		this.empid = empid;
	}

	public String getTitle() {
		return title;
	}

	public void setTitle(String title) {
		this.title = title;
	}
}

/*
 * //Screen Output
 * 
 * Name: John ID: A123456789 EmpID: 1100 Title: Manager Salaried Employee with
 * salary 60000 per month. Year earning: 720000
 * -------------------------------------- Name: Joyce ID: J376829345 EmpID: 1200
 * Title: Secretary Hourly Employee working 2500 hours with the rate of 130
 * dollars per hour. Year earning: 325000 --------------------------------------
 * Name: David ID: B135798642 EmpID: 1151 Title: Engineer Salaried Employee with
 * salary 50000 per month. Year earning: 600000
 * --------------------------------------
 */