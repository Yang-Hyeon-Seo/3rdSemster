import javax.swing.*;
import javax.swing.event.*;
import java.awt.*;
import java.awt.event.*;

public class HW7_1 implements ActionListener 
{
	JPanel panel;
	JLabel label;
	JButton button;
	
	public HW7_1(String msg)
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
//		if (button.getText() == "Cat!!")
//		{
//			button.setText("See Image!!");
//			label.setText("Click JButton to see Image");
//			label.setIcon(null);
//		}else
//		{
//			ImageIcon cat = new ImageIcon("cat.jpg");
//			label.setIcon(cat);
//			label.setText("Cat!!");
//			button.setText("GoodLuck");
		
		if (button.getText() == "See Image!!")
		{
			ImageIcon cat = new ImageIcon("cat.jpg");
			label.setIcon(cat);
			label.setText("Cat!!");
			button.setText("GoodLuck");
		}else
		{
			button.setText("See Image!!");
			label.setText("Click JButton to see Image");
			label.setIcon(null);
		}
	}
}
