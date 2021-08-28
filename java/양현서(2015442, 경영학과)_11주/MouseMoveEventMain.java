import javax.swing.JFrame;

public class MouseMoveEventMain {
	JFrame f;
	
	public MouseMoveEventMain(String msg)
	{
		f = new JFrame(msg);
		f.add(new MouseMoveEvent());
		f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		f.setSize(900, 1000);
		f.setVisible(true);
	}
	
	public static void main(String argsp[])
	{
		MouseMoveEventMain m = new MouseMoveEventMain("Mouse Move Event ¾çÇö¼­");
	}
}
