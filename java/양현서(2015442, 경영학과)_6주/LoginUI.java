import java.awt.*;

public class LoginUI 
{
	public LoginUI(String msg)
	{
		Frame f = new Frame(msg);
		f.setLayout(new FlowLayout());
		
		Label llg, lpw, lnote;
		TextField login, passwd;
		TextArea note;
		
		llg = new Label("Login");
		lpw = new Label("Password");
		lnote = new Label("주석");
		login = new TextField(50);
		passwd = new TextField(50);
		passwd.setEchoChar('*');
		note = new TextArea("주석을 다세요", 20, 50);
		
		f.add(llg);
		f.add(login);
		f.add(lpw);
		f.add(passwd);
		f.add(lnote);
		f.add(note);
		
		f.setSize(500, 400);
		f.setVisible(true);
	}
}
