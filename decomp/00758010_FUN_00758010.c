// FUN_00758010 @ 758010 size=127

uint FUN_00758010(undefined4 *param_1,int param_2)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_20 [8];
  
  puVar5 = local_20;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  iVar4 = FUN_00741630(local_20,0x20,0);
  if (0 < iVar4) {
    uVar1 = FUN_007a7b3c(local_20);
    if ((0 < (int)uVar1) && ((int)uVar1 <= param_2)) {
      pvVar2 = operator_new(uVar1);
      uVar3 = FUN_00741f50(pvVar2,uVar1);
      if (uVar3 == uVar1) {
        *param_1 = pvVar2;
        return uVar1;
      }
      FUN_00796cd8(pvVar2);
    }
  }
  return 0xffffffff;
}


