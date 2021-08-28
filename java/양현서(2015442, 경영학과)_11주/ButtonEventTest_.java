import java.awt.*;
import javax.swing.*;
import java.awt.event.*;

public class ButtonEventTest_ extends JFrame implements ActionListener
{
	JPanel panel;
	JButton yellow, pink;
	
	public ButtonEventTest_(String msg)
	{
		this.setSize(400,300);
		this.setDefaultCloseOperation(EXIT_ON_CLOSE);
		this.setTitle(msg);
		
		
		panel = new JPanel();
		yellow = new JButton("노란색");
		yellow.addActionListener(this);
		pink = new JButton("핑크색");
		pink.addActionListener(this);
		panel.add(yellow);
		panel.add(pink);
		this.add(panel);
		
		this.setVisible(true);
				
	}
	
	public void actionPerformed(ActionEvent e)
	{
		if (e.getSource() == yellow)
		{
			panel.setBackground(Color.yellow);
		} else if(e.getSource()==pink)
		{
			panel.setBackground(Color.pink);
		}
	}
}
