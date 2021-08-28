import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;

public class Calculator implements ActionListener
{
	JFrame f;
	JPanel ptext, pcal;
	TextField text = new TextField(" ", 30);
	Font font;
	JButton [] [] buttons = new JButton[5][4];
	String t = text.getText();
//	char [] [] content = {{'C', '/', 'X', 'D'}, {'7', '8', '9', '-'}, 
//			{'4', '5','6','+'}, {'1','2','3','('}, {'0', '.', '=', ')'}};
	
	public Calculator(String msg)
	{
		f = new JFrame(msg);
		f.setLayout(new BorderLayout());
		
		ptext = new JPanel();
//		text = new TextField(30);
		font = new Font("Serif", Font.PLAIN, 20);
		text.setFont(font);
		ptext.add(text);
		
		pcal = new JPanel();
		
//		GridBagLayout gridbag = new GridBagLayout();
//		GridBagConstraints constraint = new GridBagConstraints();
//		pcal.setLayout(gridbag);
//		
//		constraint.fill = GridBagConstraints.BOTH;
//		constraint.weightx = 1;
//		constraint.weighty = 1;
//		
//		for(int i=0; i<5; i++)
//		{
//			for (int j = 0; j<4;j++)
//			{
//				char con = content[i][j];
////				buttons [i][j] = new JButton(con);
//				buttons[i][j].setText();
//				buttons[i][j].addActionListener(this);
//			}
//		}
		
		pcal.setLayout(new GridLayout(5, 4));
		buttons[0][0] = new JButton("C");
		buttons[0][1] = new JButton("/");
		buttons[0][2] = new JButton("X");
		buttons[0][3] = new JButton("DEL");
		buttons[1][0] = new JButton("7");
		buttons[1][1] = new JButton("8");
		buttons[1][2] = new JButton("9");
		buttons[1][3] = new JButton("-");
		buttons[2][0] = new JButton("4");
		buttons[2][1] = new JButton("5");
		buttons[2][2] = new JButton("6");
		buttons[2][3] = new JButton("+");
		buttons[3][0] = new JButton("1");
		buttons[3][1] = new JButton("2");
		buttons[3][2] = new JButton("3");
		buttons[3][3] = new JButton("(");
		buttons[4][0] = new JButton("0");
		buttons[4][1] = new JButton(".");
		buttons[4][2] = new JButton("=");
		buttons[4][3] = new JButton(")");
		
		for(int i=0; i<5;i++)
		{
			for (int j=0;j<4;j++)
			{
				buttons[i][j].setFont(font);
				buttons[i][j].addActionListener(this);
				pcal.add(buttons[i][j]);
			}
		}
		
		f.add("North", ptext);
		f.add(pcal);
		f.setSize(500,400);
		f.setVisible(true);
		
	}
	
	public void actionPerformed(ActionEvent e)
	{
		for(int i=0; i<5;i++)
		{
			for(int j=0; j<4;j++)
			{
				if(e.getSource() == buttons[i][j] && buttons[i][j].getText() == "C")
				{
					text.setText("");
				} else if(e.getSource() == buttons[i][j] && buttons[i][j].getText() == "DEL")
				{

				}else if(e.getSource() == buttons[i][j])
					{
					
					t = t.join(t, buttons[i][j].getText());
					text.setText(t);
					}
			}
		}
	}
}
