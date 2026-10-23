// FUN_004a5b50 @ 4a5b50 size=139

int __thiscall FUN_004a5b50(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  for (piVar1 = *(int **)(param_1 + 0x4508); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    piVar2 = (int *)*piVar1;
    iVar6 = (**(code **)(*piVar2 + 0xbc))();
    if (iVar6 == param_2) {
      for (piVar2 = *(int **)((int)piVar2 + 0x26); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2])
      {
        iVar6 = *(int *)(*piVar2 + 0x13c);
        if (iVar6 < *(int *)(&DAT_00d7c830 + *(int *)(*piVar2 + 0x130) * 4)) {
          iVar7 = iVar7 + (*(int *)(&DAT_00d7c830 + *(int *)(*piVar2 + 0x130) * 4) - iVar6);
        }
      }
    }
  }
  puVar4 = *(undefined4 **)(param_1 + 0x3b7e);
  while (puVar4 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)puVar4[2];
    cVar5 = (**(code **)(*(int *)*puVar4 + 0x18))();
    puVar4 = puVar3;
    if ((cVar5 != '\0') && (cVar5 = FUN_004f4a90(), cVar5 != '\0')) {
      iVar7 = iVar7 + -1;
    }
  }
  return iVar7;
}


