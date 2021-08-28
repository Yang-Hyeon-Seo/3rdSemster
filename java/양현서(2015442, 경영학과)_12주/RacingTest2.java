import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;

public class RacingTest2 extends JFrame
{
	JPanel contentPane;
	JPanel menuPanel;
	JPanel centerPanel;
	JButton startBt, stopBt, suspendBt, resumeBt;
	Thread[] ths;
	
	Car2[] cars = new Car2[]
			{
				new Car2(new ImageIcon("image/pikmin.png"), 0, 10),
				new Car2(new ImageIcon("image/pikmin_blue.png"), 0, 10),
				new Car2(new ImageIcon("image/pikmin_rock.png"), 0, 10),
				new Car2(new ImageIcon("image/pikmin_yellow.png"), 0, 10),
				new Car2(new ImageIcon("image/pikmin.png"), 0, 10)
			};
	public RacingTest2()
	{
		super("Runnable Test 양현서");
		ths = new Thread[cars.length];
		
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100,10,1800,800);
		contentPane = new JPanel();
		contentPane.setLayout(new BorderLayout(0,0));
		setContentPane(contentPane);
		
		menuPanel = new JPanel();
		menuPanel.setLayout(new GridLayout(1,4,5,5));
		startBt = new JButton("Play");
		stopBt = new JButton("Stop");
		suspendBt = new JButton("Suspend");
		resumeBt = new JButton("Resume");
		
		menuPanel.add(startBt);
		menuPanel.add(stopBt);
		menuPanel.add(suspendBt);
		menuPanel.add(resumeBt);
		contentPane.add("North", menuPanel);
		
		centerPanel = new JPanel();
		centerPanel.setLayout(new GridLayout(cars.length, 1, 5, 5));
		contentPane.add("Center", centerPanel);
		
		startBt.addActionListener(new ActionListener()
				{
					public void actionPerformed(ActionEvent arg0)
					{
						for(int i = 0; i<cars.length; i++)
						{
							centerPanel.add(cars[i].lane);
						}
						centerPanel.updateUI();
						Car2.rank1 = 0;
						game_play();
					}
				});
		
		stopBt.addActionListener(new ActionListener()
		{
			public void actionPerformed(ActionEvent e)
			{
				for(Thread t: ths)
				{
					t.stop();
				}
			}
		});
		
		suspendBt.addActionListener(new ActionListener()
		{
			public void actionPerformed(ActionEvent e)
			{
				for(Thread t: ths)
				{
					t.suspend();
				}
			}
		});
		
		resumeBt.addActionListener(new ActionListener()
		{
			public void actionPerformed(ActionEvent e)
			{
				for(int i = 0; i<cars.length; i++) // Thread t: ths와 동일한 코드
				{
					ths[i].resume();
				}
			}
		});
	}
	
	public void game_play()
	{
		makeThread();
		for(int i=0; i<cars.length; i++)
		{
			ths[i].start();
		}
	}
	
	public void makeThread()
	{
		for(int i=0; i<cars.length;i++)
		{
			ths[i] = new Thread(cars[i]);
		}
	}
	
}
