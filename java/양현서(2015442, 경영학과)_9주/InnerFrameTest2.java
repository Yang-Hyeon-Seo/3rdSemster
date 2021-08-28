import java.awt.*;
import javax.swing.*;

public class InnerFrameTest2 {
	JDesktopPane desktop;
	JInternalFrame inframe1, inframe2;
	JButton ok, icon;
	JFrame jf;
	JPanel jp;
	ImageIcon logo;
	
	
	public InnerFrameTest2(String msg)
	{
		jf = new JFrame(msg);
		desktop = new JDesktopPane();
		inframe1 = new JInternalFrame("Inner Frame 1", true, true, false, false);
		
		ok = new JButton("OK");
		inframe1.getContentPane().add(ok, BorderLayout.SOUTH);
		
		inframe1.setSize(200,200);
		inframe1.setVisible(true);
		
		inframe2 = new JInternalFrame("Inner Frame2", true, true, false, false);
		
		jp = new JPanel();
		logo = new ImageIcon("Image/" + "sm_logo.gif");
		icon = new JButton(logo);
		jp.add(icon);
		inframe2.getContentPane().add(jp, BorderLayout.SOUTH);
		inframe2.setSize(400,300);
		inframe2.setVisible(true);
		
		desktop.add(inframe1);
		desktop.add(inframe2);
		jf.getContentPane().add(desktop, BorderLayout.CENTER);
		jf.setDefaultCloseOperation(jf.EXIT_ON_CLOSE);
		
		jf.setSize(600,400);
		jf.setVisible(true);
		
		
	}
}
