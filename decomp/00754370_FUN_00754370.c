// FUN_00754370 @ 754370 size=45

undefined4 * __thiscall FUN_00754370(int param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  if ((undefined4 *)puVar1[1] != DAT_00d4be04) {
    puVar2 = (undefined4 *)puVar1[1];
    do {
      if (*param_2 < (uint)puVar2[3]) {
        puVar3 = (undefined4 *)*puVar2;
        puVar1 = puVar2;
      }
      else {
        puVar3 = (undefined4 *)puVar2[2];
      }
      puVar2 = puVar3;
    } while (puVar3 != DAT_00d4be04);
  }
  return puVar1;
}


