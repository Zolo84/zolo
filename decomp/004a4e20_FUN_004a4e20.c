// FUN_004a4e20 @ 4a4e20 size=408

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_004a4e20(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  float fVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  float10 fVar7;
  
  if (*(int *)(param_4 + 0x3d8) != 0) {
    uVar4 = FUN_006ac760();
    cVar3 = FUN_0044b280(uVar4);
    if (cVar3 != '\0') {
      if ((float10)*(float *)(param_2 + 0x14) == (float10)_DAT_007e3380) {
        return (float10)_DAT_007e3380;
      }
      _DAT_008ca0f8 = _DAT_007e3380;
      fVar7 = (float10)FUN_004ecea0();
      _DAT_008ca0fc = (float)fVar7;
      if ((float10)_DAT_007e5dd0 < fVar7) {
        cVar3 = FUN_00455130();
        if (cVar3 == '\0') {
          iVar5 = *(int *)(param_1 + 0x120);
          if (*(float *)(iVar5 + 0x27c) == _DAT_007e3380) goto LAB_004a4fab;
          _DAT_008ca0f4 = *(float *)(iVar5 + 0x27c);
          fVar7 = (float10)FUN_004ed1a0();
          _DAT_008ca104 = (float)(fVar7 / (float10)*(float *)(iVar5 + 0x274));
        }
        else {
          _DAT_008ca0f4 = 1.0;
          _DAT_008ca104 = 0.0;
        }
        piVar6 = (int *)(param_4 + 0x1ca);
        iVar5 = 0;
        do {
          _DAT_008ca100 = *(float *)(*piVar6 + 0x10) - *(float *)(*piVar6 + 0x14);
          if (_DAT_007e3380 < _DAT_008ca100) {
            switch(iVar5) {
            case 0:
              fVar2 = _DAT_008ca100 * _DAT_007e67d4;
              break;
            case 1:
            case 2:
            case 5:
            case 6:
              fVar2 = _DAT_008ca100;
              break;
            case 3:
            case 7:
              fVar2 = _DAT_008ca100 * _DAT_007e384c;
              break;
            default:
              goto switchD_004a4f0e_caseD_4;
            case 8:
              fVar2 = _DAT_008ca100 * _DAT_007e6f28;
              break;
            case 9:
              fVar2 = _DAT_008ca100 * _DAT_007e6f24;
            }
            _DAT_008ca0f8 = fVar2 + _DAT_008ca0f8;
          }
switchD_004a4f0e_caseD_4:
          piVar6 = piVar6 + 1;
          iVar1 = iVar5 + 2;
          iVar5 = iVar5 + 1;
        } while (iVar1 < 0xb);
        if (_DAT_007e3380 < _DAT_008ca0f8) {
          _DAT_008ca0f8 =
               ((_DAT_008ca0fc * _DAT_008ca0f8 + _DAT_008ca0fc * _DAT_008ca0f8) - _DAT_008ca104) *
               _DAT_008ca0f4;
        }
      }
      return (float10)_DAT_008ca0f8;
    }
  }
LAB_004a4fab:
  return (float10)_DAT_007e3380;
}


