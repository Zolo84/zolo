// FUN_006d8280 @ 6d8280 size=104

undefined4 __fastcall FUN_006d8280(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(*(int *)(param_1 + 0x2220e) + 8);
  if (puVar3 != (undefined4 *)0x0) {
    do {
      (**(code **)(*(int *)(param_1 + 0x221e8) + 0x18))(*puVar3);
      piVar2 = (int *)FUN_006436d0(*puVar3);
      (**(code **)(*piVar2 + 0x50))();
      puVar3 = (undefined4 *)puVar3[2];
    } while (puVar3 != (undefined4 *)0x0);
  }
  iVar1 = *(int *)(param_1 + 0x2220e);
  if (iVar1 != 0) {
    FUN_006d65d0();
    FUN_00796cd8(iVar1);
  }
  *(undefined4 *)(param_1 + 0x2220e) = 0;
  return 1;
}


