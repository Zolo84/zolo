// FUN_007410d0 @ 7410d0 size=275

undefined4 FUN_007410d0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined4 *puVar4;
  undefined3 uVar5;
  undefined3 extraout_var;
  int iVar6;
  char local_411;
  undefined1 auStack_410 [1024];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007df0ae;
  pvStack_c = ExceptionList;
  iVar6 = 0;
  ExceptionList = &pvStack_c;
  iVar1 = (**(code **)(*DAT_0088faf8 + 0x18))();
  if (0 < iVar1) {
    do {
      uVar2 = (**(code **)(*DAT_0088faf8 + 0x14))(iVar6,param_1);
      FUN_007a630a(auStack_410,s__s__s_0083a350,uVar2);
      pvVar3 = operator_new(0x13e);
      puStack_8 = (undefined1 *)0x0;
      if (pvVar3 == (void *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = (undefined4 *)FUN_00426f50(auStack_410);
      }
      puStack_8 = (undefined1 *)0xffffffff;
      FUN_00427570();
      if (puVar4 != (undefined4 *)0x0) {
        (**(code **)*puVar4)(1);
      }
      iVar6 = iVar6 + 1;
      iVar1 = (**(code **)(*DAT_0088faf8 + 0x18))();
    } while (iVar6 < iVar1);
    local_411 = (char)((uint)pvVar3 >> 0x18);
    uVar5 = (undefined3)((uint)iVar1 >> 8);
    if (local_411 == '\0') goto LAB_007411ca;
  }
  MessageBoxA((HWND)0x0,s_EU2_CD_not_found__008742c8,s_Error_0087421c,0);
  FUN_007a64d3(0);
  uVar5 = extraout_var;
LAB_007411ca:
  ExceptionList = pvStack_10;
  return CONCAT31(uVar5,1);
}


