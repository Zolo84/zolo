// FUN_00652fe0 @ 652fe0 size=110

void __fastcall FUN_00652fe0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*(int *)(param_1 + 0x21e7a) + 4))();
  if (0 < iVar2) {
    puVar1 = (undefined4 *)**(int **)(param_1 + 0x21e7e);
    (**(code **)(*(int *)(param_1 + 0x21e7a) + 0x1c))(*(int **)(param_1 + 0x21e7e));
    DAT_00a98440 = *puVar1;
    DAT_00a98444 = puVar1[1];
    DAT_00a98448 = puVar1[2];
    FUN_004dcb20(*(undefined4 *)(param_1 + 6),*puVar1);
    FUN_004d87c0();
    FUN_00654700();
    FUN_00796cd8(puVar1);
  }
  return;
}


