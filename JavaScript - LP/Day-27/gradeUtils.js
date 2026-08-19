function getGrade(percentage){
    if(percentage >= 90) return "A+";
    else if(percentage >= 75) return "A";
    else if(percentage >= 60) return "B";
    else if(percentage >= 45) return "C";
    else if(percentage >= 33) return "D";
    else {
        return "F";
    }
}

export default getGrade;