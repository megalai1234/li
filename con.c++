void romanType::storeRoman()
{
    locale loc;
    bool valid = true;

    do
    {
        valid = true;
        cout << "please enter a roman numeral using no spaces:" << endl;
        getline(cin, rNums);

        for (i = 0; i < rNums.length(); ++i)
        {
            rNums[i] = toupper(rNums[i], loc);
            if (rNums[i] == 'M' || rNums[i] == 'D' || rNums[i] == 'C' ||
                rNums[i] == 'L' || rNums[i] == 'X' || rNums[i] == 'V' ||
                rNums[i] == 'I')
            {
                continue;
            }
            valid = false;
        }

        cout << "input error please try again\n" << endl;
    } while (!valid);
}
