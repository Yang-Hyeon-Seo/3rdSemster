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
				{"�Ӽ�1-1", "�Ӽ�1-2", "�Ӽ�1-3"},
				{"�Ӽ�2-1", "�Ӽ�2-2", "�Ӽ�2-3"},
				{"�Ӽ�3-1", "�Ӽ�3-2", "�Ӽ�3-3"}
		};
		String[] columnName = {"Name", "Age", "E-mail"};
		
		table = new JTable(data, columnName);
		jf.getContentPane().add(new JScrollPane(table), "Center");
		jf.setSize(300,200);
		jf.setVisible(true);
	}
}
