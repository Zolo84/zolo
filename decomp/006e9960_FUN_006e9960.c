// FUN_006e9960 @ 6e9960 size=102

void __fastcall FUN_006e9960(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = (**(code **)(*param_1 + 4))();
  if (0 < iVar2) {
    iVar2 = **(int **)(*(int *)((int)param_1 + 0x26) + 4);
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)(iVar2 + -0x12);
    }
    (**(code **)(*param_1 + 0x18))(*(undefined4 *)((int)puVar3 + 0x5a));
    if (puVar3 == (undefined4 *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)puVar3 + 0x12;
    }
    (**(code **)(**(int **)((int)param_1 + 0x26) + 0x18))(iVar2);
    puVar1 = *(undefined4 **)((int)puVar3 + 0x5a);
    if (puVar1 != (undefined4 *)0x0) {
      FUN_00796cd8(*puVar1);
      FUN_00796cd8(puVar1);
    }
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(1);
    }
  }
  return;
}


