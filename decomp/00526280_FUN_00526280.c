// FUN_00526280 @ 526280 size=44

void __thiscall FUN_00526280(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x34);
  iVar2 = 0x25;
  do {
    if (0 < *param_2) {
      *(undefined1 *)(param_1 + 0xcc) = 1;
      *piVar1 = *piVar1 + *param_2;
    }
    param_2 = param_2 + 1;
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


