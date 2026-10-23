// FUN_00748530 @ 748530 size=222

void __fastcall FUN_00748530(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined1 local_4 [4];
  
  piVar1 = *(int **)(param_1 + 4);
  piVar2 = (int *)*piVar1;
  if (*(int *)(param_1 + 0xc) == 0) {
    while (piVar2 != piVar1) {
      FUN_0074a520();
      FUN_00749060(local_4,piVar2);
    }
  }
  else {
    piVar2 = (int *)piVar1[1];
    if ((int *)piVar1[1] != DAT_00d4bdfc) {
      do {
        FUN_00749460(piVar2[2]);
        piVar1 = (int *)*piVar2;
        FUN_00796cd8(piVar2);
        piVar2 = piVar1;
      } while (piVar1 != DAT_00d4bdfc);
    }
    *(int **)(*(int *)(param_1 + 4) + 4) = DAT_00d4bdfc;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
    *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  }
  FUN_00796cd8(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_00798acc();
  piVar1 = DAT_00d4bdfc;
  DAT_00d4bdf8 = DAT_00d4bdf8 + -1;
  piVar2 = (int *)0x0;
  if (DAT_00d4bdf8 == 0) {
    DAT_00d4bdfc = (int *)0x0;
    piVar2 = piVar1;
  }
  FUN_00798b68();
  if (piVar2 != (int *)0x0) {
    FUN_00796cd8(piVar2);
  }
  return;
}


