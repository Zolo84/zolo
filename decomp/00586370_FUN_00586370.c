// FUN_00586370 @ 586370 size=141

undefined4 FUN_00586370(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = DAT_00d61608;
  do {
    if (piVar3 == (int *)0x0) {
      return 0;
    }
    piVar1 = (int *)piVar3[2];
    iVar2 = *piVar3;
    piVar3 = piVar1;
  } while ((((*(char *)(iVar2 + 0x138b4) != '\0') || (*(char *)(iVar2 + 0x138b5) != '\0')) ||
           (*(int *)(iVar2 + 0x1c) != param_3._2_4_)) ||
          ((*(short *)(iVar2 + 0x1a) != (short)param_3 ||
           (((iVar4 = FUN_00584c90(), *(int *)(iVar2 + 0x20) != iVar4 ||
             (iVar4 = FUN_00584c90(), *(int *)(iVar2 + 0x24) != iVar4)) &&
            ((iVar4 = FUN_00584c90(), *(int *)(iVar2 + 0x20) != iVar4 ||
             (iVar4 = FUN_00584c90(), *(int *)(iVar2 + 0x24) != iVar4))))))));
  return 1;
}


