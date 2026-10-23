// FUN_00406080 @ 406080 size=41

void __fastcall FUN_00406080(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x6c))(*(int **)(param_1 + 0x2c));
    iVar2 = iVar2 + 1;
    if (0x3f < iVar2) break;
  } while (iVar1 != 0);
  FUN_00405ad0(s_Image_Restored_0082c49c);
  return;
}


