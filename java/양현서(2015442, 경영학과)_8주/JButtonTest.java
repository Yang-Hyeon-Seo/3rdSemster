import javax.swing.*;
import java.awt.*;

public class JButtonTest 
{
	JButton plus, minus, mux, divide;
	
		public JButtonTest(String msg)
		{
			JFrame jf = new JFrame(msg);
			
			jf.getContentPane().setLayout(new GridLayout(2,2));
			
			ImageIcon iplus = new ImageIcon("plus.jfif");
			ImageIcon iminus = new ImageIcon("minus.jfif");
			ImageIcon imux = new ImageIcon("mux.jfif");
			ImageIcon idivide = new ImageIcon("divide.jfif");
			
			plus = new JButton(iplus);
			minus = new JButton(iminus);
			mux = new JButton(imux);
			divide = new JButton(idivide);
			
			jf.getContentPane().add(plus);
			jf.getContentPane().add(minus);
			jf.getContentPane().add(mux);
			jf.getContentPane().add(divide);
			
			jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
			jf.setSize(400,400);
			jf.setVisible(true);
		}
}
