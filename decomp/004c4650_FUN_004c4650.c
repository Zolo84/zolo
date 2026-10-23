// FUN_004c4650 @ 4c4650 size=234

void __fastcall FUN_004c4650(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  piVar1 = *(int **)(param_1 + 4);
  piVar2 = (int *)*piVar1;
  if (*(int *)(param_1 + 0xc) == 0) {
    while (piVar2 != piVar1) {
      FUN_004c54b0();
      FUN_004c4be0(local_4,piVar2);
    }
  }
  else {
    piVar2 = (int *)piVar1[1];
    if ((int *)piVar1[1] != DAT_008e8328) {
      do {
        FUN_004c4fe0(piVar2[2]);
        piVar1 = (int *)*piVar2;
        FUN_00796cd8(piVar2);
        piVar2 = piVar1;
      } while (piVar1 != DAT_008e8328);
    }
    *(int **)(*(int *)(param_1 + 4) + 4) = DAT_008e8328;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
    *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
    FUN_004c48a0(local_8);
  }
  FUN_00796cd8(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_00798acc();
  piVar1 = DAT_008e8328;
  DAT_008e832c = DAT_008e832c + -1;
  piVar2 = (int *)0x0;
  if (DAT_008e832c == 0) {
    DAT_008e8328 = (int *)0x0;
    piVar2 = piVar1;
  }
  FUN_00798b68();
  if (piVar2 != (int *)0x0) {
    FUN_00796cd8(piVar2);
  }
  return;
}


