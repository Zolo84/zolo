// FUN_0065e090 @ 65e090 size=327

void FUN_0065e090(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d36ae;
  local_c = ExceptionList;
  local_14 = local_14 & 0xff000000;
  ExceptionList = &local_c;
  if (param_3 == 0) {
    ExceptionList = &local_c;
    FUN_0042dcc0(param_2);
  }
  uVar8 = 0;
  puVar4 = operator_new(0x28);
  local_4 = 0;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_0065cdb0(local_14,uVar8 & 0xffff0000);
    local_4._0_1_ = 1;
    *puVar4 = &PTR_FUN_007f0ae4;
    puVar4[2] = &PTR_LAB_007f0ae0;
    FUN_00425ba0(s_info_message_0086701c);
    pvVar5 = operator_new(0x68);
    local_4._0_1_ = 2;
    if (pvVar5 == (void *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_0043da60(param_1,0x29a);
    }
    puVar4[8] = uVar6;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_006d4290(uVar6);
    puVar4[9] = param_3;
  }
  iVar3 = DAT_00d10f18;
  local_4 = 0xffffffff;
  iVar1 = *(int *)(DAT_00d10f18 + 8);
  puVar7 = operator_new(0xe);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    *puVar7 = puVar4;
    puVar7[1] = iVar1;
    puVar7[2] = 0;
    *(undefined1 *)(puVar7 + 3) = 0;
  }
  iVar2 = *(int *)(iVar3 + 0xc);
  *(undefined4 **)(iVar3 + 8) = puVar7;
  *(int *)(iVar3 + 0xc) = iVar2 + 1;
  if (iVar2 != 0) {
    *(undefined4 **)(iVar1 + 8) = puVar7;
    ExceptionList = local_c;
    return;
  }
  *(undefined4 **)(iVar3 + 4) = puVar7;
  ExceptionList = local_c;
  return;
}


