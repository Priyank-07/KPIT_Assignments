package library_management;
import java.io.*;
import java.sql.SQLException;
import java.util.*;
public class main {

	public static void main(String[] args) throws SQLException {
		//book_registration obj = new book_registration(11234,"Available","Ikigai","2020-10-28","2020-11-12","japan");
		//obj.book_register();
	    book_registration obj2=new book_registration();
		//obj2.book_search("Ikigai");
		//user_registration ubj=new user_registration(11234,1101,"Rahul","Active","2020-11-12","2020-10-28");
		//ubj.user_register();
		//obj2.return_book(11234);
		//obj2.book_delete(11270);
		user_registration ubj2=new user_registration();
		//boolean test= ubj2.user_status_active(1270);
//		if(ubj2.get_status(1270)){
//			ubj2.issue_book(11234,1270);
//		}else{
//			System.out.println("Please pay the bill!!!!");
//		}
		System.out.println(" <-Welcome to Library->");
		System.out.println("Press 1 for User Registration->");
		System.out.println("Press 2 for Book Registration->");
		System.out.println("Press 3 to issue a book->");
		System.out.println("Press 4 to return a book->");
		System.out.println("Press 5 to change user status->");
		System.out.println("Press 6 to get BOOK information->");
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		switch (n){
			case 1:
				int id;
				String status,return_date,issue_date,name;
				sc.nextLine();
				System.out.println("Enter name:");
				name=sc.nextLine();
				System.out.println("Are u an active:");
				status=sc.nextLine();
				System.out.println("Enter ID:");
				id=sc.nextInt();
				user_registration ubj=new user_registration(0,id,status,name,"0000-00-00","0000-00-00");
				ubj.user_register();
				break;
			case 2:
				int isbn;
				String author,status2,title;
				sc.nextLine();
				System.out.println("Enter Author name");
				author=sc.nextLine();
				System.out.println("Enter Availability of book");
				status=sc.nextLine();
				System.out.println("Enter the title");
				title=sc.nextLine();
				System.out.println("Enter ISBN");
				isbn=sc.nextInt();
				book_registration obj = new book_registration(isbn,status,title,"0000-00-00","0000-00-00",author);
				obj.book_register();
				break;
			case 3:
				int isbn3,id3;
				System.out.println("Enter ISBN no.");
				isbn3=sc.nextInt();
				System.out.println("Enter you user ID");
				id3=sc.nextInt();
				ubj2.issue_book(isbn3, id3);
				
				break;
			case 4:
				System.out.println("Enter ISBN number of book");
				int isbn4=sc.nextInt();
				obj2.return_book(isbn4);
				
				break;
			case 5:
				System.out.println("Enter your id to change status");
				int id4=sc.nextInt();
				if(ubj2.get_status(id4)){
					ubj2.user_status_inactive(id4);
				}else{
					ubj2.user_status_active(id4);
				}
				break;
			case 6:
				System.out.println("Enter title of book to get full book details");
				String title9=sc.nextLine();
				obj2.book_search(title9);
				break;
			default:
				System.out.println("Check a valid choice number");
				
		}
		
		
	}
	

}
