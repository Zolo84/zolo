// FUN_00522380 @ 522380 size=410

void __thiscall FUN_00522380(int *param_1,undefined4 param_2,char param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iStack_8;
  int iStack_4;
  
  if ((param_3 != '\0') ||
     ((*(char *)((int)param_1 + 0x17e) != '\0' &&
      (cVar3 = (**(code **)(*(int *)((int)param_1 + 0x22e) + 8))(), cVar3 == '\0')))) {
    FUN_0040d210();
    FUN_0040d170();
    iVar4 = FUN_004e9370(param_1[3]);
    if ((*(int *)(iVar4 + 0x12) == 0) &&
       ((cVar3 = (**(code **)(*param_1 + 0x28))(), cVar3 != '\0' &&
        (iVar4 = (**(code **)(*param_1 + 0x10))(), *(int *)(iVar4 + 0x2ae) != 0)))) {
      (**(code **)(*param_1 + 0x10))();
      FUN_00419460(&iStack_8);
      FUN_00419440(iStack_8 + 0x10,iStack_4 + -6);
      (**(code **)(**(int **)((int)param_1 + 0x15e) + 0x18))(iStack_8 + 0x10,iStack_4 + -6);
    }
    if (*(int *)(*DAT_00d12b40 + 0x386) == 0) {
      uVar6 = 1;
      uVar5 = FUN_00419460(&iStack_8);
    }
    else {
      uVar6 = 1;
      uVar5 = (**(code **)(**(int **)((int)param_1 + 0x15e) + 0x28))(&iStack_8,1);
    }
    FUN_0040d230(uVar5,uVar6);
    puVar2 = *(undefined4 **)((int)param_1 + 0x232);
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
    FUN_0040d1d0(param_2);
  }
  return;
}


