// FUN_006ad820 @ 6ad820 size=87

void FUN_006ad820(int param_1,code *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  
  cVar3 = FUN_0042e980();
  if (cVar3 != '\0') {
    piVar2 = *(int **)((int)&DAT_00d12704 + param_1 * 0x12);
    while (piVar2 != (int *)0x0) {
      if (*piVar2 == 0) {
        piVar1 = (int *)piVar2[2];
        FUN_006add20(piVar2);
        piVar2 = piVar1;
      }
      else {
        (*param_2)(param_3,param_4);
        piVar2 = (int *)piVar2[2];
      }
    }
  }
  return;
}


