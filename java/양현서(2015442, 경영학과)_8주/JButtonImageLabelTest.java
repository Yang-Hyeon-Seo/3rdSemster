import javax.swing.*;
import javax.swing.event.*;
import java.awt.*;
import java.awt.event.*;

public class JButtonImageLabelTest implements ActionListener
{
	JPanel panel;
	JLabel label;
	JButton button;
	
	public JButtonImageLabelTest(String msg)
	{
		JFrame jf = new JFrame(msg);
//		jf.setTitle("JButton Event Test");
//		jf.setSize(300,250);
		
		panel = new JPanel();
		label = new JLabel("Click JButton to see Image");
		
		button = new JButton("See Image!!");
		ImageIcon icon = new ImageIcon();
		button.setIcon(icon);
		button.addActionListener(this);
		panel.add(label);
		panel.add(button);

		
		jf.add(panel);
		jf.setSize(600,600);
		jf.setVisible(true);
	}
	
	public void actionPerformed(ActionEvent e)
	{
		ImageIcon cat = new ImageIcon("cat.jpg");
		label.setIcon(cat);
		label.setText("Cat!!");
		button.setText("GoodLuck");
	}
}
