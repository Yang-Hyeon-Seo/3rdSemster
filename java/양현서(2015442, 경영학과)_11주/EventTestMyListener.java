import java.awt.*;
import javax.swing.*;
import java.awt.event.*;

public class EventTestMyListener implements ActionListener
{
	JLabel label;
	
	EventTestMyListener(JLabel l)//�Ű����� ���� ����
	{
		label = l;
	}
	public void actionPerformed(ActionEvent e)//�� �ڵ带 �ٸ� Ŭ�������� ���� ���� �� ����
	{
		JButton button = (JButton) e.getSource();
		label.setText("Clicked the Button");
	}
}
