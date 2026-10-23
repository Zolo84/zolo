// FUN_0079156f @ 79156f size=140

void FUN_0079156f(void)

{
  char cVar1;
  
  FUN_00581ab0();
  (**(code **)(**(int **)(DAT_00893750 + 0x112) + 0x10))(0);
  FUN_00583f10();
  DAT_00dc4b84 = DAT_00dc4b84 + 1;
  cVar1 = FUN_00581e70();
  if (((cVar1 != '\0') && (0x14 < DAT_00dc4b84)) || (400 < DAT_00dc4b84)) {
    FUN_0078f9ce();
    PostQuitMessage(0);
    DAT_00dc4b5c = 1;
  }
  return;
}


