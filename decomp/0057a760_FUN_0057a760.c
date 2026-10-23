// FUN_0057a760 @ 57a760 size=236

uint __thiscall
FUN_0057a760(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int local_4;
  
  local_4 = 0;
  uVar2 = FUN_0057a6b0(param_5);
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  if (*(int *)(param_1 + 0x1e) != 0) {
    piVar1 = *(int **)(param_1 + 0x22);
    if (piVar1 != (int *)0x0) {
      uVar3 = (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x22) = 0;
      *(undefined4 *)(param_1 + 0x1e) = 0;
      FUN_00405ad0(s_FrontSurface_released__ERROR___d_00857098,uVar3);
    }
    piVar1 = *(int **)(param_1 + 0x1e);
    if (piVar1 != (int *)0x0) {
      uVar3 = (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x1e) = 0;
      FUN_00405ad0(s_FrontSurface_released__ERROR___d_00857098,uVar3);
    }
  }
  if ((char)param_5 != '\0') {
    do {
      iVar4 = (**(code **)(**(int **)(param_1 + 0x1a) + 0x54))
                        (*(int **)(param_1 + 0x1a),param_2,param_3,param_4,0,0);
      if (iVar4 == 0) goto LAB_0057a828;
      local_4 = local_4 + 1;
    } while (local_4 < 0x14);
    if (iVar4 != 0) {
      FUN_00405ad0(s_Failed_to_set_video_mode__0085707c);
      uVar2 = FUN_0057f100(s_C__Dev_HoI2_Projects_Darkest_Hou_00856f60,0x155,iVar4);
      return uVar2 & 0xffffff00;
    }
  }
LAB_0057a828:
  FUN_0057a850();
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x32);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0x2e);
  *(undefined4 *)(param_1 + 0xc) = param_4;
  return CONCAT31((int3)((uint)*(undefined4 *)(param_1 + 0x32) >> 8),1);
}


