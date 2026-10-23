// FUN_006e8c50 @ 6e8c50 size=924

int __thiscall FUN_006e8c50(int param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  
  if (*(char *)(param_1 + 0x1c) == '\0') {
    return 0;
  }
  piVar1 = *(int **)(*(int *)(param_1 + 0x14) + 0x22);
  if (((piVar1 == (int *)0x0) || (iVar6 = (int)piVar1 + -0x12, iVar6 == 0)) ||
     (cVar2 = (**(code **)(*piVar1 + 0x30))(), cVar2 == '\0')) {
    iVar6 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0xc);
    if (iVar3 != iVar6) {
      if (iVar3 != 0) {
        *(undefined1 *)(iVar3 + 0x54) = 0;
      }
      *(int *)(param_1 + 0xc) = iVar6;
    }
  }
  iVar3 = (**(code **)(**(int **)(param_1 + 0x2a) + 4))(param_2);
  if (*(char *)(*(int *)(param_1 + 0x2a) + 0x96) != '\0') {
    if (*(int *)(param_1 + 0x1e) != -1) {
      iVar4 = *(int *)(param_1 + 0x1e) * 0x1a;
      (&DAT_00d3635b)[iVar4] = (&DAT_00d36359)[iVar4];
      iVar4 = *(int *)(param_1 + 0x1e) * 0x1a;
      (&DAT_00d3635a)[iVar4] = (&DAT_00d36358)[iVar4];
      iVar4 = *(int *)(param_1 + 0x1e) * 0x1a;
      (&DAT_00d3635f)[iVar4] = (&DAT_00d3635e)[iVar4];
      FUN_006e8ae0();
      if (iVar6 != 0) {
        if (*(int *)(*(int *)(param_1 + 0x18) + 0x10) == 1) {
          FUN_006dae60(0);
        }
        if (*(int *)(*(int *)(param_1 + 0x18) + 0x10) == 2) {
          FUN_006dae60(s_gfx_settings_msg_setting_log_bmp_0086f160);
        }
        if (*(int *)(*(int *)(param_1 + 0x18) + 0x10) == 3) {
          FUN_006dae60(s_gfx_settings_msg_setting_box_bmp_0086f184);
        }
        if (*(int *)(*(int *)(param_1 + 0x18) + 0x10) == 4) {
          FUN_006dae60(s_gfx_settings_msg_setting_pause_b_0086f1a8);
        }
      }
      if (*(int *)(&DAT_00d36354 + *(int *)(param_1 + 0x1e) * 0x1a) == 4) {
        piVar1 = *(int **)(param_1 + 0x32);
        if (*(char *)((int)piVar1 + 0xa2) != '\0') {
          FUN_00433930();
        }
        (**(code **)(*piVar1 + 0x60))();
        *(undefined1 *)((int)piVar1 + 0x86) = 1;
      }
      else {
        (**(code **)(**(int **)(param_1 + 0x32) + 0x50))();
      }
    }
    puVar5 = &DAT_00d3635b;
    do {
      *puVar5 = puVar5[-2];
      puVar5[-1] = puVar5[-3];
      puVar5[4] = puVar5[3];
      puVar5 = puVar5 + 0x1a;
    } while ((int)puVar5 < 0xd37cd9);
    return iVar3;
  }
  iVar3 = (**(code **)**(undefined4 **)(param_1 + 0x18))(param_2);
  if (iVar6 == 0) goto LAB_006e8f22;
  if (iVar3 != 0) {
    if (*(int *)(*(int *)(param_1 + 0x18) + 0x10) == 1) {
      FUN_006dae60(0);
    }
    if (*(int *)(*(int *)(param_1 + 0x18) + 0x10) == 2) {
      FUN_006dae60(s_gfx_settings_msg_setting_log_bmp_0086f160);
    }
    if (*(int *)(*(int *)(param_1 + 0x18) + 0x10) == 3) {
      FUN_006dae60(s_gfx_settings_msg_setting_box_bmp_0086f184);
    }
    if (*(int *)(*(int *)(param_1 + 0x18) + 0x10) == 4) {
      FUN_006dae60(s_gfx_settings_msg_setting_pause_b_0086f1a8);
    }
    if (*(int *)(&DAT_00d36354 + *(int *)(param_1 + 0x1e) * 0x1a) != 4) {
      (**(code **)(**(int **)(param_1 + 0x32) + 0x50))();
      FUN_006e8b60();
      return 3;
    }
    piVar1 = *(int **)(param_1 + 0x32);
    if (*(char *)((int)piVar1 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar1 + 0x60))();
    *(undefined1 *)((int)piVar1 + 0x86) = 1;
    FUN_006e8b60();
    return 3;
  }
  if (*(int *)(param_1 + 0x1e) == -1) {
    *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(iVar6 + 0x40);
    FUN_006e8ae0();
    if (*(int *)(&DAT_00d36354 + *(int *)(param_1 + 0x1e) * 0x1a) != 4) {
LAB_006e8f1a:
      (**(code **)(**(int **)(param_1 + 0x32) + 0x50))();
      goto LAB_006e8f22;
    }
    piVar1 = *(int **)(param_1 + 0x32);
    cVar2 = *(char *)((int)piVar1 + 0xa2);
  }
  else {
    if (*(int *)(param_1 + 0x1e) == *(int *)(iVar6 + 0x40)) goto LAB_006e8f22;
    *(int *)(param_1 + 0x1e) = *(int *)(iVar6 + 0x40);
    FUN_006e8ae0();
    if (*(int *)(&DAT_00d36354 + *(int *)(param_1 + 0x1e) * 0x1a) != 4) goto LAB_006e8f1a;
    piVar1 = *(int **)(param_1 + 0x32);
    cVar2 = *(char *)((int)piVar1 + 0xa2);
  }
  if (cVar2 != '\0') {
    FUN_00433930();
  }
  (**(code **)(*piVar1 + 0x60))();
  *(undefined1 *)((int)piVar1 + 0x86) = 1;
LAB_006e8f22:
  iVar6 = (**(code **)(*(int *)(*(int *)(param_1 + 0x14) + 0x12) + 4))(param_2);
  if (iVar6 == 0) {
    (**(code **)(**(int **)(param_1 + 0x22) + 4))(param_2);
    if (*(char *)(*(int *)(param_1 + 0x22) + 0x96) == '\0') {
      iVar6 = (**(code **)(**(int **)(param_1 + 0x26) + 4))(param_2);
      if (*(char *)(*(int *)(param_1 + 0x26) + 0x96) == '\0') {
        return iVar6;
      }
      puVar5 = &DAT_00d3635b;
      do {
        *puVar5 = puVar5[2];
        puVar5[-1] = puVar5[1];
        puVar5[4] = puVar5[5];
        puVar5 = puVar5 + 0x1a;
      } while ((int)puVar5 < 0xd37cd9);
    }
    else if (*(int *)(param_1 + 0x1e) != -1) {
      FUN_006e8ae0();
      iVar6 = *DAT_00d12b40;
      puVar5 = (undefined1 *)(iVar6 + 0x10b);
      puVar7 = &DAT_00d3635a;
      do {
        puVar5[-0xfb] = puVar7[1];
        *puVar5 = *puVar7;
        puVar5[0xfb] = puVar7[5];
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 0x1a;
      } while ((int)(puVar5 + (-0x10b - iVar6)) < 0xfb);
      return 1;
    }
    iVar6 = 1;
  }
  return iVar6;
}


