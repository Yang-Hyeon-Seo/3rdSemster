import java.awt.*;
import javax.swing.*;

public class TableTest1 
{
	JFrame jf;
	
	public TableTest1(String msg)
	{
		jf = new JFrame(msg);
		
		String columnName[] = {"�̸�", "��ȭ��ȣ", "E-Mail"};
		
		String data [] [] = {
				{"�Ӽ� 1-1", "�Ӽ� 1-2", "�Ӽ�1-3"},
				{"�Ӽ� 2-1", "�Ӽ� 2-2", "�Ӽ�2-3"},
				{"�Ӽ� 3-1", "�Ӽ� 3-2", "�Ӽ�3-3"}
		};
		
		JTable table = new JTable(data, columnName);
		JScrollPane sp = new JScrollPane(table);
		jf.getContentPane().add(sp, BorderLayout.CENTER);
		
		jf.setSize(400,400);
		jf.setVisible(true);
	}
}
