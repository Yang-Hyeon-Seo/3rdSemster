import javax.swing.JFrame;

public class ButtonEventType3Main {
	public static void main (String args[])
	{
		JFrame f = new JFrame("Button Event Type3 ������");
		f.setDefaultCloseOperation(f.EXIT_ON_CLOSE);
		f.add(new ButtonEventType3());
		f.setSize(300,300);
		f.setVisible(true);
	}
}
