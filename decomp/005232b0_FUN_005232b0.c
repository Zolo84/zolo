// FUN_005232b0 @ 5232b0 size=189

void __fastcall FUN_005232b0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*(char *)(param_1 + 0x17c) != '\0') && (*(int *)(param_1 + 0x176) == 0)) {
    iVar2 = (**(code **)(*(int *)(param_1 + 0x11c) + 4))();
    if ((iVar2 == 0) && (*(char *)(param_1 + 0x17b) == '\0')) {
      (**(code **)(**(int **)(param_1 + 0x15a) + 0x2c))(s_gfx_map_flags_flag_exiled_bmp_0084af8c);
      goto LAB_0052332d;
    }
  }
  iVar2 = (&DAT_0089cad8)[*(int *)(param_1 + 0x146)];
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x248);
  }
  iVar1 = **(int **)(param_1 + 0x15a);
  uVar3 = FUN_0044b1c0(*(undefined4 *)(iVar2 + 6));
  (**(code **)(iVar1 + 0x2c))(uVar3);
LAB_0052332d:
  (**(code **)(**(int **)(param_1 + 0x15a) + 0x34))(0x19);
  iVar2 = *(int *)(param_1 + 0x15a);
  *(undefined4 *)(iVar2 + 0x22) = 0;
  *(undefined4 *)(iVar2 + 0x26) = 10;
  *(undefined1 *)(iVar2 + 0x67) = 0;
  uVar3 = FUN_00413d60(s_flag_palette_bmp_0083c738);
  FUN_00415f20(uVar3);
  return;
}


