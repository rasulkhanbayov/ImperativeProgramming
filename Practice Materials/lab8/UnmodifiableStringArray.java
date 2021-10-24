import java.util.Arrays;
import java.util.Collections;
import java.util.List;
 
public class UnmodifiableStringArray {
    private final String[] strArr;
 
    public UnmodifiableStringArray(String[] strArr) {
        this.strArr = Arrays.copyOf(strArr,strArr.length); //defensive copying  
      }
   
    public UnmodifiableStringArray empty() {
        return new UnmodifiableStringArray(new String[0]);
    }
 
    public String get(int index) {
        if(index < 0 || index >= strArr.length) {
            throw new IllegalArgumentException();
        }
        return strArr[index];
    }
 
    public String find(String str) {
        for (String string: strArr) {
            if(string.equals(str)) {
                return string;
            }
        }
        return null;
    }
 
    public boolean contains(String str) {
        for (String string: strArr) {
            if(string.equals(str)) {
                return true;
            }
        }
        return false;
    }
 
    public String[] sort() {
        List<String> strList = Arrays.asList(strArr);
        Collections.sort(strList);
        return strList.toArray(String[]::new);
    }
 
    public String[] getAllItems() {
        return Arrays.copyOf(strArr,strArr.length); //defensive copying
    }
 
    public int size() {
        return strArr.length;
    }
 
    public int maxLength() {
        int maxl = -1;
        for (String string:strArr) {
            if(string.length() > maxl) {
                maxl = string.length();
            }
        }
        return maxl;
    }
 
    public int minLength() {
        int minl = Integer.MAX_VALUE;
        for (String string:strArr) {
            if(string.length() < minl) {
                minl = string.length();
            }
        }
        return minl;
    }
 
    public int allLength() {
        int sum = 0;
        for (String string:strArr) {
            sum += string.length();
        }
        return sum;
    }
}
