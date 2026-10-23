// FUN_007542c0 @ 7542c0 size=60

void __thiscall FUN_007542c0(int param_1,int *param_2,uint *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_1 + 4);
  if ((undefined4 *)puVar3[1] != DAT_00d4be04) {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_3) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (puVar2 != DAT_00d4be04);
    *param_2 = (int)puVar3;
    return;
  }
  *param_2 = (int)puVar3;
  return;
}


