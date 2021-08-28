import java.awt.*;
import java.awt.event.*;

public class CardTest 
{
	CardLayout card;
	Frame f;
	Panel p1, p2, p3, p4, p5;
	Label l1, l2, l3, l4, l5;
	
	public CardTest()
	{
		
		f = new Frame("SimpleCard");
		
		card = new CardLayout();
		f.setLayout(card);
		
		p1 = new Panel();
		p2 = new Panel();
		p3 = new Panel();
		p4 = new Panel();
		p5 = new Panel();
		
		l1 = new Label("First Panel");
		p1.setBackground(Color.yellow);
		
		l2 = new Label("Second Panel");
		p2.setBackground(Color.green);
		
		l3 = new Label("Third Panel");
		p3.setBackground(Color.magenta);
		
		l4 = new Label("Fourth Panel");
		p4.setBackground(Color.white);
		
		l5 = new Label("Fifth Panel");
		p5.setBackground(Color.cyan);
		
		MouseHandler handler = new MouseHandler();//이너클래스
		p1.add(l1);
		p1.addMouseListener(handler);
		p2.add(l2);
		p2.addMouseListener(handler);
		p3.add(l3);
		p3.addMouseListener(handler);
		p4.add(l4);
		p4.addMouseListener(handler);
		p5.add(l5);
		p5.addMouseListener(handler);
		
		f.add("First", p1);
		f.add("Second", p2);
		f.add("Third", p3);
		f.add("Fourth", p4);
		f.add("Fifth", p5);
		
		card.show(f,  "First");
		f.setSize(300,200);
		f.setVisible(true);
	}
	
	public class MouseHandler extends MouseAdapter
	{
		public void mouseClicked(MouseEvent e)
		{
			card.next(f);
		}
	}
}
