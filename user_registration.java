package library_management;

import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

public class user_registration {
	int isbn,id;
	String status,return_date,issue_date,name;
	java.sql.Connection con=null;
	   public	user_registration(int isbn,int id,String status,String name,String return_date,String issue_date ){
				this.isbn=isbn;
				this.status=status;
				this.name=name;
				this.return_date=return_date;
				this.issue_date=issue_date;
				this.id=id;
			}
	   
	   
public user_registration() {
		
	}


public void issue_book(int isbn,int id) throws SQLException{
	con=connectionUtil.connect();
	java.sql.Statement stmt = con.createStatement();
	
	try{
		
		String query="select status from book where isbn="+isbn;
		ResultSet temp=stmt.executeQuery(query);
		temp.next();
		if(temp.getString(1).equals("NA")){
			System.out.println("Book is already issued to someone");
		}
		else{
		String query2="update user set isbn="+isbn+",issue_date='"+java.time.LocalDate.now()+"',return_date='"+java.time.LocalDate.now().plusDays(14)+"' where id= "+id;
		stmt.executeUpdate(query2);
		String query3="update book set isbn="+isbn+",status='"+"NA"+"',issue_date='"+java.time.LocalDate.now()+"',return_date='"+java.time.LocalDate.now().plusDays(14)+"' where isbn= "+isbn;
		stmt.executeUpdate(query3);
		}
		
		
			
	}catch(Exception e){
		System.out.println(e);
	}
	con.close();
	
}


public boolean get_status(int id) throws SQLException{
	 con=connectionUtil.connect();
	 java.sql.Statement stmt = con.createStatement();
	try{
	
	  String query="select status from user where id="+id;
	  ResultSet temp=stmt.executeQuery(query);
	  temp.next();
	  if(temp.getString(1).equals("Active")){
		 return true;
	  }  
	  
	}catch(Exception e){
		System.out.println(e);
	}
	con.close();
	return false;
}
public void user_status_active(int id) throws SQLException{
	 con=connectionUtil.connect();
	  java.sql.Statement stmt = con.createStatement();
	  try{
	  String query="select status from user where id="+id;
	  ResultSet temp=stmt.executeQuery(query);
	  temp.next();
	  if(temp.getString(1).equals("Active")){
		  System.out.println("User is already active");
		  
	  }else{
	  String query2="update user set status='Active' where id="+id;
	  stmt.executeUpdate(query2);
	  }}catch(Exception e){
		  System.out.println(e);
	  }
	  con.close();
	  
	  
	  
}
public void user_status_inactive(int id ) throws SQLException{
	 con=connectionUtil.connect();
	 java.sql.Statement stmt = con.createStatement();
	 try{
		 String query="select status from user where id="+id;
		  ResultSet temp=stmt.executeQuery(query);
		  temp.next();
		  if(temp.getString(1).equals("inactive")){
			  System.out.println("User is already inactive");
		  }else{
		  String query2="update user set status='inactive' where id="+id;
		  stmt.executeUpdate(query2);
		  }
		 
	 }catch(Exception e){
		 System.out.println(e);
	 }
	 con.close();
	
}
 public void user_register() throws SQLException{
		   
		   con=connectionUtil.connect();
		 
		  java.sql.Statement stmt = con.createStatement();

		  try {	
				String query="Insert into user values(?,?,?,?,?,?)";
				PreparedStatement st=con.prepareStatement(query);
				st.setInt(1,id);
				st.setString(2, name);
				st.setInt(3, isbn);
				st.setString(4,status);
				st.setString(5,issue_date);
				st.setString(6,return_date);
				st.executeUpdate();
			}catch(final Exception e) {
				e.printStackTrace();
			}
		  con.close();
		
	   }
	
}
