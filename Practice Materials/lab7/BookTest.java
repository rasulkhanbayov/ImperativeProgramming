import org.junit.Test;
import org.junit.Before;
import org.junit.After;

import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertNotEquals;
import static org.junit.Assert.assertTrue;
import static org.junit.Assert.assertFalse;
import static org.junit.Assert.fail;

public class BookTest{

    @Before
    public void setUp() {
        Book.resetId();
    }
    @After
    public void tearDown() {
        Book.resetId();
    }

    @Test
    public void Book_setsParameters() {
        Book b1 = Book.make("abc", "def","SCIFI","10000");
        Book b2 = Book.make("abc", "def","SCIFI","10000");

        assertEquals(b1.getReservePrice(), 10000);
        assertEquals(b2.getReservePrice(), 10000);

        assertEquals(b1.getId(), 0);
        assertEquals(b2.getId(), 1);
    }

    @Test
    public void make_parsesTypes() {
        // covers int check fail
        assertEquals(Book.make("abc", "def", "SCIFI","tenthousand"), null); 

        // covers enum check fail
        assertEquals(Book.make("abc", "def","AVANTGARDE","10000"), null); 

        // covers int and enum check success
        assertNotEquals(Book.make("abc", "def", "SCIFI","10000"), null); 
    }

    @Test
    public void make_checksValues() {

        // covers title string null check fail
        assertEquals(Book.make("abc", null,"SCIFI","10000"), null); 

        // covers title string length check fail
        assertEquals(Book.make("abc", "d","SCIFI","10000"), null); 

        // covers reserve price positivity check fail
        assertEquals(Book.make("abc", "def","SCIFI","0"), null); 
        assertEquals(Book.make("abc", "def","SCIFI","-1"), null); 

        // covers title string and price check success
        assertNotEquals(Book.make("abc", "def","SCIFI","10000"), null); 
    }

    @Test
    public void make_checksTitleContents() {
        // covers letter-digit-whitespace check fail
        assertEquals(Book.make("abc", "$$$","SCIFI","10000"), null); 

        // covers letter check success
        assertNotEquals(Book.make("abc", "def","SCIFI","10000"), null); 

        // covers digit check success
        assertNotEquals(Book.make("abc", "111","SCIFI","10000"), null); 

        // covers whitespace check success
        assertNotEquals(Book.make("abc", "     ","SCIFI","10000"), null); 
    }

    @Test
    public void compare_isSameGenre(){
        Book b1 = Book.make("abc", "def1","SCIFI","10000");
        Book b2 = Book.make("abc", "def2","EDUCATIONAL","10000");
        Book b3 = Book.make("abc", "def3","EDUCATIONAL","7777");
        assertFalse(Book.isSameGenre(b1, b2));
        assertTrue(Book.isSameGenre(b2, b3));
    }

    @Test(expected = IllegalArgumentException.class)
    public void compare_NotSameGenre(){
        Book b1 = Book.make("abc", "def","SCIFI","10000");
        Book b2 = Book.make("abc", "def","EDUCATIONAL","10000");
        b1.compare(b2);
    }

    @Test
    public void compare_LessOrGreater() {
        Book b1 = Book.make("abc", "def","EDUCATIONAL","10");
        Book b2 = Book.make("abc", "def","EDUCATIONAL","10000");
        assertEquals(-1, b1.compare(b2));
        assertEquals(1, b2.compare(b1));
    }

    @Test
    public void compare_Equal(){
        Book b1 = Book.make("abc", "deffff","EDUCATIONAL","10000");
        Book b2 = Book.make("abc", "def","EDUCATIONAL","10000");
        assertEquals(0, b1.compare(b2));
    }
}
