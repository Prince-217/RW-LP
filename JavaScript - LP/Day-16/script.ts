// Library Application

interface Book {
    id: number;
    name: string;
    author: string;
    category: string;
    purchases: number;
    isFavourite: boolean;
}

const booklist: {
    title: string;
    totalBooks: number;
    books: Book[];
} = {
    title: "My Books",
    totalBooks: 0,
    books: [
        {
            id: 101,
            name: "To Kill a Mockingbird",
            author: "Harper Lee",
            category: "Classic Fiction",
            purchases: 1034,
            isFavourite: false
        },
        {
            id: 102,
            name: "1984",
            author: "George Orwell",
            category: "Dystopian / Science Fiction",
            purchases: 464,
            isFavourite: false
        },
        {
            id: 103,
            name: "The Alchemist",
            author: "Paulo Coelho",
            category: "Philosophical Fiction / Adventure",
            purchases: 4743,
            isFavourite: true
        },
        {
            id: 104,
            name: "Sapiens: A Brief History of Humankind",
            author: "Yuval Noah Harari",
            category: "Non-Fiction / History",
            purchases: 7648,
            isFavourite: true
        },
        {
            id: 105,
            name: "The Great Gatsby",
            author: "F. Scott Fitzgerald",
            category: "Literary Fiction",
            purchases: 6967,
            isFavourite: false
        },
        {
            id: 106,
            name: "Atomic Habits",
            author: "James Clear",
            category: "Self-Help / Personal Growth",
            purchases: 64523,
            isFavourite: true
        },
        {
            id: 107,
            name: "The Silent Patient",
            author: "Alex Michaelides",
            category: "Psychological Thriller",
            purchases: 2435,
            isFavourite: false
        }
    ]
}



// Book List


booklist.totalBooks = booklist.books.length

console.log("======= Book List =======");

for (let i = 0; i < booklist.totalBooks; i++) {
    const bk = booklist.books[i]
    console.log(`ID: ${bk.id},\nBook: ${bk.name},\nAuthor: ${bk.author}`);
}



// Purchases Of each book:


console.log("======= Book wise purchases =======");

booklist.books.forEach((book) => {
    console.log(`"${book.name}" --> ${book.purchases} piece`);
})




// Favourite book:


console.log("========== Favourite Books ==========");


{
    const favBooks = booklist.books.filter((bk) => bk.isFavourite)

    favBooks.forEach((bk) => {
        console.log(`"${bk.name}" By ${bk.author}`);

    })
}




// Adding new book

{
    const newBook: Book = {
        id: booklist.books.length + 101,
        name: "Brave New World",
        author: "James Clear",
        category: "Dystopian / Science Fiction",
        purchases: 243,
        isFavourite: false
    }

    booklist.books.push(newBook)
}

booklist.totalBooks = booklist.books.length



// Filtering Books

console.log("========== Science Fiction Books & Purchases is more than 300 ==========");

{
    const categoryFilter = booklist.books.filter((bk) => bk.category == "Dystopian / Science Fiction")
    const priceFilter = categoryFilter.filter((bk) => bk.purchases > 300)

    priceFilter.forEach((bk) => {
        console.log(`ID: ${bk.id}\nBook: ${bk.name}\nCategory: ${bk.category}\nPurchases: ${bk.purchases}`);
    })
}




// Searching functionality

console.log("========== Searching functionality (Author: James Clear)==========");


{
    function findBookbyAuthor(author: string) {
        return booklist.books.filter((bk) => {
            return bk.author.toLowerCase() == author.toLowerCase()
        });
    }

    const authorBook1 = findBookbyAuthor("James Clear");

    authorBook1.forEach((bk) => { 
        console.log(`ID: ${bk.id}\nBook: ${bk.name}`) 
    })
}




// Total purchases in library

console.log("===== Total purchases in library =====");

{
    let totalPurchases = 0

    for(const bk of booklist.books){
        totalPurchases += bk.purchases
    }

    console.log(`Total books sold out: ${totalPurchases}`);
    
}