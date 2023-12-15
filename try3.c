int function(int s)
{
    if (mid >= 0 && mid <= l)
    {
        if(z==mid)
        {
            x++;
             if(x>3)
            {
            return 0;
            }
        }
        if (a[mid] == s)
        {
            return 1;
        }
        else if (a[mid] < s)
        {
            start = mid;
            end =l;
            z=mid;
            mid = (start + end) / 2;
            return function(s);
        }
        else if (a[mid] > s)
        {
            end = mid;
            start=0;
             z=mid;
            mid = (start + end) / 2;
            return function(s);
        }    
    }
    else
    {
        return 0;
    }
}