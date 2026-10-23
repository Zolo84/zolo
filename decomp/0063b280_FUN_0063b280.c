// FUN_0063b280 @ 63b280 size=126

undefined4 __thiscall FUN_0063b280(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = 0;
  puVar4 = (undefined4 *)(param_1 + 0x88);
  while( true ) {
    iVar2 = FUN_00428460(param_1 + 0x7e);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar2 + -8;
    }
    if (*(int *)(iVar2 + 0x13a) <= iVar5) break;
    FUN_00428460(param_1 + 0x7e);
    iVar2 = FUN_0075a0f0(iVar5);
    cVar1 = (**(code **)(*(int *)*puVar4 + 0x20))(param_2,param_3);
    if (cVar1 != '\0') {
      uVar3 = FUN_0075bde0(*(undefined4 *)(iVar2 + 0x16));
      return uVar3;
    }
    iVar5 = iVar5 + 1;
    puVar4 = puVar4 + 1;
  }
  return 0;
}


