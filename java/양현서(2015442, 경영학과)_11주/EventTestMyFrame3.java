import javax.swing.*;
import java.awt.event.*;


public class EventTestMyFrame3 extends JFrame
{
	private JButton button;
	private JLabel label;
	
	public EventTestMyFrame3(String msg)
	{
		this.setSize(300,200);
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		this.setTitle(msg);
		
		JPanel panel = new JPanel();
		button = new JButton("Button");
		label = new JLabel("Please, Click the Button");
		button.addActionListener(new ActionListener() {//여기부터
				
					public void actionPerformed(ActionEvent e)
					{
						if(e.getSource() == button)
						{
							label.setText("Clicked the button");
						}
					}
		} //여기까지 이너클래스
				); //여기까지 하나의 문장
		panel.add(button);
		panel.add(label);
		this.add(panel);
		this.setVisible(true);
	}

}
