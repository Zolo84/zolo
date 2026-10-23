// FUN_0044ae20 @ 44ae20 size=58

void __thiscall FUN_0044ae20(int param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = DAT_00877554;
  if ((param_3 <= DAT_00877554) && (iVar1 = param_3, param_3 < 0)) {
    iVar1 = 0;
  }
  *param_2 = *(undefined2 *)(param_1 + 0x3674 + iVar1 * 6);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + iVar1 * 6 + 0x3676);
  return;
}


