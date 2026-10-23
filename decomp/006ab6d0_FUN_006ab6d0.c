// FUN_006ab6d0 @ 6ab6d0 size=401

void __thiscall FUN_006ab6d0(int *param_1,int param_2)

{
  undefined4 uVar1;
  int3 iVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  undefined1 uVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined1 auStack_4 [2];
  undefined2 local_2;
  
  cVar4 = '\0';
  _auStack_4 = 0;
  cVar3 = (**(code **)(*(int *)(param_2 + 0x22e) + 8))();
  if ((cVar3 != '\0') || (cVar3 = FUN_0051a4c0(), cVar3 == '\0')) {
    cVar3 = (**(code **)(*(int *)(param_2 + 0x22e) + 8))();
    if (cVar3 == '\0') {
      FUN_00402500(0,s_Check_this_out__00869614);
    }
    return;
  }
  uVar1 = *(undefined4 *)(param_2 + 500);
  FUN_00524610(0);
  iVar7 = (**(code **)(*param_1 + 0x1a4))();
  if (iVar7 != 0) {
    piVar8 = (int *)(**(code **)(*param_1 + 0x1a4))();
    cVar4 = (**(code **)(*piVar8 + 0x18))(param_2);
  }
  iVar7 = (**(code **)(*param_1 + 0x1c4))();
  iVar2 = _auStack_4;
  if (iVar7 != 0) {
    piVar8 = (int *)(**(code **)(*param_1 + 0x1c4))();
    bVar5 = (**(code **)(*piVar8 + 0x18))(param_2);
    _auStack_4 = (uint3)bVar5 << 0x10;
    iVar2 = _auStack_4;
  }
  local_2 = (ushort)(byte)((uint3)iVar2 >> 0x10);
  iVar7 = (**(code **)(*param_1 + 0x1b4))();
  if (iVar7 != 0) {
    piVar8 = (int *)(**(code **)(*param_1 + 0x1b4))();
    uVar6 = (**(code **)(*piVar8 + 0x18))(param_2);
    _auStack_4 = CONCAT13(uVar6,iVar2);
  }
  piVar8 = (int *)FUN_0051b230();
  iVar7 = *(int *)(param_2 + 0x248);
  uVar9 = (**(code **)(*piVar8 + 0xc))();
  uVar9 = (**(code **)(*(int *)(iVar7 + 0xe) + 0xc))(uVar9);
  FUN_00458570(s_Unit___d___s__is_halted_in__s__00869624,*(undefined4 *)(param_2 + 0x1a),uVar9);
  FUN_005bacbb(param_2);
  if (*(char *)(param_2 + 0x17d) != '\0') {
    return;
  }
  if (*(int *)(param_2 + 500) != 0) {
    return;
  }
  if (cVar4 != '\0') {
    (**(code **)(*param_1 + 0x1a4))();
    FUN_00459df0(param_2);
  }
  if ((char)local_2 != '\0') {
    (**(code **)(*param_1 + 0x1c4))();
    FUN_00459df0(param_2);
  }
  if (local_2._1_1_ != '\0') {
    (**(code **)(*param_1 + 0x1b4))();
    FUN_00459df0(param_2);
  }
  FUN_00524610(uVar1);
  return;
}


