// FUN_00522790 @ 522790 size=403

int __thiscall FUN_00522790(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  
  if ((&DAT_0089cad8)[*(int *)((int)param_1 + 0x146)] == 0) {
    *(undefined4 *)((int)param_1 + 0x146) = 0xa4;
  }
  param_1[0x92] = param_2;
  if (param_2 != 0) {
    FUN_0050a420(param_2);
    FUN_0050ad50(*(undefined4 *)(param_2 + 6));
    uVar5 = FUN_005b5cc0(*(undefined4 *)(param_2 + 6),*(undefined4 *)((int)param_1 + 0x1a));
    FUN_00425ba0(uVar5);
    cVar4 = (**(code **)(*param_1 + 0x2c))();
    if (cVar4 == '\0') {
      cVar4 = (**(code **)(*param_1 + 0x30))();
      if (cVar4 == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = 2;
      }
    }
    else {
      uVar5 = 1;
    }
    FUN_0050ad30(uVar5);
    if (*(int *)((int)param_1 + 0x14a) != 0) {
      FUN_0050a420(param_2);
    }
    (**(code **)(*param_1 + 0x88))();
    if (((((char)param_1[0x5f] == '\0') || (*(int *)((int)param_1 + 0x176) != 0)) ||
        (iVar6 = (**(code **)(param_1[0x47] + 4))(), iVar6 != 0)) ||
       (*(char *)((int)param_1 + 0x17b) != '\0')) {
      iVar6 = (&DAT_0089cad8)[*(int *)((int)param_1 + 0x146)];
      if (iVar6 == 0) {
        iVar6 = param_1[0x92];
      }
      iVar1 = **(int **)((int)param_1 + 0x15a);
      uVar5 = FUN_0044b1c0(*(undefined4 *)(iVar6 + 6));
      (**(code **)(iVar1 + 0x2c))(uVar5);
    }
    else {
      (**(code **)(**(int **)((int)param_1 + 0x15a) + 0x2c))
                (s_gfx_map_flags_flag_exiled_bmp_0084af8c);
    }
    (**(code **)(**(int **)((int)param_1 + 0x15a) + 0x34))(0x19);
    iVar6 = *(int *)((int)param_1 + 0x15a);
    *(undefined4 *)(iVar6 + 0x22) = 0;
    *(undefined4 *)(iVar6 + 0x26) = 10;
    *(undefined1 *)(iVar6 + 0x67) = 0;
    uVar5 = FUN_00413d60(s_flag_palette_bmp_0083c738);
    FUN_00415f20(uVar5);
    param_1[0x93] = *(int *)(param_1[0x92] + 6);
  }
  piVar3 = *(int **)((int)param_1 + 0x26);
  while (piVar3 != (int *)0x0) {
    piVar2 = (int *)piVar3[2];
    *(int *)(*piVar3 + 0x5c) = param_1[0x92];
    piVar3 = piVar2;
  }
  return param_1[0x92];
}


