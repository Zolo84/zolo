// FUN_005830c0 @ 5830c0 size=275

void __fastcall FUN_005830c0(int *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (DAT_00dc4b88 != '\x01') {
    iVar5 = *(int *)((int)param_1 + 0x7a);
    iVar3 = param_1[7];
    if (iVar5 < 1) {
      iVar5 = 0;
      if (DAT_00d0ca90 != 0) {
        cVar2 = FUN_0044beb0();
        iVar5 = 2 - (uint)(cVar2 != '\0');
      }
      iVar4 = (**(code **)(*(int *)((int)param_1 + 0x56) + 4))();
      if (iVar4 != 0) {
        iVar5 = 3;
      }
      iVar4 = (**(code **)(*(int *)((int)param_1 + iVar5 * 0x12 + 0x20) + 4))();
      if (iVar4 != 0) {
        iVar3 = _rand();
        iVar3 = iVar3 % iVar4;
        if (DAT_008576dc != '\0') {
          DAT_008576dc = '\0';
          iVar3 = 0;
        }
        piVar1 = *(int **)((int)param_1 + (iVar5 * 9 + 0x12) * 2);
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          piVar1 = (int *)piVar1[2];
        }
        iVar3 = *piVar1;
      }
    }
    else {
      iVar3 = (**(code **)(param_1[0x1a] + 4))();
      piVar1 = (int *)param_1[0x1b];
      for (iVar3 = iVar3 - iVar5; iVar3 != 0; iVar3 = iVar3 + -1) {
        piVar1 = (int *)piVar1[2];
      }
      iVar3 = *piVar1;
      *(int *)((int)param_1 + 0x7a) = iVar5 + -1;
    }
    if ((iVar3 != 0) && (iVar5 = FUN_007a6615(iVar3,&DAT_0082eeb4), iVar5 != 0)) {
      FUN_007a6429(iVar5);
      (**(code **)(*param_1 + 4))(iVar3,1);
      (**(code **)(*param_1 + 8))(0);
      iVar5 = (*(int *)(*DAT_00d12b40 + 0x376) + -100) * 0x14;
      if (iVar5 < -0x76c) {
        iVar5 = -10000;
      }
      (**(code **)(*param_1 + 0x14))(iVar5);
    }
  }
  return;
}


