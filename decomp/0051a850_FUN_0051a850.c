// FUN_0051a850 @ 51a850 size=355

void __thiscall FUN_0051a850(int *param_1,short *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = (**(code **)(*(int *)(param_1[0x92] + 0xe) + 0xc))();
  FUN_00405ad0(s_Combat__Unit___d___s__got_Bombar_0084af60,*(undefined4 *)((int)param_1 + 0x1a),
               uVar2);
  iVar3 = *(int *)((int)param_1 + 0x176);
  if (((iVar3 != 0) && (*(int *)(iVar3 + 0xe) == *(int *)(param_2 + 1))) &&
     (*(short *)(iVar3 + 0xc) == *param_2)) {
    *(undefined4 *)((int)param_1 + 0x176) = 0;
    *(undefined1 *)((int)param_1 + 0x17a) = 0;
  }
  iVar3 = (**(code **)(param_1[0x47] + 4))();
  if (iVar3 == 0) {
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
    cVar1 = (**(code **)(*(int *)((int)param_1 + 0x22e) + 8))();
    if (cVar1 != '\0') goto LAB_0051a961;
    (**(code **)(*param_1 + 0xa0))();
    FUN_00418140(2);
  }
  FUN_00523370(0);
LAB_0051a961:
  (**(code **)(*param_1 + 0x80))();
  (**(code **)(param_1[0x47] + 4))();
  (**(code **)(*param_1 + 0x94))();
  cVar1 = FUN_00523690(param_1[3]);
  if (cVar1 != '\0') {
    cVar1 = FUN_0042e8e0();
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(*param_1 + 0x18))();
      FUN_0050f230(uVar2);
    }
  }
  FUN_00524640();
  return;
}


