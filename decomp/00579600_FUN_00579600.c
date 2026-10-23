// FUN_00579600 @ 579600 size=82

undefined4 __thiscall FUN_00579600(int param_1,uint param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  param_4 = param_4 >> 1;
  uVar3 = param_3 + param_4;
  if (param_2 < uVar3) {
    puVar2 = (undefined4 *)(param_1 + 4);
    uVar3 = param_3;
  }
  else {
    puVar2 = (undefined4 *)(param_1 + 8);
  }
  if (param_4 == 1) {
    uVar1 = *(undefined4 *)*puVar2;
    FUN_00796cd8((undefined4 *)*puVar2);
    *puVar2 = 0;
    return uVar1;
  }
  uVar1 = FUN_00579600(param_2,uVar3,param_4);
  return uVar1;
}


