// FUN_00748a20 @ 748a20 size=231

void __fastcall FUN_00748a20(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined1 local_4 [4];
  
  piVar1 = *(int **)(param_1 + 4);
  piVar2 = (int *)*piVar1;
  if (*(int *)(param_1 + 0xc) == 0) {
    while (piVar2 != piVar1) {
      FUN_0074a5d0();
      FUN_007497b0(local_4,piVar2);
    }
  }
  else {
    piVar2 = (int *)piVar1[1];
    if ((int *)piVar1[1] != DAT_00d4be04) {
      do {
        FUN_00749c20(piVar2[2]);
        piVar1 = (int *)*piVar2;
        FUN_0074ad40(0);
        FUN_00796cd8(piVar2);
        piVar2 = piVar1;
      } while (piVar1 != DAT_00d4be04);
    }
    *(int **)(*(int *)(param_1 + 4) + 4) = DAT_00d4be04;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
    *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  }
  FUN_00796cd8(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_00798acc();
  piVar1 = DAT_00d4be04;
  DAT_00d4be00 = DAT_00d4be00 + -1;
  piVar2 = (int *)0x0;
  if (DAT_00d4be00 == 0) {
    DAT_00d4be04 = (int *)0x0;
    piVar2 = piVar1;
  }
  FUN_00798b68();
  if (piVar2 != (int *)0x0) {
    FUN_00796cd8(piVar2);
  }
  return;
}


