/*

int main()
{
    cout << "printRight(3): "<< '\n';
    printRight(3);
    cout << "\nprintRight_upsideDown_rightJustified(3): "<< '\n';
    printRight_upsideDown_rightJustified(3);

    const char arr[2][SIZE] = { {'A','3','@'}, {'#','\\','9'} };
    cout << "\nprintArray(arr[0], 3): " << '\n';
    printArray(arr[0], 3);
    cout << "\nprintArray(arr, 2, 3): " << '\n';
    printArray(arr, 2, 3);

    char alph[2][SIZE] = {{'~', 'f', 'D', '3', '"', '!', ' '}, {' ', '!', '"', '3', 'D', 'f', '~'}};
    cout << "\nadd(alph[0], 7, 3): " << '\n';
    add(alph[0], 7, 3);
    printArray(alph, 2, 7);
    cout << "\nadd(alph, 2, 7, -3): " << '\n';
    add(alph, 2, 7, -3);
    printArray(alph, 2, 7);

    cout << "\nrotateLeft(alph[0], 7): " << '\n';
    rotateLeft(alph[0], 7);
    printArray(alph[0], 7);
    cout << "\nrotateLeft(alph, 2, 7): " << '\n';
    rotateLeft(alph, 2, 7);
    printArray(alph, 2, 7);

    cout << "\nrotateRight(alph[0], 7): " << '\n';
    rotateRight(alph[0], 7);
    printArray(alph[0], 7);
    cout << "\nrotateRight(alph, 2, 7): " << '\n';
    rotateRight(alph, 2, 7);
    printArray(alph, 2, 7);

    char nums[2][SIZE]={{'1', '2', '3', '4', '5', '6'}, {'7', '8', '9', '0', '1', '2'}};
    cout << "\nswapRange(nums[0], 6, 0, nums[1], 6, 3, 3): " << '\n';
    swapRange(nums[0], 6, 0, nums[1], 6, 3, 3);
    printArray(nums, 2, 6);

    char batmanrobin[12] = {'b','a','t','m','a','n','$','r','o','b','i','n'}, br[12];
    memcpy(br, batmanrobin, sizeof(br));
    cout << "\nswapWithinOneRow(batmanrobin, 12, 6): " << '\n';
    swapWithinOneRow(batmanrobin, 12, 6);
    printArray(batmanrobin, 12);
    memcpy(batmanrobin, br, sizeof(batmanrobin));
    cout << "swapWithinOneRow(batmanrobin, 12, 3): " << '\n';
    swapWithinOneRow(batmanrobin, 12, 3);
    printArray(batmanrobin, 12);
    memcpy(batmanrobin, br, sizeof(batmanrobin));
    cout << "swapWithinOneRow(batmanrobin, 12, 5): " << '\n';
    swapWithinOneRow(batmanrobin, 12, 5);
    printArray(batmanrobin, 12);
    memcpy(batmanrobin, br, sizeof(batmanrobin));
    cout << "swapWithinOneRow(batmanrobin, 12, 8): " << '\n';
    swapWithinOneRow(batmanrobin, 12, 8);
    printArray(batmanrobin, 12);

    char abc[4][SIZE] = {{'a', 'b', 'c'}, {'d', 'e', 'f'}, {'g', 'h', 'i'}, {'j', 'k', 'l'}};
    cout << "\nswapRows(abc, 3, 3): " << '\n';
    swapRows(abc, 4, 3);
    printArray(abc, 4, 3);

    char arr2[5]={'a', 'b', 'c', '0'};
    add(arr2, 5, -953);
    printArray(arr2, 5);
}
*/