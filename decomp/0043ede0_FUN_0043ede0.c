// FUN_0043ede0 @ 43ede0 size=163

void __thiscall FUN_0043ede0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  piVar4 = (int *)param_1[0x23];
  if ((int *)param_1[0x23] != (int *)0x0) {
    do {
      if (iVar3 != 0) {
        return;
      }
      iVar3 = param_1[8];
      piVar1 = (int *)piVar4[2];
      piVar4 = (int *)*piVar4;
      *(int *)((int)piVar4 + 0x72) = param_1[9];
      *(int *)((int)piVar4 + 0x6e) = iVar3;
      (**(code **)(*piVar4 + 0x50))();
      cVar2 = (**(code **)(*param_1 + 0x30))(*(undefined4 *)((int)piVar4 + 0x92));
      if (cVar2 == '\x01') {
        if (*(char *)((int)piVar4 + 0xa2) != '\0') {
          FUN_00433930();
        }
        (**(code **)(*piVar4 + 0x60))();
        *(undefined1 *)((int)piVar4 + 0x86) = 1;
      }
      iVar3 = (**(code **)(*piVar4 + 4))(param_2);
      if (*(char *)((int)piVar4 + 0x96) != '\0') {
        (**(code **)(*param_1 + 0x2c))(*(undefined4 *)((int)piVar4 + 0x92));
        return;
      }
      piVar4 = piVar1;
    } while (piVar1 != (int *)0x0);
    if (iVar3 != 0) {
      return;
    }
  }
  FUN_00442310(param_2);
  return;
}


