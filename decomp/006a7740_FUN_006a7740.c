// FUN_006a7740 @ 6a7740 size=59

void __fastcall FUN_006a7740(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  *(undefined1 *)(param_1 + 4) = 1;
  FUN_006a9ef0(*(undefined4 *)((int)param_1 + 0x12),param_1 + 0x24);
  piVar2 = param_1 + 0x29;
  uVar1 = (**(code **)(*param_1 + 0xe0))(piVar2);
  FUN_006a9ef0(uVar1,piVar2);
  FUN_006a6280();
  return;
}


