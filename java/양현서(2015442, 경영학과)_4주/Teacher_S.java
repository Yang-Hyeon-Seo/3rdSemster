
public class Teacher_S extends Members_S{
	String dept;
	Students student;
	
	public Teacher_S(String name, String idnum, String dept) 
	{
		super(name, idnum);
		this.dept = dept;
	}
	
	public void setStudents(String name, String dept) 
	{
		student = new Students(name, dept);
	}
	
	public void work() 
	{
		System.out.println("Teacher:\"" + name + "\" studies hard with is students is "
	+ dept +"dept.");
	}
}
