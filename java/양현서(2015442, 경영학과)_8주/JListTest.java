import javax.swing.*;
import java.awt.*;

public class JListTest 
{
	JList fruits;
	JFrame jf;
	JScrollPane sp;
	
	public JListTest(String msg)
	{
		jf = new JFrame("JList Test");
		jf.getContentPane().setLayout(new FlowLayout());
		
		String items[] = {"apple", "grape", "melon", "orange", "banana", "pear"};
		fruits = new JList(items);
		fruits.setVisibleRowCount(4);
		sp = new JScrollPane(fruits);
		
		jf.getContentPane().add(sp);
		jf.setSize(200,200);
		jf.setVisible(true);
	}
}
