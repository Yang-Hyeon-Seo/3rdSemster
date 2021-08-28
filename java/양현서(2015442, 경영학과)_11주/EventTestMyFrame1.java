import javax.swing.*;
import java.awt.event.*;

public class EventTestMyFrame1 extends JFrame implements ActionListener
{
	JButton button;
	JLabel label;
	
	public EventTestMyFrame1(String msg)
	{
		this.setSize(300,200);
		this.setTitle(msg);
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		JPanel panel = new JPanel();
		button = new JButton("Button");
		label = new JLabel("Please, Click the Button");
		
		button.addActionListener(this);
		panel.add(button);
		panel.add(label);
		this.add(panel);
		this.setVisible(true);
	}
	
	public void actionPerformed(ActionEvent e)
	{
		if(e.getSource()==button) {
			label.setText("Clicked the Button");
		}
	}
}
