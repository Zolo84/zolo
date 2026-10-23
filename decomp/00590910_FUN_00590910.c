// FUN_00590910 @ 590910 size=274

undefined4 __fastcall FUN_00590910(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *unaff_EBX;
  
  iVar3 = **(int **)((int)param_1 + 0x15a);
  iVar1 = (**(code **)(*param_1 + 0x24))();
  uVar2 = (**(code **)(*param_1 + 0x20))(iVar1 + 0x18);
  (**(code **)(iVar3 + 0x34))(uVar2);
  iVar3 = *(int *)((int)param_1 + 0x15e);
  iVar1 = (**(code **)(*param_1 + 0x20))();
  FUN_00435410(iVar1 + 0x10 + iVar3);
  iVar3 = param_1[0x4a];
  iVar1 = (**(code **)param_1[0x46])(unaff_EBX);
  if (iVar1 == 3) {
    iVar1 = (**(code **)(*unaff_EBX + 8))();
    if (iVar1 == 0xe) {
      if (param_1[0x4a] == iVar3) {
        *(bool *)((int)param_1 + 0x166) = *(char *)((int)param_1 + 0x166) == '\0';
      }
      FUN_00591990(param_1[0x4a]);
      return 3;
    }
  }
  iVar3 = (**(code **)(*unaff_EBX + 8))();
  if (iVar3 == 0x16) {
    if (*(int *)(unaff_EBX[1] + 0xe) == 0x104) {
      iVar3 = 0x14;
      do {
        FUN_00435030();
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      return 3;
    }
    if (*(int *)(unaff_EBX[1] + 0xe) == 0x105) {
      iVar3 = 0x14;
      do {
        FUN_004351b0();
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      return 3;
    }
  }
  uVar2 = (**(code **)(*(int *)(*(int *)((int)param_1 + 0x15a) + 0x12) + 4))(unaff_EBX);
  return uVar2;
}


