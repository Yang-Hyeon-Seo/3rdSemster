import javax.swing.*;
import java.awt.*;

public class JLabelTest 
{
	JFrame jf;
	JLabel label1, label2;
	ImageIcon logo;
	
	public JLabelTest(String msg)
	{
		jf = new JFrame(msg);
		jf.setTitle("Image Label Test");
		jf.setSize(600,600);
		jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		jf.getContentPane().setBackground(Color.yellow);
		
		label1 = new JLabel("�����ڴ��б�");
		label1.setFont(new Font("����ü", Font.PLAIN, 20));
		logo = new ImageIcon("sym01_l.gif");
		label2 = new JLabel("������", logo, JLabel.CENTER);
		jf.getContentPane().add("North", label1);
		jf.getContentPane().add("Center", label2);
		jf.setVisible(true);
	}
}
