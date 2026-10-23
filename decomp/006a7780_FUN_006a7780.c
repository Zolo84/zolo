// FUN_006a7780 @ 6a7780 size=109

void __fastcall FUN_006a7780(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  FUN_006a62d0();
  iVar1 = (**(code **)(*param_1 + 0xe0))();
  if (*(char *)(iVar1 + 0xe) != '\0') {
    piVar3 = param_1 + 0x29;
    iVar1 = (**(code **)(param_1[0x29] + 4))();
    if (0 < iVar1) {
      uVar2 = (**(code **)(*param_1 + 0xe0))(piVar3);
      FUN_006a9ef0(uVar2,piVar3);
    }
    piVar3 = param_1 + 0x24;
    iVar1 = (**(code **)(param_1[0x24] + 4))();
    if (0 < iVar1) {
      uVar2 = (**(code **)(*param_1 + 0xe0))(piVar3);
      FUN_006a9ef0(uVar2,piVar3);
    }
  }
  return;
}


