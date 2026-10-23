// FUN_0044ae60 @ 44ae60 size=52

void __thiscall FUN_0044ae60(int param_1,int param_2,undefined4 param_3,undefined2 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = DAT_00877554;
  if ((param_2 <= DAT_00877554) && (iVar2 = param_2, param_2 < 0)) {
    iVar2 = 0;
  }
  puVar1 = (undefined4 *)(param_1 + 0x3674 + iVar2 * 6);
  *puVar1 = param_3;
  *(undefined2 *)(puVar1 + 1) = param_4;
  return;
}


