// FUN_0043e110 @ 43e110 size=149

undefined4 __fastcall FUN_0043e110(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_EBX;
  
  iVar3 = *(int *)(param_1 + 0x1c);
  iVar4 = *(int *)(param_1 + 0x18);
  iVar1 = **(int **)(param_1 + 0x60);
  iVar2 = FUN_00415be0();
  iVar3 = FUN_00415bd0((iVar3 - iVar2) + -8);
  (**(code **)(iVar1 + 0x18))(iVar4 / 2 - iVar3 / 2);
  (**(code **)(**(int **)(param_1 + 0x60) + 0x10))(unaff_EBX);
  iVar3 = **(int **)(param_1 + 0x60);
  iVar4 = FUN_00415be0();
  iVar4 = FUN_00415bd0((*(int *)(param_1 + 0x24) - iVar4) + -8 + *(int *)(param_1 + 0x1c));
  (**(code **)(iVar3 + 0x18))((*(int *)(param_1 + 0x18) / 2 + *(int *)(param_1 + 0x20)) - iVar4 / 2)
  ;
  FUN_004424d0(unaff_EBX);
  return 0;
}


