// FUN_004bde30 @ 4bde30 size=205

char __thiscall FUN_004bde30(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  int *piVar5;
  undefined4 uVar6;
  
  piVar5 = (int *)(**(code **)(*param_1 + 0xc))();
  cVar3 = (**(code **)(*piVar5 + 0x18))(param_2);
  if (cVar3 != '\0') {
    piVar5 = (int *)param_1[0x10];
    uVar6 = (**(code **)(*(int *)(*(int *)(param_2 + 0x248) + 0xe) + 0xc))();
    uVar6 = (**(code **)(*piVar5 + 0xc))(*(undefined4 *)(param_2 + 0x1a),uVar6);
    FUN_00405ad0(s__s__Found_unit___d___s___Removed_0083f264,uVar6);
    iVar1 = param_1[0x10];
    iVar2 = *(int *)(iVar1 + 0x74);
    if (((iVar2 == 4) || (iVar2 == 5)) || (iVar2 == 6)) {
      FUN_0051a850(iVar1 + 0xc);
    }
    else {
      FUN_0051adb0(iVar1 + 0xc);
    }
    piVar5 = (int *)(**(code **)(*param_1 + 0xc))();
    cVar4 = (**(code **)(*piVar5 + 8))();
    if (cVar4 != '\0') {
      *(undefined1 *)((int)param_1 + 0x3f) = 1;
      (**(code **)(*param_1 + 0x20))(0);
      return cVar3;
    }
    if ((*(int *)((int)param_1 + 0x46) != 0) &&
       (*(int *)(*(int *)((int)param_1 + 0x46) + 0x5e) == param_2)) {
      iVar1 = *param_1;
      uVar6 = 0;
      (**(code **)(iVar1 + 0xc))(0);
      uVar6 = FUN_00527c20(uVar6);
      (**(code **)(iVar1 + 0x20))(uVar6);
    }
  }
  return cVar3;
}


