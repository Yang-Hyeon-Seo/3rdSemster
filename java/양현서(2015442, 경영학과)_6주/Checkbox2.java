import java.awt.*;

public class Checkbox2 extends Frame
{
	Checkbox one, two, three;
	public Checkbox2(String msg)
	{
		super(msg);
		setLayout(new FlowLayout());
		
		one = new Checkbox("One");
		two = new Checkbox("Two");
		three = new Checkbox("Three");
		
		add(one);
		add(two);
		add(three);
		
		setSize(500,500);
		setVisible(true);
	}
	
	public Checkbox2()
	{
		super("My Checkbox");
		setLayout(new FlowLayout());
		
		one = new Checkbox("One");
		two = new Checkbox("Two");
		three = new Checkbox("Three");
		
		add(one);
		add(two);
		add(three);
		
		setSize(500,500);
		setVisible(true);
	}

}
