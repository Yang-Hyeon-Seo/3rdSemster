import javax.swing.*;
import java.awt.event.*;

public class DialogCall extends JFrame
{
	MyDialog dialog;
	JButton btn;
	
	public DialogCall() 
	{
		super("JDialog Example");
		
		btn = new JButton("Show DIalog");
		
		dialog = new MyDialog(this, "Test Dialog");
		
		btn.addActionListener(new ActionListener()//������ dialog�� �ߵ��� �ϴ� �Լ�
				{
					public void actionPerformed(ActionEvent e)
					{
						dialog.setVisible(true);
					}
				});
		
		getContentPane().add(btn);
		setSize(300,300);
		setVisible(true);
	}
}
