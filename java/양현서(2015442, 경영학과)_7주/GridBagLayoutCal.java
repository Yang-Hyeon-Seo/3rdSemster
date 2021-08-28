import java.awt.*;

public class GridBagLayoutCal 
{
	Frame f;
	Panel ptext, pcal;
	TextField text;
	Font font;
	Button b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12,
	b13, b14, b15, b16, b17, b18, b19, b20, b21, b22, b23;
	
	
	public GridBagLayoutCal()
	{
		f = new Frame("Calculator with GridBagLayout");
		f.setLayout(new BorderLayout());
		
		ptext = new Panel();
		text = new TextField(30);
		font = new Font("Serif", Font.PLAIN, 20);
		text.setFont(font);
		ptext.add(text);
		
		pcal = new Panel();
		
		GridBagLayout gridbag = new GridBagLayout();
		GridBagConstraints constraint = new GridBagConstraints();
		pcal.setLayout(gridbag);
		
		constraint.fill = GridBagConstraints.BOTH;
		constraint.weightx = 1;
		constraint.weighty = 1;
		
//		constraint.gridheight = 6;
//		constraint.gridwidth = 4;
		
		b1 = new Button("C");
		gridbag.setConstraints(b1, constraint);
		pcal.add(b1);
		
		b2 = new Button("CE");
		gridbag.setConstraints(b2, constraint);
		pcal.add(b2);
		
		b3 = new Button("1/x");
		gridbag.setConstraints(b3, constraint);
		pcal.add(b3);
		
		constraint.gridwidth = GridBagConstraints.REMAINDER;
		b4 = new Button("DEL");
		gridbag.setConstraints(b4, constraint);
		pcal.add(b4);
		
		constraint.gridwidth = 1;
		b5 = new Button("%");
		gridbag.setConstraints(b5, constraint);
		pcal.add(b5);
		
		b6 = new Button("/");
		gridbag.setConstraints(b6, constraint);
		pcal.add(b6);
		
		b7 = new Button("X");
		gridbag.setConstraints(b7, constraint);
		pcal.add(b7);
		
		constraint.gridwidth = GridBagConstraints.REMAINDER;
		b8 = new Button("-");
		gridbag.setConstraints(b8, constraint);
		pcal.add(b8);
		
		constraint.gridwidth = 1;
		b9 = new Button("7");
		gridbag.setConstraints(b9, constraint);
		pcal.add(b9);
		
		b10 = new Button("8");
		gridbag.setConstraints(b10, constraint);
		pcal.add(b10);
		
		b11 = new Button("9");
		gridbag.setConstraints(b11, constraint);
		pcal.add(b11);
		
		constraint.gridwidth = GridBagConstraints.REMAINDER;
		b12 = new Button("+");
		gridbag.setConstraints(b12, constraint);
		pcal.add(b12);
		
		constraint.gridwidth = 1;
		b13 = new Button("4");
		gridbag.setConstraints(b13, constraint);
		pcal.add(b13);
		
		b14 = new Button("5");
		gridbag.setConstraints(b14, constraint);
		pcal.add(b14);
		
		b15 = new Button("6");
		gridbag.setConstraints(b15, constraint);
		pcal.add(b15);
		
		constraint.gridwidth = GridBagConstraints.REMAINDER;
		b16 = new Button("()");
		gridbag.setConstraints(b16, constraint);
		pcal.add(b16);
		
		constraint.gridwidth = 1;
		b17 = new Button("1");
		gridbag.setConstraints(b17, constraint);
		pcal.add(b17);
		
		b18 = new Button("2");
		gridbag.setConstraints(b18, constraint);
		pcal.add(b18);
		
		b19 = new Button("3");
		gridbag.setConstraints(b19, constraint);
		pcal.add(b19);
		
		constraint.gridwidth = GridBagConstraints.REMAINDER;
		b20 = new Button("+/-");
		gridbag.setConstraints(b20, constraint);
		pcal.add(b20);
		
		constraint.gridwidth = 1;
		b21 = new Button("0");
		gridbag.setConstraints(b21, constraint);
		pcal.add(b21);
		
		
		b22 = new Button(".");
		gridbag.setConstraints(b22, constraint);
		pcal.add(b22);
		
		constraint.gridwidth = GridBagConstraints.REMAINDER;
		constraint.gridheight = GridBagConstraints.REMAINDER;
		constraint.gridwidth = 2;
		b23 = new Button("=");
		gridbag.setConstraints(b23, constraint);
		pcal.add(b23);
		
		f.add("North", ptext);
		f.add(pcal);
		f.setSize(400, 600);
		f.setVisible(true);
	}
}
