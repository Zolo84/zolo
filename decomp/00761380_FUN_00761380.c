// FUN_00761380 @ 761380 size=147

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00761380(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  do {
    fVar1 = _DAT_007e3380;
    if (iVar6 == 0x20) {
      fVar1 = _DAT_00d590d4;
    }
    piVar4 = (int *)(param_1 + 0xe);
    iVar3 = iVar6 * 10;
    iVar7 = 7;
    do {
      iVar5 = *piVar4;
      piVar4 = piVar4 + 1;
      iVar5 = iVar5 + iVar3;
      iVar3 = iVar3 + 0x168;
      iVar7 = iVar7 + -1;
      fVar1 = fVar1 + (float)(&DAT_00d546cc)[iVar5];
    } while (iVar7 != 0);
    switch(iVar6) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 0xe:
    case 0x1c:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
      break;
    default:
      fVar2 = fVar1 + _DAT_007e3374;
      fVar1 = _DAT_007e46cc;
      if ((_DAT_007e46cc <= fVar2) && (fVar1 = fVar2, _DAT_007e4090 < fVar2)) {
        fVar1 = _DAT_007e4090;
      }
    }
    *(float *)(param_1 + 0x2a + iVar6 * 4) = fVar1;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x24);
  return;
}


