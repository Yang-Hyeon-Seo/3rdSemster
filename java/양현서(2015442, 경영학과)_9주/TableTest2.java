import java.awt.*;
import javax.swing.*;

public class TableTest2 
{
	JFrame jf;
	JTable table;
	
	public TableTest2(String msg)
	{
		jf = new JFrame(msg);
		Object [][] data = {
				{"加己1-1", "加己1-2", "加己1-3"},
				{"加己2-1", "加己2-2", "加己2-3"},
				{"加己3-1", "加己3-2", "加己3-3"}
		};
		String[] columnName = {"Name", "Age", "E-mail"};
		
		table = new JTable(data, columnName);
		jf.getContentPane().add(new JScrollPane(table), "Center");
		jf.setSize(300,200);
		jf.setVisible(true);
	}
}
