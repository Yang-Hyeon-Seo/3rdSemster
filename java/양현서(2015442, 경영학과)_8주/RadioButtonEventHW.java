import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;

public class RadioButtonEventHW extends JFrame implements ActionListener
{
	JRadioButton small, medium, large;
	JLabel text, label;
	JPanel topPanel, sizePanel, resultPanel;
	
	public RadioButtonEventHW()
	{
		setTitle("Radio Button Test: ¾çÇö¼­");
		setSize(300,150);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		topPanel = new JPanel();
		label = new JLabel("What size of coffee do you like to order?");
		topPanel.add(label);
		add(topPanel, BorderLayout.NORTH);
		
		sizePanel = new JPanel();
		small = new JRadioButton("Small Size");
		medium = new JRadioButton("Medium Size");
		large = new JRadioButton("Large Size");
		ButtonGroup size = new ButtonGroup();
		
		size.add(small);
		size.add(medium);
		size.add(large);
		
		small.addActionListener(this);
		medium.addActionListener(this);
		large.addActionListener(this);
		
		sizePanel.add(small);
		sizePanel.add(medium);
		sizePanel.add(large);
		
		add(sizePanel, BorderLayout.CENTER);
		
		resultPanel = new JPanel();
		text = new JLabel("Did not selected the size.");
		text.setForeground(Color.red);
		
		resultPanel.add(text);
		add(resultPanel, BorderLayout.SOUTH);
		setVisible(true);
		
	}
	
	public void actionPerformed(ActionEvent e)
	{
		if (e.getSource() == small)
		{
			text.setText("Ordered Small Size.");
		}
		if (e.getSource() == medium)
		{
			text.setText("Ordered Medium Size.");
		}
		if (e.getSource() == large)
		{
			text.setText("Ordered Large Size.");
		}
	}
}
