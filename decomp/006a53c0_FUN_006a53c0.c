// FUN_006a53c0 @ 6a53c0 size=40

void __fastcall FUN_006a53c0(int *param_1)

{
  int iVar1;
  
  FUN_006a3940();
  iVar1 = (**(code **)(*param_1 + 0xe0))();
  *(int *)(iVar1 + 0x86) = *(int *)(iVar1 + 0x86) + 1;
  *(undefined1 *)((int)param_1 + 0xbe) = 0;
  return;
}


