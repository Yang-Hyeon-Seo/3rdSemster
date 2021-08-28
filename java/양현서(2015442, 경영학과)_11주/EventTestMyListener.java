import java.awt.*;
import javax.swing.*;
import java.awt.event.*;

public class EventTestMyListener implements ActionListener
{
	JLabel label;
	
	EventTestMyListener(JLabel l)//매개변수 선언에 주의
	{
		label = l;
	}
	public void actionPerformed(ActionEvent e)//이 코드를 다른 클래스에서 쓰고 싶을 때 좋다
	{
		JButton button = (JButton) e.getSource();
		label.setText("Clicked the Button");
	}
}
