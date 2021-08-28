import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class ButtonEventType1 {
	JFrame jf;
	JPanel panel;
	JButton yellow, pink;
	
	MyListener listener = new MyListener();
	
	public ButtonEventType1 (String msg)
	{
		jf = new JFrame(msg);
		jf.setSize(300,200);
		jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
//		jf.setTitle
		panel = new JPanel();
		
		yellow = new JButton("노란색");
		yellow.addActionListener(listener);
		panel.add(yellow);
		
		pink = new JButton("핑크색");
		pink.addActionListener(listener);
		panel.add(pink);
		
		jf.add(panel);
		jf.setVisible(true);
	}
	
	class MyListener implements ActionListener
	{
		public void actionPerformed(ActionEvent e)
		{
			if(e.getSource()==yellow)
			{
				panel.setBackground(Color.YELLOW);
			} else if(e.getSource() == pink)
			{
				panel.setBackground(Color.PINK);
			}
		}
	}
}
