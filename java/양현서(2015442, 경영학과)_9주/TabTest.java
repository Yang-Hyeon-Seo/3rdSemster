import java.awt.*;
import javax.swing.*;

public class TabTest 
{
	JFrame jf;
	JTabbedPane tabpane;
	JPanel one, two, three, four, five;
	
	//tab1
	ImageIcon logo;
	JLabel label;
	
	//tab2
	ImageIcon cat;
	JLabel label2;
	
	//tab3
	JPanel top, center, bottom, p1, p2, p3, p4;
	JLabel llg, lpw, lnote;
	JTextField login;
	JPasswordField passwd;
	JTextArea note;
	JButton ok;
	
	//tab4
	JCheckBox[] buttons = new JCheckBox[3];
	String[] fruits = {"apple", "grape", "pear"};
	JLabel[] pictureLabel = new JLabel[3];
	ImageIcon[] icon = new ImageIcon[3];
	//tab5
	JRadioButton small, medium, large;
	JLabel text, label3;
	JPanel topPanel, sizePanel, resultPanel;
	
	public TabTest(String msg)
	{
		jf = new JFrame(msg);
		tabpane = new JTabbedPane();
		
		one = new JPanel();
		two = new JPanel();
		three = new JPanel();
		four = new JPanel();
		five = new JPanel();
		
		one.setBackground(Color.red);
		two.setBackground(Color.blue);
		four.setBackground(Color.yellow);
		five.setBackground(Color.green);

		
		tabpane.addTab("SMU", one);
		tabpane.addTab("CAT", two);
		tabpane.addTab("Login", three);
		tabpane.addTab("fruit", four);
		tabpane.addTab("order", five);

		
		//Tab1에 이미지 로고 붙이기
		logo = new ImageIcon("Image/" + "sym01_l.gif");
		label = new JLabel("SMU Lobo", logo, JLabel.RIGHT);
		label.setFont(new Font("맑은고딕", Font.BOLD, 30));
		one.add(label);
		
		//Tab2에 사진 붙이기
		cat = new ImageIcon("Image/" + "cat.jpg");
		label2 = new JLabel("CAT", cat, JLabel.RIGHT);
		two.add(label2);
		
		//Tab3에 로그인
		three.setLayout(new BorderLayout());
		
		top = new JPanel();
		top.setLayout(new GridLayout(2,0));
		center = new JPanel();
		bottom = new JPanel();
		p1 = new JPanel();
		p1.setLayout(new GridLayout(0,2));
		p2 = new JPanel();
		p2.setLayout(new GridLayout(0,2));
		p3 = new JPanel();
		p4 = new JPanel();
		p4.setLayout(new GridLayout(0,2));
		
		llg = new JLabel("Login");
		lpw = new JLabel("Password");
		lnote = new JLabel("Press");
		login = new JTextField(30);
		passwd = new JPasswordField(30);
		note = new JTextArea("Enter for Your Opinion", 10, 15);
		ok = new JButton("OK");
		
		p1.add(llg);
		p1.add(login);
		p2.add(lpw);
		p2.add(passwd);
		p3.add(note);
		p4.add(lnote);
		p4.add(ok);
		
		top.add(p1);
		top.add(p2);
		center.add(p3);
		bottom.add(p4);
		
		three.add(top, "North");
		three.add(center, "Center");
		three.add(bottom, "South");
		
		//tab4
		four.setLayout(new GridLayout(0,4));
		
		for(int i = 0; i<3; i++)
		{
			icon[i] = new ImageIcon("Image/"+fruits[i]+".jpg");
			pictureLabel[i] = new JLabel("Image/"+fruits[i] + ".jpg" , icon[i], JLabel.RIGHT);
			
		}
		
		
		four.add(pictureLabel[0]);
//		four.add(icon[0]);
		four.add(pictureLabel[1]);
//		four.add(icon[1]);
		four.add(pictureLabel[2]);
//		four.add(icon[2]);
		
		//tab5
		
		topPanel = new JPanel();
		label = new JLabel("What size of coffee do you like to order?");
		topPanel.add(label);
		five.add(topPanel, BorderLayout.NORTH);
		
		sizePanel = new JPanel();
		small = new JRadioButton("Small Size");
		medium = new JRadioButton("Medium Size");
		large = new JRadioButton("Large Size");
		ButtonGroup size = new ButtonGroup();
		
		size.add(small);
		size.add(medium);
		size.add(large);
		
		sizePanel.add(small);
		sizePanel.add(medium);
		sizePanel.add(large);
		
		five.add(sizePanel, BorderLayout.CENTER);
		
		resultPanel = new JPanel();
		text = new JLabel("Did not selected the size.");
		text.setForeground(Color.red);
		
		resultPanel.add(text);
		five.add(resultPanel, BorderLayout.SOUTH);

		
		
		jf.getContentPane().add(tabpane, BorderLayout.CENTER);
		
		jf.setSize(300,400);
		jf.setVisible(true);
		
		
	}
}
