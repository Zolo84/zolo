// FUN_00644de0 @ 644de0 size=391

undefined4 __fastcall FUN_00644de0(int *param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 unaff_ESI;
  int iVar7;
  
  cVar3 = (**(code **)(*param_1 + 0x38))();
  if (cVar3 == '\0') {
    return 0;
  }
  if (*(char *)((int)param_1 + 0xa2) != '\0') {
    iVar1 = *(int *)((int)param_1 + 0x8e);
    iVar5 = *(int *)(iVar1 + 0x13d66);
    *(int *)(iVar1 + 0x13d66) = iVar5 + 0x1a;
    iVar1 = *(int *)(iVar1 + 0x13d62);
    (**(code **)(**(int **)((int)param_1 + 0x92) + 0x18))(iVar1,iVar5 + 0x1a);
    (**(code **)(**(int **)((int)param_1 + 0x92) + 0x10))(unaff_ESI);
    uVar4 = *(uint *)((int)param_1 + 0xaa) & 0x3f;
    if (0x1f < uVar4) {
      uVar4 = 0x40 - uVar4;
    }
    if (*(uint *)((int)param_1 + 0xaa) == 0) {
      *(undefined4 *)(*(int *)((int)param_1 + 0x96) + 0x7a) = 0x1f;
    }
    else {
      *(uint *)(*(int *)((int)param_1 + 0x96) + 0x7a) = uVar4;
    }
    piVar2 = *(int **)((int)param_1 + 0x96);
    if (*(char *)(*(int *)((int)piVar2 + 0x62) + 0x253) == '\0') {
      if ((*(byte *)((int)param_1 + 0xaa) & 8) == 0) {
        (**(code **)(*piVar2 + 0x18))(iVar1 + 0x20,iVar5 + 0x1c);
        (**(code **)(**(int **)((int)param_1 + 0x96) + 0x10))(unaff_ESI);
      }
    }
    else {
      (**(code **)(*piVar2 + 0x18))(iVar1 + 0x20,iVar5 + 0x1d);
      (**(code **)(**(int **)((int)param_1 + 0x96) + 0x10))(unaff_ESI);
    }
    (**(code **)(**(int **)((int)param_1 + 0xae) + 0x14))(iVar1 + 4,iVar5 + 0x1d);
    return 0;
  }
  iVar1 = param_1[7];
  iVar5 = FUN_00415be0();
  iVar7 = (iVar1 - iVar5) + -0x10;
  iVar1 = **(int **)((int)param_1 + 0x9a);
  iVar5 = FUN_00415bd0(iVar7);
  iVar6 = 0xfe - iVar5 / 2;
  (**(code **)(iVar1 + 0x18))(iVar6);
  iVar1 = **(int **)((int)param_1 + 0x9e);
  iVar5 = FUN_00415bd0(iVar7);
  (**(code **)(iVar1 + 0x18))(0x3a - iVar5 / 2);
  (**(code **)(**(int **)((int)param_1 + 0x9a) + 0x10))(0);
  (**(code **)(**(int **)((int)param_1 + 0x9e) + 0x10))(0);
  FUN_004424d0(iVar6);
  return 0;
}


