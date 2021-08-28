import java.awt.*;

public class ListTest extends Frame
{
	List list;
	ListTest(String msg)
	{
		super(msg);
		
		setLayout(new FlowLayout());
		list = new List(6, true);
		list.add("one");
		list.add("two");
		list.add("three");
		list.add("four");
		list.add("five");
		list.add("six");
		
		add(list);
		setSize(300,200);
		setVisible(true);
	}
}
