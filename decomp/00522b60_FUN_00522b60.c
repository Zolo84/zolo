// FUN_00522b60 @ 522b60 size=59

undefined4 __thiscall FUN_00522b60(int param_1,int param_2)

{
  char cVar1;
  
  if (((*(int *)(param_2 + 0x254) != 8) && (*(int *)(param_2 + 0x254) != 9)) &&
     (*(int *)(param_2 + 0x3d8) != 0)) {
    cVar1 = FUN_0044b280(*(undefined4 *)(*(int *)(param_1 + 0x248) + 6));
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}


