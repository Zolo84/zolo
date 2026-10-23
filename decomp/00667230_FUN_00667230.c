// FUN_00667230 @ 667230 size=167

int __thiscall FUN_00667230(int param_1,int param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  float10 fVar8;
  float local_8;
  int local_4;
  
  local_8 = 9999999.0;
  local_4 = 0;
  FUN_006a9d50();
  piVar7 = *(int **)(param_1 + 0x6a);
  if (piVar7 == (int *)0x0) {
    return 0;
  }
  do {
    piVar1 = (int *)piVar7[2];
    iVar2 = *piVar7;
    fVar8 = (float10)FUN_0044a9c0(*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(iVar2 + 0xc));
    fVar4 = local_8;
    iVar5 = local_4;
    if (fVar8 < (float10)local_8) {
      iVar3 = *(int *)(iVar2 + 0x26);
      do {
        while( true ) {
          fVar4 = local_8;
          iVar5 = local_4;
          if (iVar3 == 0) goto LAB_006672ba;
          iVar3 = *(int *)(iVar3 + 8);
          fVar4 = (float)fVar8;
          iVar5 = iVar2;
          if (param_3 != '\0') break;
          iVar6 = FUN_004fccd0();
          if (iVar6 == 0) goto LAB_006672ba;
        }
        iVar6 = FUN_004fccd0();
      } while (iVar6 != 2);
    }
LAB_006672ba:
    local_4 = iVar5;
    local_8 = fVar4;
    piVar7 = piVar1;
    if (piVar1 == (int *)0x0) {
      return local_4;
    }
  } while( true );
}


