// FUN_004296a0 @ 4296a0 size=106

undefined8 __fastcall
FUN_004296a0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
            uint param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((((uint)param_3 & 7) != 0) && (((uint)param_3 & 7) != 4)) {
    puVar3 = param_3;
    for (uVar1 = param_5 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = *param_4;
      param_4 = param_4 + 1;
      puVar3 = puVar3 + 1;
    }
    for (param_5 = param_5 & 3; param_5 != 0; param_5 = param_5 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)param_4;
      param_4 = (undefined4 *)((int)param_4 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    return CONCAT44(param_2,param_3);
  }
  uVar1 = param_5 >> 2;
  puVar3 = param_3;
  if (uVar1 != 0) {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = *param_4;
      param_4 = param_4 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  iVar2 = 0;
  for (param_5 = param_5 & 3; param_5 != 0; param_5 = param_5 - 1) {
    *(undefined1 *)((int)puVar3 + iVar2) = *(undefined1 *)((int)param_4 + iVar2);
    iVar2 = iVar2 + 1;
  }
  return CONCAT44(param_2,param_3);
}


