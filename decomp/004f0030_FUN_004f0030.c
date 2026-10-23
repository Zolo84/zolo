// FUN_004f0030 @ 4f0030 size=39

void __fastcall FUN_004f0030(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int **)((int)param_1 + 0x2a6) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0x2a6) + 0x44))();
    return;
  }
  iVar1 = *param_1;
  uVar2 = FUN_0051b230();
  (**(code **)(iVar1 + 0x48))(uVar2);
  return;
}


