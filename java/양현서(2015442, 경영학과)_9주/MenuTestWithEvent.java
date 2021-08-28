import java.awt.*;
import javax.swing.*;
import javax.swing.event.*;
import java.awt.event.*;

public class MenuTestWithEvent implements ActionListener
{
	JMenuBar bar;
	JMenu file, style;
	JMenuItem fileNew;
	JCheckBoxMenuItem num;
	JRadioButtonMenuItem dos, unix;
	JFrame jf;
	
	public MenuTestWithEvent(String msg)
	{
		jf = new JFrame(msg);
		makeMenu();
		jf.setSize(400,400);
		jf.setVisible(true);
	}
	
	protected void makeMenu() 
	{
		bar = new JMenuBar();
		file = new JMenu("File");
		file.setMnemonic('F');
		fileNew = new JMenuItem("New");
		fileNew.addActionListener(this);//new �̺�Ʈ
		file.add(fileNew);
		file.addSeparator();
		num = new JCheckBoxMenuItem("Line Number");
		num.addActionListener(this);//num �̺�Ʈ
		style = new JMenu("Style");
		file.add(num);
		file.add(style);
		dos = new JRadioButtonMenuItem("Windows Style", true);
		dos.addActionListener(this);//dos �̺�Ʈ
		unix = new JRadioButtonMenuItem("Linux Style");
		unix.addActionListener(this);//unix�̺�Ʈ
		ButtonGroup bg = new ButtonGroup();
		bg.add(dos);
		bg.add(unix);
		style.add(dos);
		style.add(unix);
		bar.add(file);
		jf.setJMenuBar(bar);
	}
	
	public void actionPerformed(ActionEvent e)
	{
		Object o = e.getSource();
		if(o == fileNew)
			System.out.println("New");
		else if (o==num)
		{
			if(num.isSelected())
				System.out.println("Line Number");
		} else if(o==dos)
		{
			System.out.println("Windows");
		} else if(o==unix)
		{
			System.out.println("Linux");
		}
		
	}
	
}
