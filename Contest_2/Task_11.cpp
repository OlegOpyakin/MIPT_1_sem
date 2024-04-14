char leveling(char c)
{
    if ((int)c >64 and (int)c < 91)
        return (char)((int)c+32);
    else
        return c;
}