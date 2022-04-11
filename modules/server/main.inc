main() 
{
    print("\n----------------------------------");
    print("  Bare Script\n");
    print("----------------------------------\n");
}

public OnGameModeInit() 
{
    UsePlayerPedAnims();
    SetGameModeText("Bare Script");

    AddPlayerClass(265, 1958.3783, 1343.1572, 15.3746, 270.1425, 0, 0, 0, 0, -1, -1);
    return 1;
}