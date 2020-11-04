package library_management;

import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

import com.mysql.jdbc.Connection;
import com.mysql.jdbc.Statement;

public class book_registration {
	
		int isbn;
		String author,status,title,return_date,issue_date;
		java.sql.Connection con=null;
	    public	book_registration(int isbn,String status,String title,String return_date,String issue_date ,String author){
			this.isbn=isbn;
			this.status=status;
			this.title=title;
			this.return_date=return_date;
			this.issue_date=issue_date;
			this.author=author;
		}
	   public book_registration() {
		
	}

	 public void book_delete(int isbn) throws SQLException{
		con=connectionUtil.connect();
		java.sql.Statement stmt=con.createStatement();
		try{
			String query="update user set isbn = 0 ,"+"issue_date='"+"0000-00-00"+"',return_date='"+"0000-00-00"+"' where isbn ="+isbn;
		    stmt.executeUpdate(query);
		    String query2="delete from book where isbn="+isbn;
		    stmt.executeUpdate(query2);
		}catch(Exception e){
			System.out.println(e);
		}
	}
	   
	 public void return_book(int isbn) throws SQLException{
		  con=connectionUtil.connect();
		  java.sql.Statement stmt = con.createStatement();
		  try{
			  String query="update book set status ='"+ "Available"+"',return_date='"+"0000-00-00"+"',issue_date='"+"0000-00-00"+"' where isbn ="+isbn;
			  stmt.executeUpdate(query);
			  String query2="update user set isbn = 0 ,"+"issue_date='"+"0000-00-00"+"',return_date='"+"0000-00-00"+"' where isbn ="+isbn;
			  stmt.executeUpdate(query2);
			  
		  }catch(Exception e){
			  System.out.println(e);
		  }
		  con.close();
	}
	 public void book_search(String title) throws SQLException{
		   con=connectionUtil.connect();
		   java.sql.Statement stmt = con.createStatement();
		   try{
			   //String query="select * from book where title =""+title+""";
			  String query="select * from book where title='"+ title +"'" ;
			  ResultSet rs=stmt.executeQuery(query);
			  while(rs.next()){
				  System.out.println(rs.getInt(1)+" "+rs.getString(2)+" "+rs.getString(3)+" "+rs.getString(4)+" "+rs.getString(5)+" "+rs.getString(6));
			  }
		   }catch(Exception e){
			   System.out.println(e);
		   }
		   con.close();
	   }
	 public void book_register() throws SQLException{
		   
		   con=connectionUtil.connect();
		  java.sql.Statement stmt = con.createStatement();
		  try {
				String query="Insert into book values(?,?,?,?,?,?)";
				PreparedStatement st=con.prepareStatement(query);
				st.setInt(1,isbn);
				st.setString(2, author);
				st.setString(3, status);
				st.setString(4,issue_date);
				st.setString(5,return_date);
				st.setString(6,title);
				st.executeUpdate();
			}catch(final Exception e) {
				e.printStackTrace();
			}
		  con.close();
		
	   }
}
