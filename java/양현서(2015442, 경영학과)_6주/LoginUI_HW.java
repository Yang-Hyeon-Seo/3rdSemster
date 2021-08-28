import java.awt.*;

public class LoginUI_HW 
{
	public LoginUI_HW(String msg)
	{
		Frame f = new Frame(msg);
		f.setLayout(new BorderLayout());
		
		Panel p1 = new Panel();
		Panel p2 = new Panel();
		Panel p3 = new Panel();
//		Frame f1 = new Frame();
		
		Label llg, lpw, press;
		TextField login, passwd;
		Button ok;
		
		llg = new Label("Login");
		lpw = new Label("Password");
		
		login = new TextField(50);
		passwd = new TextField(50);
		passwd.setEchoChar('*');
		
		press = new Label("Press");
		ok = new Button("OK");
		
		
		
		p1.add(llg);
		p1.add(login);
//		p1.add(lpw);
//		p1.add(passwd);
//		f1.add(p1);
		
		p2.add(lpw);
		p2.add(passwd);
		
		//p3.add(llg);
		//p3.add(login);
		//p3.add(enter);
		//p3.add(lpw);
		//p3.add(passwd);
		
		//p1.setSize(200, 100);
		//p2.setSize(200, 100);
		//p3.setSize(500, 400);
		//p3.add(p1);
		//p3.add(p2);
//		p3.
//		p3.setSize(500, 400);
//		p3.add(p1);
//		p3.add(p2);
		
		p3.add(press);
		p3.add(ok);
		
		f.add(p1, BorderLayout.NORTH);
//		f.add(f1);
		f.add(p2, BorderLayout.CENTER);
		f.add(p3, BorderLayout.SOUTH);
		
		f.setSize(500, 400);
		f.setVisible(true);
	}
}