// FUN_004329d0 @ 4329d0 size=129

undefined1 FUN_004329d0(int param_1,int param_2,int param_3)

{
  char cVar1;
  
  if (*(char *)(param_3 + 0x180) == '\0') {
    if (((*(int *)(param_2 + 0x12) != *(int *)(param_3 + 0x12)) && (*(int *)(param_2 + 0x12) != 0))
       && (*(int *)(param_3 + 0x12) != 0)) {
      if ((*(int *)(param_3 + 0x254) != 8) && (*(int *)(param_3 + 0x254) != 9)) {
        cVar1 = FUN_004a3020(param_3,0);
        if ((cVar1 == '\0') && (*(int *)(param_3 + 0x3d8) != 0)) {
          cVar1 = FUN_0044b280(*(undefined4 *)(*(int *)(param_1 + 0x248) + 6));
          if (cVar1 == '\0') {
            return 0;
          }
        }
        return 1;
      }
      return 0;
    }
  }
  return 0;
}


