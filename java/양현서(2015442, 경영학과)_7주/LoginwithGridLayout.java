import java.awt.*;

public class LoginwithGridLayout extends Frame
{
	Panel p1, p2, p3;
	Label llg, lpw, lnote;
	TextField login, passwd;
	Button ok;
	
	public LoginwithGridLayout(String msg)
	{
		super(msg);
		
		setLayout(new GridLayout(3,0));
		
		p1 = new Panel();
		p2 = new Panel();
		p3 = new Panel();
		
		llg = new Label("Login");
		lpw = new Label("Password");
		lnote = new Label("Press");
		login = new TextField(50);
		passwd = new TextField(50);
		ok = new Button("OK");
		
		p1.add(llg);
		p1.add(login);
		
		p2.add(lpw);
		p2.add(passwd);
		
		p3.add(lnote);
		p3.add(ok);
		
		add(p1);
		add(p2);
		add(p3);
		//Grid순서대로 들어간다
		//Grid > 각 컴포넌트의 간격이 동일하다
		
		setSize(500,400);
		setVisible(true);
		
	}
}
