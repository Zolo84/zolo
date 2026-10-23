// FUN_006a78c0 @ 6a78c0 size=230

void __thiscall FUN_006a78c0(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  iVar2 = (**(code **)(param_1[0x24] + 4))();
  if (iVar2 < 1) {
    (**(code **)(*param_1 + 0xcc))();
    return;
  }
  iVar2 = (**(code **)(param_1[0x29] + 4))();
  if (1 < iVar2) {
    FUN_006aaa60(param_2);
  }
  cVar1 = (**(code **)(*(int *)(param_2 + 0x22e) + 8))();
  if (cVar1 == '\0') {
    piVar3 = (int *)FUN_0051b230();
    iVar2 = *(int *)((int)param_1 + 10);
    uVar4 = (**(code **)(*piVar3 + 0xc))();
    uVar4 = (**(code **)(*(int *)(iVar2 + 0xe) + 0xc))(uVar4);
    FUN_00458570(s_AITransport___d__Fleet___d___s__m_00869344,*(undefined4 *)((int)param_1 + 6),
                 *(undefined4 *)(param_2 + 0x1a),uVar4);
    return;
  }
  piVar3 = (int *)FUN_0051b230();
  iVar2 = *(int *)((int)param_1 + 10);
  uVar4 = (**(code **)(*piVar3 + 0xc))();
  uVar4 = (**(code **)(*(int *)(iVar2 + 0xe) + 0xc))(uVar4);
  FUN_00458570(s_AITransport___d__Fleet___d___s__h_00869310,*(undefined4 *)((int)param_1 + 6),
               *(undefined4 *)(param_2 + 0x1a),uVar4);
  if ((char)param_1[0x30] != '\0') {
    FUN_006a79c0();
    return;
  }
  FUN_006a7b90();
  return;
}


