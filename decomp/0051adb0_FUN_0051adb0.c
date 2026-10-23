// FUN_0051adb0 @ 51adb0 size=676

void __thiscall FUN_0051adb0(int *param_1,undefined4 param_2)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 0x94) = 0;
  uVar2 = (**(code **)(*(int *)(param_1[0x92] + 0xe) + 0xc))();
  FUN_00405ad0(s_Combat__Unit___d___s__got_Combat_0084afd8,
               (short)*(undefined4 *)((int)param_1 + 0x1a),uVar2);
  iVar3 = FUN_00428ee0(param_2);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar3 + -8;
    if (iVar3 != 0) {
      (**(code **)(param_1[0x47] + 0x18))((short)iVar3);
    }
  }
  if (*(int *)((int)param_1 + 0x176) == iVar3) {
    *(undefined4 *)((int)param_1 + 0x176) = 0;
  }
  iVar3 = *(int *)((int)param_1 + 0x26);
  while (iVar3 != 0) {
    iVar3 = *(int *)(iVar3 + 8);
    FUN_00526a30(DAT_0088f28c,(short)((uint)DAT_0088f28e >> 0x10));
  }
  if (*(int *)((int)param_1 + 0x176) == 0) {
    iVar3 = (**(code **)(param_1[0x47] + 4))();
    if (0 < iVar3) {
      FUN_0051a6d0((short)*(undefined4 *)param_1[0x48]);
      goto LAB_0051af77;
    }
    cVar1 = FUN_00444290();
    if (cVar1 != '\0') {
      *(undefined1 *)(DAT_00ab27b4 + 0x3b1 + param_1[3] * 0x4b2) = 0;
    }
    *(undefined1 **)((int)param_1 + 0x21a) = &LAB_00521a70;
    *(undefined4 *)((int)param_1 + 0x21e) = 0;
    cVar1 = (**(code **)(*(int *)((int)param_1 + 0x22e) + 8))();
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0xa0))();
    }
    else {
      FUN_00418140(0);
      FUN_00418210(10);
    }
  }
  else {
    FUN_00523370(2 - (ushort)(*(char *)((int)param_1 + 0x17a) != '\0'));
    cVar1 = (**(code **)(*(int *)((int)param_1 + 0x22e) + 8))();
    if (cVar1 != '\0') {
      if ((*(int *)((int)param_1 + 0x176) == 0) || (*(char *)((int)param_1 + 0x17a) == '\0')) {
        FUN_00418140(2);
        FUN_00418210(8);
      }
      else {
        FUN_00418140(2);
        FUN_00418210(9);
      }
      goto LAB_0051af77;
    }
    (**(code **)(*param_1 + 0xa0))();
  }
  FUN_00523370(0);
LAB_0051af77:
  (**(code **)(*param_1 + 0x80))();
  iVar3 = (**(code **)(param_1[0x47] + 4))();
  if (iVar3 == 0) {
    cVar1 = (**(code **)(*param_1 + 0x28))();
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*param_1 + 0x2c))();
      if (cVar1 == '\0') {
        uVar2 = (**(code **)(*param_1 + 0x18))();
        FUN_006ad5c0(0x14,0x7200,uVar2);
      }
      else {
        uVar2 = (**(code **)(*param_1 + 0x14))();
        FUN_006ad550(0x13,0x71e0,uVar2);
      }
    }
    else {
      uVar2 = (**(code **)(*param_1 + 0x10))();
      FUN_006ad4e0(0x12,0x71c0,uVar2);
    }
  }
  (**(code **)(*param_1 + 0x94))();
  cVar1 = FUN_0042e980();
  if ((((cVar1 != '\0') && (cVar1 = (**(code **)(*param_1 + 0x30))(), cVar1 != '\0')) &&
      (*(int *)((int)param_1 + 0x176) == 0)) &&
     (((iVar3 = (**(code **)(param_1[0x47] + 4))(), iVar3 == 0 && (DAT_00893750 != 0)) &&
      (*(char *)(DAT_00893750 + 0x110) == '\0')))) {
    uVar2 = (**(code **)(*param_1 + 0x18))();
    FUN_0050f230(uVar2);
  }
  FUN_00524640();
  return;
}


