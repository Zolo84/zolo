// FUN_00432330 @ 432330 size=114

undefined4 FUN_00432330(int param_1,int param_2,int param_3)

{
  char cVar1;
  
  if (*(char *)(param_3 + 0x180) == '\0') {
    if (((*(int *)(param_2 + 0x12) != *(int *)(param_3 + 0x12)) && (*(int *)(param_2 + 0x12) != 0))
       && (*(int *)(param_3 + 0x12) != 0)) {
      cVar1 = FUN_005216c0(param_3);
      if (cVar1 != '\0') {
        return 1;
      }
      if ((*(int *)(param_3 + 0x46a) != 0) && (*(int *)(param_3 + 0x3d8) != 0)) {
        cVar1 = FUN_0044b280(*(undefined4 *)(*(int *)(param_1 + 0x248) + 6));
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}


