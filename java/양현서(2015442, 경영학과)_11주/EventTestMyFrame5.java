import javax.swing.*;

public class EventTestMyFrame5 extends JFrame
{
	private JButton button;
	private JLabel label;
	
	public EventTestMyFrame5(String msg)
	{
		this.setSize(300,200);
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		this.setTitle(msg);
		
		JPanel panel = new JPanel();
		button = new JButton("Button");
		label = new JLabel("Please, Click the Button");
		
		button.addActionListener(e -> {//Lambda Expression : no-name inner class를 간단히 표현한 방법
			label.setText("Click the Button");
		});
		
		panel.add(button);
		panel.add(label);
		
		this.add(panel);
		this.setVisible(true);
		
	}
}
