// FUN_00587120 @ 587120 size=59

void __thiscall FUN_00587120(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  
  cVar2 = FUN_00584e20(*(undefined4 *)((int)param_1 + 10));
  if (cVar2 == '\x01') {
    uVar1 = *(undefined4 *)(param_2 + 0x22);
    param_1[1] = param_2 + 0x2a;
    *param_1 = uVar1;
    return;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x26);
  param_1[1] = param_2 + 0x1d3d2;
  *param_1 = uVar1;
  return;
}


