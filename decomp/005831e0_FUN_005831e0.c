// FUN_005831e0 @ 5831e0 size=40

int __thiscall FUN_005831e0(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (param_2 * 5 + -500) * 4;
  if (iVar1 < -0x76c) {
    iVar1 = -10000;
  }
  (**(code **)(*param_1 + 0x14))(iVar1);
  return iVar1;
}


