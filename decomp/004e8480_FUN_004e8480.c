// FUN_004e8480 @ 4e8480 size=35

undefined4 __fastcall FUN_004e8480(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3ac);
  if ((((iVar1 != 2) && (iVar1 != 3)) && (iVar1 != 4)) && (iVar1 != 5)) {
    return 0;
  }
  return 1;
}


