// FUN_00586250 @ 586250 size=155

void __thiscall FUN_00586250(int param_1,undefined2 *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  
  piVar3 = DAT_00d615e4;
  do {
    if (piVar3 == (int *)0x0) {
      *param_2 = DAT_0088f28c;
      *(undefined4 *)(param_2 + 1) = DAT_0088f28e;
      return;
    }
    piVar1 = (int *)piVar3[2];
    iVar2 = *piVar3;
    cVar4 = FUN_00584e20(*(undefined4 *)(*(int *)(param_1 + 0x3b2c) + 6));
  } while (((cVar4 != '\x01') || (cVar4 = FUN_00584e20(param_3), cVar4 != '\x01')) &&
          ((cVar4 = FUN_00584e20(*(undefined4 *)(*(int *)(param_1 + 0x3b2c) + 6)), piVar3 = piVar1,
           cVar4 != '\x01' || (cVar4 = FUN_00584e20(param_3), cVar4 != '\x01'))));
  *param_2 = *(undefined2 *)(iVar2 + 0xc);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(iVar2 + 0xe);
  return;
}


