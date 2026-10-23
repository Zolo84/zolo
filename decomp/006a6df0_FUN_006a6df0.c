// FUN_006a6df0 @ 6a6df0 size=78

void __fastcall FUN_006a6df0(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x1b4))();
  iVar2 = (**(code **)(*piVar1 + 4))();
  if (iVar2 < 1) {
    (**(code **)(*param_1 + 0xcc))();
    return;
  }
  FUN_006a6a20();
  uVar4 = 0;
  uVar3 = _rand();
  uVar3 = uVar3 & 0x80000007;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
  }
  FUN_006ae0d0(uVar3 + 0xc,uVar4);
  return;
}


