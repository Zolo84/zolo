// FUN_00522520 @ 522520 size=163

void __thiscall FUN_00522520(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  
  if (*(char *)((int)param_1 + 0x17e) != '\0') {
    puVar2 = *(undefined4 **)(param_2 + 8);
    while (puVar2 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)puVar2[2];
      iVar4 = FUN_004e9370(*puVar2);
      cVar3 = (**(code **)(*param_1 + 0x2c))();
      if (((cVar3 == '\0') || (*(int *)(iVar4 + 0x254) == 8)) || (*(int *)(iVar4 + 0x254) == 9)) {
        if (*(int *)(*DAT_00d12b40 + 0x386) == 0) {
          iVar4 = iVar4 + 0x3fa;
        }
        else {
          iVar4 = iVar4 + 0x3ea;
        }
      }
      else {
        iVar4 = iVar4 + 0x3e0;
      }
      FUN_0040d230(iVar4,1);
      puVar2 = puVar1;
    }
    FUN_0040d4a0();
    FUN_0040d1d0(param_3);
  }
  return;
}


