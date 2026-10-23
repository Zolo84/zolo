// FUN_00601e30 @ 601e30 size=321

undefined4 * __thiscall
FUN_00601e30(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 local_10c [248];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cf91c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00414c80(param_4);
  *param_1 = &PTR_FUN_007ee574;
  param_1[2] = &PTR_LAB_007ee570;
  *(int *)((int)param_1 + 0x7e) = param_3;
  *(undefined4 *)((int)param_1 + 0x82) = param_2;
  iVar3 = 0;
  local_4 = 0;
  FUN_00607450(param_3);
  puVar5 = param_1 + 0x49;
  param_1[0x54] = 10;
  *param_1 = &PTR_FUN_007eea24;
  param_1[2] = &PTR_LAB_007eea20;
  param_1[0x53] = 0;
  puVar4 = puVar5;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  do {
    param_1[0x53] = (&DAT_0089cad8)[param_3];
    iVar2 = FUN_0044c640(iVar3);
    if (iVar2 == 0) {
      FUN_0061e550(puVar5,&DAT_0088ebf8,0);
    }
    else {
      FUN_007a630a(local_10c,s_gfx_interface_pics__s_bmp_0085d184,iVar2 + 0x2a);
      FUN_0061e550(puVar5,local_10c,0);
    }
    uVar1 = FUN_00413d60(s_ministers_palette_bmp_0085d16c);
    FUN_00415f20(uVar1);
    iVar3 = iVar3 + 1;
    puVar5 = puVar5 + 1;
  } while (iVar3 < 10);
  (**(code **)(**(int **)(DAT_00d0ca90 + 0x13cfc) + 0x18))(0xfffffc18,0xfffffc18);
  ExceptionList = pvStack_14;
  return param_1;
}


