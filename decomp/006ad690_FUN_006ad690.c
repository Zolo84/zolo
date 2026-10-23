// FUN_006ad690 @ 6ad690 size=84

void FUN_006ad690(int param_1,code *param_2,undefined4 param_3)

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
        (*param_2)(param_3);
        piVar2 = (int *)piVar2[2];
      }
    }
  }
  return;
}


