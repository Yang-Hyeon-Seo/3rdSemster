
public class Members_S {
	String name;//이름
	String dept;//과+학번
	String major;//전공
	int id;
	
	public Members_S(String name, String dept) {
		this.name = name;
		this.dept = dept;
	}
	
	public void setId(int id) {
		this.id = id;
	}
	
	public void setMajor(String major) {
		this.major = major;
	}
	
	public void work() {
		System.out.println("\tStudent: \"" + name + "\" does his best.");
	}
}
