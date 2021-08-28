
public class Students extends Members_S
{
	
	public Students(String name, String dept) 
	{
		super(name, dept);
		this.name = name;
		this.dept = dept;
	}
	
	public void work() {
		System.out.println("\tStudent: \"" + name + "\" does his best.");
	}
}
