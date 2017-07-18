for(c=0;c<n-1;c++)
{
    position = c;
    for(d=c+1;d<n;d++)
    {
        if(array[position]>array[d])
            position = d;
    }
    if(pos!=c)
    {
        swap = array[c];
        array[c]=array[pos];
        array[pos]=swap;
    }
}
