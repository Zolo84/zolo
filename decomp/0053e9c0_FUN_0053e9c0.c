// FUN_0053e9c0 @ 53e9c0 size=57

void __fastcall FUN_0053e9c0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x10);
  while (piVar4 != (int *)0x0) {
    piVar1 = (int *)piVar4[2];
    puVar2 = (undefined4 *)*piVar4;
    piVar4 = piVar1;
    if ((puVar2 != (undefined4 *)0x0) && (iVar3 = puVar2[2], puVar2[2] = iVar3 + -1, iVar3 + -1 < 1)
       ) {
      (**(code **)*puVar2)(1);
    }
  }
  (**(code **)(*(int *)(param_1 + 0xc) + 0x10))();
  return;
}


