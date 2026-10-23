// FUN_00508840 @ 508840 size=39

void __fastcall FUN_00508840(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int **)((int)param_1 + 0x2ae) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0x2ae) + 0x44))();
    return;
  }
  iVar1 = *param_1;
  uVar2 = FUN_0051b230();
  (**(code **)(iVar1 + 0x48))(uVar2);
  return;
}


