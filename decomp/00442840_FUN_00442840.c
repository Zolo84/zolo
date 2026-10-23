// FUN_00442840 @ 442840 size=260

void FUN_00442840(int param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int *piVar6;
  short unaff_retaddr;
  undefined4 auStack_74 [2];
  int local_6c [7];
  short *psStack_50;
  
  piVar2 = *(int **)(*(int *)(param_1 + 0x62) + 0x2c);
  piVar6 = local_6c;
  for (iVar4 = 0x1b; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  (**(code **)(*piVar2 + 0x58))(piVar2,local_6c);
  auStack_74[0] = 0x6c;
  iVar4 = 1;
  do {
    iVar3 = (**(code **)(*piVar2 + 100))(piVar2,0,auStack_74,1,0);
    if (iVar3 == -0x7789fe3e) {
      (**(code **)(*piVar2 + 0x6c))(piVar2);
    }
    else {
      if (((iVar3 == -0x7789ff7e) || (iVar3 == -0x7ff8ffa9)) || (iVar3 == -0x7ff8fff2)) {
        FUN_00405ad0(s_Surface_lock_failed__0082edd8);
        return;
      }
      if (iVar3 == 0) {
        iVar4 = local_6c[1];
        iVar3 = local_6c[1];
        psVar5 = psStack_50;
        if (0 < local_6c[1]) {
          do {
            do {
              sVar1 = *psStack_50;
              if (((sVar1 != 0) && (sVar1 != 0x2104)) && (sVar1 != 0x7e0)) {
                *psStack_50 = unaff_retaddr;
              }
              psStack_50 = psStack_50 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
            psStack_50 = psVar5 + local_6c[1];
            iVar3 = iVar3 + -1;
            iVar4 = local_6c[1];
            psVar5 = psStack_50;
          } while (iVar3 != 0);
        }
        (**(code **)(*piVar2 + 0x80))(piVar2,0);
        return;
      }
    }
    iVar4 = iVar4 + 1;
    if (10 < iVar4) {
      return;
    }
  } while( true );
}


