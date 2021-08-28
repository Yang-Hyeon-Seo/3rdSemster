import java.awt.*;

public class PanelTest 
{
	public PanelTest() 
	{
		Frame f = new Frame("Panel Test");
		
		f.setLayout(null);
		
		Panel p = new Panel();
		p.setSize(100,100);
		p.setBackground(Color.white);
		p.setLocation(50,100);
		
		Label l = new Label("Panel");
		p.add(l);
		
		Button b = new Button("OK");
		p.add(b);
		
		f.add(p);
		f.setSize(300,300);
		f.setVisible(true);
	}
}
