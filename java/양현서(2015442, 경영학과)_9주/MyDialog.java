import java.awt.*;
import javax.swing.*;
import java.awt.event.*;

public class MyDialog extends JDialog
{
	JTextField tf;
	JButton ok;
	
	public MyDialog (JFrame frame, String title) {
		super(frame, title);
		setLayout(new FlowLayout());
		
		tf = new JTextField(20);//Dialog ³»¿ë
		add(tf);
		
		ok = new JButton("OK");
		add(ok);
		
		setSize(200,200);
		
		ok.addActionListener(new ActionListener()
				{
					public void actionPerformed(ActionEvent e)
					{
						setVisible(false);
					}
				});
	}
}
