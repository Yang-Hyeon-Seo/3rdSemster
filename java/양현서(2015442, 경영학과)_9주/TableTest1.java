import java.awt.*;
import javax.swing.*;

public class TableTest1 
{
	JFrame jf;
	
	public TableTest1(String msg)
	{
		jf = new JFrame(msg);
		
		String columnName[] = {"捞抚", "傈拳锅龋", "E-Mail"};
		
		String data [] [] = {
				{"加己 1-1", "加己 1-2", "加己1-3"},
				{"加己 2-1", "加己 2-2", "加己2-3"},
				{"加己 3-1", "加己 3-2", "加己3-3"}
		};
		
		JTable table = new JTable(data, columnName);
		JScrollPane sp = new JScrollPane(table);
		jf.getContentPane().add(sp, BorderLayout.CENTER);
		
		jf.setSize(400,400);
		jf.setVisible(true);
	}
}
