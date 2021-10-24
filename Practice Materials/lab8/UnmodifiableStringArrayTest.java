import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertNotEquals;
import static org.junit.Assert.assertTrue;
import static org.junit.Assert.assertFalse;
import org.junit.*;

public class UnmodifiableStringArrayTest {
    private UnmodifiableStringArray usa;

    @Before
    public void init() { //because by design BeforeClass must be static
        if(usa == null) {
            usa = new UnmodifiableStringArray(new String[]{"abc","def","x","aaaaaaa","sw","Longest String"});
        }
    }

    @Test 
    public void get_Test() {
        assertEquals("x",usa.get(2));
    }

    @Test(expected = IllegalArgumentException.class)
    public void illegal_Get_Test() {
        usa.get(-2);
    }

    @Test 
    public void defensive_Copy_Test() {
        String[] str = {"a","b","c","d"};
        UnmodifiableStringArray usa = new UnmodifiableStringArray(str);
        str[0] = "f";
        assertEquals("a",usa.get(0));

        String[] usaItems = usa.getAllItems();
        usaItems[2] = "Nonsense";
        assertNotEquals("Nonsense", usa.get(2));
        assertEquals("c", usa.get(2));
    }

    @Test 
    public void sort_Test() {
        String[] sortedUsa = usa.sort();
        assertEquals("x", sortedUsa[usa.size()-1]);
        assertEquals("abc", sortedUsa[2]);
    }

    @Test 
    public void size_Adding_Test() {
        assertEquals(30, usa.allLength());
    }

    @Test 
    public void test_Contains() {
        assertFalse(usa.contains("USA"));
        assertTrue(usa.contains("Longest String")); 
        //assertTrue(usa.contains("LongestString")); 
        //assertEquals(true,usa.contains("LongestString")); 
    }//both could be tested w/ assertEq(true,...) maybe a better approach

}
