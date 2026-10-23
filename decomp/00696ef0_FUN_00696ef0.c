// FUN_00696ef0 @ 696ef0 size=126

undefined4 __thiscall FUN_00696ef0(int param_1,int param_2,int param_3,undefined1 param_4)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0x7e) != 0) && (*(char *)(*(int *)(param_1 + 0x7e) + 0xe) != '\0')) {
    if (*(int *)(param_2 + 0xc) == param_3) {
      return 1;
    }
    cVar1 = FUN_0051a4c0();
    if (cVar1 != '\0') {
      cVar1 = FUN_006a0de0(param_2,param_3);
      if (cVar1 == '\0') {
        return 2;
      }
      *(int *)(param_2 + 0x298) = param_3;
      *(undefined1 *)(param_2 + 0x29c) = param_4;
      (**(code **)(**(int **)(param_1 + 0x7e) + 0x1a8))(param_2);
      return 0;
    }
  }
  return 3;
}


