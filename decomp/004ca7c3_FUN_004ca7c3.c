// FUN_004ca7c3 @ 4ca7c3 size=182

void __thiscall FUN_004ca7c3(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int *local_8;
  
  local_8 = *(int **)(param_1 + 0x2c);
  while (local_8 != (int *)0x0) {
    piVar1 = (int *)local_8[2];
    iVar2 = *local_8;
    local_8 = piVar1;
    if (0 < *(int *)(iVar2 + 0x3dc)) {
      uVar4 = FUN_004e9370(*(undefined4 *)(iVar2 + 0x3dc));
      cVar3 = (**(code **)(*param_2 + 0x24))(uVar4);
      if (cVar3 == '\0') {
        uVar4 = FUN_004e9370(*(undefined4 *)(iVar2 + 0x3dc));
        FUN_004ce950(uVar4);
      }
    }
  }
  return;
}


