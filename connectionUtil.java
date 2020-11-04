package library_management;
import java.sql.*;
public class connectionUtil {

	static Connection con;
	Statement stmt;
	public static Connection connect() {
		
		try{
			Class.forName("com.mysql.jdbc.Driver");
		    con=DriverManager.getConnection("jdbc:mysql://localhost:3306/LMS?useSSL=false","root","root");

		}catch(Exception e){
			System.out.println(e);
		}
		return con;
	}
	public void closeConnect(){
		try{
			
			con.close();
		}catch(Exception e){
			System.out.println(e);
		}
	}

}
