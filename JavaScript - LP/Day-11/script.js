// Javascript String Methods

// 1. slice
// 2. concat
// 3. at *
// 4. endsWith
// 5. startsWith
// 6. includes
// 7. indexOf *
// 8. lastIndexOf *
// 9. repeat
// 10. split
// 11. toLowerCase
// 12. toUpperCase
// 13. trim / trimEnd / trimStart
// 14. valueOf


// 1. slice()

{
    const str = "The quick brown fox jumps over the lazy dog.";

    console.log(str.slice(31));
    console.log(str.slice(4, 19));
    console.log(str.slice(-2));
    console.log(str.slice(-9, -5));

}

// 2. concat()

{
    const str1 = "Hello"
    const str2 = "World"

    console.log(str1.concat(" ", str2));
    console.log(str2.concat(", ", str1));

}

// 3. startsWith()

{
    const str = "Saturday night plans Saturday"

    console.log(str.startsWith("Sat"));
    console.log(str.startsWith("Sat", 0));
    console.log(str.startsWith("Sat", 21));

}

// 4. endsWith()

{
    const str = "Saturday night plans!"

    console.log(str.endsWith("plans"));
    console.log(str.endsWith("night", 14));

}

// 5. includes()

{
    const sentence = "The quick brown fox jumps over the lazy dog.";
    
    const word = "fox";
    
    console.log(`The word "${word}" ${sentence.includes(word) ? "is" : "is not"} in the sentence.`);
}

// 6. repeat()

{
    const mood = "Happy! "
    
    console.log(`I feel Very ${mood.repeat(3)} today`);
    
}

// 7. split()

{
    const sentence = "The quick brown fox jumps over the lazy dog.";
    
    const words = sentence.split(" ")
    console.log(words[3]);

    const chars = sentence.split("")
    console.log(chars[5]);
    
    const ary = sentence.split()
    console.log(ary);
    
}


// 8. toLowerCase() & toUpperCase()

{
    const sentence = "The quick brown fox jumps over the lazy dog.";

    console.log(sentence.toUpperCase())
    console.log(sentence.toLocaleLowerCase())
}



// 9. trim(), trimEnd() & trimStart()

{
    const greeting = "      Hello World !       "

    console.log(greeting);
    console.log(greeting.trim());
    console.log(greeting.trimEnd());
    console.log(greeting.trimStart());
    
}


// 10. valueOf()

{
    const sent = new String("Hii")

    console.log(sent.valueOf());
    
}


{
    let str = "Hii, I am Prince Parekh"

    let ans1 = str.indexOf('P')
    console.log(ans1);

    let ans2 = str.lastIndexOf('P')
    console.log(ans2);

    console.log(str.charAt(7));
    console.log(str.charAt(-2));
    console.log(str.at(10));
    console.log(str.at(-10));
    console.log(str.charCodeAt(0));

    let regex1 = /[r]/g

    let result = str.match(regex1) || []

    console.log(result.length);

    let regex2 = /[A-Z]/g

    result = [...str.matchAll(regex2)]

    console.log(result[0]);

}

{
    const para = "hii this is boy, she is beautiful. That boy is my sister."

    let newpara = para.replaceAll(/boy/gi, 'girl')

    console.log(newpara);

}