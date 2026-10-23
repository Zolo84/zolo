// FUN_0040e9e0 @ 40e9e0 size=310

undefined1 __thiscall FUN_0040e9e0(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  void *pvVar4;
  ushort uVar5;
  int iVar6;
  int *piVar7;
  int local_174 [3];
  uint local_166;
  undefined1 local_14c [320];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007b987b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_00426f50(param_2);
  local_4 = 0;
  piVar7 = local_174;
  for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar7 = 0;
    piVar7 = piVar7 + 1;
  }
  cVar1 = FUN_0040f470(local_14c,local_174);
  if (cVar1 == '\x01') {
    uVar5 = (ushort)local_166;
    if (uVar5 == 0x18) {
      *(undefined4 *)(param_1 + 0x10) = 0x10;
      *(undefined4 *)(param_1 + 0xc) = 2;
    }
    else {
      *(uint *)(param_1 + 0x10) = local_166 & 0xffff;
      if (uVar5 < 8) {
        *(undefined4 *)(param_1 + 0xc) = 1;
      }
      else {
        *(int *)(param_1 + 0xc) = (int)(local_166 & 0xffff) >> 3;
      }
    }
    uVar3 = *(int *)(param_1 + 0xc) * local_174[1] + 7;
    *(uint *)(param_1 + 0x18) = uVar3 & 0xfffffff8;
    if (uVar5 == 1) {
      *(int *)(param_1 + 0x18) = (int)uVar3 >> 3;
    }
    pvVar4 = operator_new(local_174[2] * *(int *)(param_1 + 0x18) + 7);
    *(void **)(param_1 + 0x1c) = pvVar4;
    uVar3 = (int)pvVar4 + 7U & 0xfffffff8;
    *(uint *)(param_1 + 0x20) = uVar3;
    uVar2 = FUN_0040eb60(local_14c,uVar3,0xffffffff);
    local_4 = 0xffffffff;
    FUN_00426f80();
  }
  else {
    local_4 = 0xffffffff;
    FUN_00426f80();
    uVar2 = 0;
  }
  ExceptionList = local_c;
  return uVar2;
}


