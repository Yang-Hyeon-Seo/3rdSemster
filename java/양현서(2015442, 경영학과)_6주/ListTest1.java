import java.awt.*;

public class ListTest1 
{
	List list;
	public ListTest1()
	{
		Frame f = new Frame("List Test 1");
		
		f.setLayout(new FlowLayout());
		list = new List(6, false);
		list.add("one");
		list.add("two");
		list.add("three");
		list.add("four");
		list.add("five");
		list.add("six");
		
		f.add(list);
		f.setSize(300,200);
		f.setVisible(true);
	}
}
