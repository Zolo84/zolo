// FUN_0063a800 @ 63a800 size=335

undefined4 * __thiscall FUN_0063a800(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined1 local_20c [256];
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d1f0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00414c80(s_gfx_interface_tech_noimage_bmp_008613ec);
  *param_1 = &PTR_FUN_007efac4;
  param_1[2] = &PTR_LAB_007efac0;
  local_4 = 0;
  iVar1 = param_2 + 0x9e;
  if (*(char *)(param_2 + 0x9e) == '\0') {
    iVar1 = *(int *)(param_2 + 0xe);
    pcVar3 = s__d_bmp_00853844;
  }
  else {
    pcVar3 = s__s_bmp_0085384c;
  }
  FUN_007a630a(local_10c,pcVar3,iVar1);
  if (DAT_00dc3a00 == '\0') {
    FUN_007a630a(local_20c,s_gfx_interface_tech__s_00853810,local_10c);
  }
  else {
    FUN_007a630a(local_20c,s__s_gfx_interface_tech__s_00853828,&DAT_00dc3a00,local_10c);
  }
  iVar1 = FUN_007a6615(local_20c,&DAT_0082eeb4);
  if (iVar1 == 0) {
    FUN_007a630a(local_20c,s_gfx_interface_tech__s_00853810,local_10c);
    iVar1 = FUN_007a6615(local_20c,&DAT_0082eeb4);
    if (iVar1 == 0) goto LAB_0063a920;
  }
  FUN_007a6429(iVar1);
  FUN_004159f0(local_20c);
LAB_0063a920:
  uVar2 = FUN_00413d60(s_leader_minister_palette_bmp_0085ed3c);
  FUN_00415f20(uVar2);
  ExceptionList = local_c;
  return param_1;
}


