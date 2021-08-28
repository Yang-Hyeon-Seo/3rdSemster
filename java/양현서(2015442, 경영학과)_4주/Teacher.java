class Teacher extends Members 
{
	String dept;
	Members students[];
	
	public Teacher(String name, String idnum, String dept) 
	{
		super(name, idnum);
		this.dept = dept;
	}
	
	public void setStudents(Members sub[]) 
	{
		students = sub;
	}
	
	public void work() 
	{
		System.out.println("Teacher:\"" + name + "\" studies hard with is students is "
	+ dept +"dept.");
	}
}
