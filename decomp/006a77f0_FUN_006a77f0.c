// FUN_006a77f0 @ 6a77f0 size=189

void __thiscall FUN_006a77f0(int *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  
  cVar2 = (**(code **)(*(int *)(param_2 + 0x22e) + 8))();
  if (cVar2 == '\0') {
    piVar3 = (int *)FUN_0051b230();
    iVar1 = *(int *)((int)param_1 + 10);
    uVar4 = (**(code **)(*piVar3 + 0xc))();
    uVar4 = (**(code **)(*(int *)(iVar1 + 0xe) + 0xc))(uVar4);
    FUN_00458570(s_AITransport___d__Army___d___s__m_008692e4,*(undefined4 *)((int)param_1 + 6),
                 *(undefined4 *)(param_2 + 0x1a),uVar4);
    return;
  }
  piVar3 = (int *)FUN_0051b230();
  iVar1 = *(int *)((int)param_1 + 10);
  uVar4 = (**(code **)(*piVar3 + 0xc))();
  uVar4 = (**(code **)(*(int *)(iVar1 + 0xe) + 0xc))(uVar4);
  FUN_00458570(s_AITransport___d__Army___d___s__h_008692b0,*(undefined4 *)((int)param_1 + 6),
               *(undefined4 *)(param_2 + 0x1a),uVar4);
  if ((char)param_1[0x30] != '\0') {
    if (*(int *)(param_2 + 0xc) != 0) {
      FUN_006a79c0();
      return;
    }
    FUN_006a7d40();
    return;
  }
  (**(code **)(*param_1 + 200))();
  return;
}


