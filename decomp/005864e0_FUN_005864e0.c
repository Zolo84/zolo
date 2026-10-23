// FUN_005864e0 @ 5864e0 size=156

undefined4 FUN_005864e0(int param_1,int param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  piVar3 = DAT_00d61608;
  do {
    do {
      if (piVar3 == (int *)0x0) {
        return 0;
      }
      piVar1 = (int *)piVar3[2];
      iVar2 = *piVar3;
      piVar3 = piVar1;
    } while ((((*(char *)(iVar2 + 0x138b4) != '\x01') || (*(char *)(iVar2 + 0x138b5) != '\x01')) ||
             (*(int *)(iVar2 + 0x1c) != param_3._2_4_)) ||
            ((*(short *)(iVar2 + 0x1a) != (short)param_3 ||
             (piVar6 = *(int **)(param_1 + 4), piVar6 == (int *)0x0))));
    do {
      if (*(int **)(param_2 + 4) != (int *)0x0) {
        piVar4 = piVar1;
        piVar5 = *(int **)(param_2 + 4);
        do {
          if (((*(int *)(iVar2 + 0x24) == *piVar6) &&
              (piVar4 = *(int **)(iVar2 + 0x20), piVar4 == (int *)*piVar5)) ||
             ((*(int *)(iVar2 + 0x24) == *piVar5 && (*(int *)(iVar2 + 0x20) == *piVar6)))) {
            return CONCAT31((int3)((uint)piVar4 >> 8),1);
          }
          piVar5 = (int *)piVar5[2];
        } while (piVar5 != (int *)0x0);
      }
      piVar6 = (int *)piVar6[2];
    } while (piVar6 != (int *)0x0);
  } while( true );
}


