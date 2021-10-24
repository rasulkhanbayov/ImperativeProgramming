class Book{
    private String author, title;
    protected int pages;

    public String getAuthor() { return author; }

    public Book(){
        this.author = "John Steinbeck";
        this.title = "Of Mice and Men";
        this.pages = 107;
    }

    public Book(String author, String title, int pages){
        if (author.length() < 2 || title.length() < 4){
            throw new IllegalArgumentException();
        }
        this.author = author;
        this.title = title;
        this.pages = pages;
    }

    public String getShortName(){
        return author.substring(0, 1) + ": " + title.substring(0, 3) + "; " + pages;
    }

    //@Override
    public String toString(){
        return author + ": " + title + ", pages: " + pages;
    }

    public String createReference(String article, int from, int to){
        return getShortName() + " [" + from + "-" + to + "] referenced in article: " + article;
    }
}

enum CoverType{
    Softcover,
    Hardcover;
}

class PrintedBook extends Book{
    protected CoverType cover;

    public PrintedBook(){
        this.pages += 6;
        this.cover = CoverType.Hardcover;
    }

    public PrintedBook(String author, String title, int pages, CoverType cover){
        super(author, title, pages + 6);
        this.cover = cover;
    }

    public int getPrice(){
        if (cover == CoverType.Softcover){
            return pages * 2;
        }
        else{
            return pages * 3;
        }
    }

    //@Override
    public String toString()
    {
        if (cover == CoverType.Softcover){
            return super.toString() + " (softcover)";
        }
        else{
            return super.toString() + " (hardcover)";
        }
    }

    @Override
    public String createReference(String article, int from, int to){
        return super.toString() + " [" + from + "-" + to + "] referenced in article: " + article;
    }
}

class EBook extends Book{
    protected int PDFSize;

    public EBook(String author, String title, int pages, int PDFSize){
        super(author, title, pages);
        this.PDFSize = PDFSize;
    }

    public int getPrice(){
        return pages + PDFSize;
    }

    @Override
    public String createReference(String article, int from, int to){
        return super.toString() + " (PDF size: " + PDFSize + ") [" + from + "-" + to + "] referenced in article: " + article;
    }

    //@Override // compile error
    public String createReference(String article, String date){
        return super.toString() + " (PDF size: " + PDFSize + ") referenced in article: " + article + ", accessing PDF date: " + date;
    }
}
