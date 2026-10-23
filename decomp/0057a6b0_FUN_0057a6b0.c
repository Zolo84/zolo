// FUN_0057a6b0 @ 57a6b0 size=166

undefined4 __thiscall FUN_0057a6b0(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 == '\0') {
    do {
      iVar1 = (**(code **)(**(int **)(param_1 + 0x16) + 0x50))
                        (*(int **)(param_1 + 0x16),*(undefined4 *)(param_1 + 0x12),0xc);
      if (iVar1 == 0) goto LAB_0057a74a;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x14);
    if (iVar1 != 0) {
      FUN_00405ad0(s_Failed_to_SetCooperativeLevel__0085705c);
      FUN_0057f100(s_C__Dev_HoI2_Projects_Darkest_Hou_00856f60,0x137,iVar1);
      return 0;
    }
  }
  else {
    do {
      iVar1 = (**(code **)(**(int **)(param_1 + 0x16) + 0x50))
                        (*(int **)(param_1 + 0x16),*(undefined4 *)(param_1 + 0x12),0x13);
      if (iVar1 == 0) goto LAB_0057a74a;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x14);
    if (iVar1 != 0) {
      FUN_00405ad0(s_Failed_to_SetCooperativeLevel__0085705c);
      FUN_0057f100(s_C__Dev_HoI2_Projects_Darkest_Hou_00856f60,0x12a,iVar1);
      return 0;
    }
  }
LAB_0057a74a:
  *(char *)(param_1 + 0x10) = param_2;
  return 1;
}


