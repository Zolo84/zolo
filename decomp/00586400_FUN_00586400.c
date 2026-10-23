// FUN_00586400 @ 586400 size=215

undefined4 FUN_00586400(int param_1,undefined4 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = DAT_00d61608;
  do {
    do {
      if (piVar4 == (int *)0x0) {
        return 0;
      }
      piVar1 = (int *)piVar4[2];
      iVar2 = *piVar4;
      if ((((*(char *)(iVar2 + 0x138b4) == '\x01') && (*(char *)(iVar2 + 0x138b5) == '\0')) &&
          (*(int *)(iVar2 + 0x1c) == param_3._2_4_)) && (*(short *)(iVar2 + 0x1a) == (short)param_3)
         ) {
        piVar4 = *(int **)(param_1 + 4);
        while (piVar4 != (int *)0x0) {
          piVar3 = (int *)piVar4[2];
          iVar5 = *piVar4;
          piVar4 = piVar3;
          if ((*(int *)(iVar2 + 0x20) == iVar5) &&
             (iVar5 = FUN_00584c90(), *(int *)(iVar2 + 0x24) == iVar5)) {
            return 1;
          }
        }
      }
      piVar4 = piVar1;
    } while (((*(char *)(iVar2 + 0x138b4) != '\0') || (*(char *)(iVar2 + 0x138b5) != '\x01')) ||
            ((*(int *)(iVar2 + 0x1c) != param_3._2_4_ ||
             (*(short *)(iVar2 + 0x1a) != (short)param_3))));
    piVar1 = *(int **)(param_1 + 4);
    while (piVar1 != (int *)0x0) {
      piVar3 = (int *)piVar1[2];
      iVar5 = *piVar1;
      piVar1 = piVar3;
      if ((*(int *)(iVar2 + 0x24) == iVar5) &&
         (iVar5 = FUN_00584c90(), *(int *)(iVar2 + 0x20) == iVar5)) {
        return 1;
      }
    }
  } while( true );
}


