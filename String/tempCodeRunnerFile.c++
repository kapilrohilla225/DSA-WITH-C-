
    int len = string_length(s);
    int end = len - 1;

    while (st <= end)
    {
        if(!valid_palindrome(s[st])){
            st++;