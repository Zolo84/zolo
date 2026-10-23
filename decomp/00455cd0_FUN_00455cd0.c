// FUN_00455cd0 @ 455cd0 size=5840

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00455cd0(int param_1,float *param_2,int param_3,int *param_4,int param_5,short param_6,
            int *param_7,short *param_8)

{
  float fVar1;
  float fVar2;
  int iVar3;
  short *psVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  int *piVar8;
  float *pfVar9;
  uint uVar10;
  float10 fVar11;
  
  pfVar9 = param_2;
  if (param_3 == 0) {
    iVar7 = 0x16;
code_r0x00455d07:
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar9 = 0.0;
      pfVar9 = pfVar9 + 1;
    }
  }
  else {
    if (param_3 == 1) {
      iVar7 = 0x12;
      goto code_r0x00455d07;
    }
    if (param_3 == 2) {
      iVar7 = 0x15;
      goto code_r0x00455d07;
    }
  }
  if (param_4 != (int *)0x0) {
    if ((*(char *)((int)param_4 + 0x15f) != '\0') && (param_3 == 0)) {
      fVar11 = (float10)FUN_004fd510();
      *param_2 = (float)fVar11;
      param_2[1] = (float)param_4[0x3f];
      param_2[2] = (float)param_4[0xb5];
      param_2[3] = (float)param_4[0xb8];
      param_2[4] = (float)param_4[0xb7];
      param_2[5] = (float)param_4[0x46];
      param_2[6] = (float)param_4[0xb3];
      param_2[7] = (float)param_4[0xb4];
      param_2[8] = (float)param_4[0x45];
      param_2[9] = (float)param_4[0xb6];
      fVar11 = (float10)(**(code **)(*param_4 + 0x28))();
      param_2[10] = (float)fVar11;
      param_2[0xb] = (float)param_4[0x47];
      param_2[0xc] = (float)param_4[0xbe];
      param_2[0xd] = (float)param_4[0xba];
      param_2[0xe] = (float)param_4[0xbd];
      param_2[0xf] = (float)param_4[0xbc];
      param_2[0x10] = (float)param_4[0xbb];
      param_2[0x11] = (float)param_4[0xb9];
      param_2[0x12] = (float)param_4[0x42] * (float)param_4[0x3c] * _DAT_007e543c;
      param_2[0x13] = (float)param_4[0x43] * (float)param_4[0x3c] * _DAT_007e543c;
      param_2[0x14] = (float)param_4[0x48] + _DAT_007e3374;
      param_2[0x15] = (float)param_4[0x49] + _DAT_007e3374;
      if ((float10)param_2[0xc] < fVar11) {
        return;
      }
      param_2[0xc] = 0.0;
      return;
    }
    if (((char)param_4[0x58] != '\0') && (param_3 == 1)) {
      fVar11 = (float10)FUN_004fd510();
      *param_2 = (float)fVar11;
      param_2[1] = (float)param_4[0x3f];
      param_2[2] = (float)param_4[0x46];
      param_2[3] = (float)param_4[0xb8];
      param_2[4] = (float)param_4[0xb9];
      param_2[5] = (float)param_4[0xba];
      param_2[6] = (float)param_4[0xb7];
      param_2[7] = (float)param_4[0x45];
      param_2[8] = (float)param_4[0xb6];
      param_2[9] = (float)param_4[0xb5];
      param_2[10] = (float)param_4[0xb4];
      fVar11 = (float10)(**(code **)(*param_4 + 0x28))();
      param_2[0xb] = (float)fVar11;
      if ((float)param_4[0xbc] <= (float)param_4[0xbd]) {
        fVar1 = (float)param_4[0xbc];
      }
      else {
        fVar1 = (float)param_4[0xbd];
      }
      param_2[0xc] = fVar1;
      param_2[0xd] = (float)param_4[0xbb];
      param_2[0xe] = (float)param_4[0x42] * (float)param_4[0x3c] * _DAT_007e543c;
      param_2[0xf] = (float)param_4[0x43] * (float)param_4[0x3c] * _DAT_007e543c;
      param_2[0x10] = (float)param_4[0x48] + _DAT_007e3374;
      param_2[0x11] = (float)param_4[0x49] + _DAT_007e3374;
      return;
    }
    if (*(char *)((int)param_4 + 0x161) == '\0') {
      return;
    }
    if (param_3 != 2) {
      return;
    }
    fVar11 = (float10)FUN_004fd510();
    *param_2 = (float)fVar11;
    param_2[1] = (float)param_4[0x3f];
    param_2[2] = (float)param_4[0xb6] * _DAT_007e4088;
    param_2[3] = (float)param_4[0xb9];
    param_2[4] = (float)param_4[0xba];
    param_2[5] = (float)param_4[0xbb];
    param_2[6] = (float)param_4[0x46];
    param_2[7] = (float)param_4[0xbc];
    param_2[8] = (float)param_4[0xb8];
    param_2[9] = (float)param_4[0x45];
    param_2[10] = (float)param_4[0xb3];
    param_2[0xb] = (float)param_4[0xb5];
    param_2[0xc] = (float)param_4[0xb4];
    param_2[0xd] = (float)param_4[0xb7];
    fVar11 = (float10)(**(code **)(*param_4 + 0x28))();
    param_2[0xe] = (float)fVar11;
    param_2[0xf] = (float)param_4[0xbe];
    param_2[0x10] = (float)param_4[0xbd];
    param_2[0x11] = (float)param_4[0x42] * (float)param_4[0x3c] * _DAT_007e543c;
    param_2[0x12] = (float)param_4[0x43] * (float)param_4[0x3c] * _DAT_007e543c;
    param_2[0x13] = (float)param_4[0x48] + _DAT_007e3374;
    param_2[0x14] = (float)param_4[0x49] + _DAT_007e3374;
    return;
  }
  if (param_5 == 0x8c) {
    iVar7 = *param_7;
    if (iVar7 == 0) {
      return;
    }
    iVar3 = *(int *)((&DAT_00dbf99a)[iVar7] + 0x18);
    if ((iVar3 == 0) && (param_3 == 0)) {
      sVar6 = *param_8;
      if (sVar6 == -1) {
        sVar6 = -1;
        psVar4 = *(short **)(param_1 + 0x55c4 + iVar7 * 0x12);
        while (psVar4 != (short *)0x0) {
          if ((sVar6 < *psVar4) &&
             (cVar5 = (**(code **)(*(int *)(param_1 + iVar7 * 0x12 + 0x6970) + 0x24))
                                (CONCAT22((short)((uint)psVar4 >> 0x10),*psVar4)), cVar5 == '\0')) {
            sVar6 = *psVar4;
          }
          FUN_00458f40(&param_8,0);
        }
      }
      iVar7 = FUN_00789ce0(iVar7,(int)sVar6);
      if (iVar7 == 0) {
        return;
      }
      *param_2 = *(float *)(iVar7 + 0x24);
      param_2[1] = *(float *)(iVar7 + 0x28);
      param_2[2] = *(float *)(iVar7 + 0x4c);
      param_2[3] = *(float *)(iVar7 + 0x58);
      param_2[4] = *(float *)(iVar7 + 0x54);
      param_2[5] = *(float *)(iVar7 + 0x2c);
      param_2[6] = *(float *)(iVar7 + 0x44);
      param_2[7] = *(float *)(iVar7 + 0x48);
      param_2[8] = *(float *)(iVar7 + 0x30);
      param_2[9] = *(float *)(iVar7 + 0x50);
      param_2[10] = *(float *)(iVar7 + 0x18);
      param_2[0xc] = *(float *)(iVar7 + 0x70);
      param_2[0x11] = *(float *)(iVar7 + 0x5c);
      param_2[0x12] = *(float *)(iVar7 + 0x1c);
      param_2[0x13] = *(float *)(iVar7 + 0x20);
      iVar7 = *(int *)(param_1 + 0x48a0 + *param_7 * 4);
      if (iVar7 != 0) {
        *param_2 = *(float *)(iVar7 + 0x24) + *param_2;
        param_2[1] = *(float *)(iVar7 + 0x28) + param_2[1];
        param_2[2] = *(float *)(iVar7 + 0x4c) + param_2[2];
        param_2[3] = *(float *)(iVar7 + 0x58) + param_2[3];
        param_2[4] = *(float *)(iVar7 + 0x54) + param_2[4];
        param_2[5] = *(float *)(iVar7 + 0x2c) + param_2[5];
        param_2[6] = *(float *)(iVar7 + 0x44) + param_2[6];
        param_2[7] = *(float *)(iVar7 + 0x48) + param_2[7];
        param_2[8] = *(float *)(iVar7 + 0x30) + param_2[8];
        param_2[9] = *(float *)(iVar7 + 0x50) + param_2[9];
        param_2[10] = *(float *)(iVar7 + 0x18) + param_2[10];
        param_2[0xc] = *(float *)(iVar7 + 0x70) + param_2[0xc];
        param_2[0x11] = *(float *)(iVar7 + 0x5c) + param_2[0x11];
        param_2[0x12] = *(float *)(iVar7 + 0x1c) + param_2[0x12];
        param_2[0x13] = *(float *)(iVar7 + 0x20) + param_2[0x13];
      }
    }
    else {
      if ((iVar3 != 1) || (param_3 != 1)) {
        if (iVar3 != 2) {
          return;
        }
        if (param_3 != 2) {
          return;
        }
        sVar6 = *param_8;
        if (sVar6 == -1) {
          sVar6 = -1;
          for (psVar4 = *(short **)(param_1 + 0x55c4 + iVar7 * 0x12); psVar4 != (short *)0x0;
              psVar4 = *(short **)(psVar4 + 3)) {
            if ((sVar6 < *psVar4) &&
               (cVar5 = (**(code **)(*(int *)(param_1 + iVar7 * 0x12 + 0x6970) + 0x24))(*psVar4),
               cVar5 == '\0')) {
              sVar6 = *psVar4;
            }
          }
        }
        iVar7 = FUN_00789ce0(iVar7,(int)sVar6);
        if (iVar7 == 0) {
          return;
        }
        *param_2 = *(float *)(iVar7 + 0x24);
        param_2[1] = *(float *)(iVar7 + 0x28);
        param_2[2] = *(float *)(iVar7 + 0xa0);
        param_2[3] = *(float *)(iVar7 + 0x88);
        param_2[4] = *(float *)(iVar7 + 0x8c);
        param_2[5] = *(float *)(iVar7 + 0x90);
        param_2[6] = *(float *)(iVar7 + 0x2c);
        param_2[7] = *(float *)(iVar7 + 0x94);
        param_2[8] = *(float *)(iVar7 + 0x84);
        param_2[9] = *(float *)(iVar7 + 0x30);
        param_2[10] = *(float *)(iVar7 + 0x74);
        param_2[0xb] = *(float *)(iVar7 + 0x7c);
        param_2[0xc] = *(float *)(iVar7 + 0x78);
        param_2[0xd] = *(float *)(iVar7 + 0x80);
        param_2[0xe] = *(float *)(iVar7 + 0x18);
        param_2[0xf] = *(float *)(iVar7 + 0x9c);
        param_2[0x10] = *(float *)(iVar7 + 0x98);
        param_2[0x11] = *(float *)(iVar7 + 0x1c);
        param_2[0x12] = *(float *)(iVar7 + 0x20);
        iVar7 = *(int *)(param_1 + 0x48a0 + *param_7 * 4);
        if (iVar7 != 0) {
          *param_2 = *(float *)(iVar7 + 0x24) + *param_2;
          param_2[1] = *(float *)(iVar7 + 0x28) + param_2[1];
          param_2[2] = *(float *)(iVar7 + 0xa0) + param_2[2];
          param_2[3] = *(float *)(iVar7 + 0x88) + param_2[3];
          param_2[4] = *(float *)(iVar7 + 0x8c) + param_2[4];
          param_2[5] = *(float *)(iVar7 + 0x90) + param_2[5];
          param_2[6] = *(float *)(iVar7 + 0x2c) + param_2[6];
          param_2[7] = *(float *)(iVar7 + 0x94) + param_2[7];
          param_2[8] = *(float *)(iVar7 + 0x84) + param_2[8];
          param_2[9] = *(float *)(iVar7 + 0x30) + param_2[9];
          param_2[10] = *(float *)(iVar7 + 0x74) + param_2[10];
          param_2[0xb] = *(float *)(iVar7 + 0x7c) + param_2[0xb];
          param_2[0xc] = *(float *)(iVar7 + 0x78) + param_2[0xc];
          param_2[0xd] = *(float *)(iVar7 + 0x80) + param_2[0xd];
          param_2[0xe] = *(float *)(iVar7 + 0x18) + param_2[0xe];
          param_2[0xf] = *(float *)(iVar7 + 0x9c) + param_2[0xf];
          param_2[0x10] = *(float *)(iVar7 + 0x98) + param_2[0x10];
          param_2[0x11] = *(float *)(iVar7 + 0x1c) + param_2[0x11];
          param_2[0x12] = *(float *)(iVar7 + 0x20) + param_2[0x12];
        }
        fVar1 = (*(float *)(param_1 + 0x127c0 + *param_7 * 0x18) + _DAT_007e3374) * *param_2;
        *param_2 = fVar1;
        *param_2 = *(float *)(*(int *)(param_1 + 0x244) + 0x3e) * fVar1;
        param_2[2] = param_2[2] * _DAT_007e4088;
        return;
      }
      sVar6 = *param_8;
      if (sVar6 == -1) {
        sVar6 = -1;
        psVar4 = *(short **)(param_1 + 0x55c4 + iVar7 * 0x12);
        while (psVar4 != (short *)0x0) {
          if ((sVar6 < *psVar4) &&
             (cVar5 = (**(code **)(*(int *)(param_1 + iVar7 * 0x12 + 0x6970) + 0x24))
                                (CONCAT22((short)((uint)psVar4 >> 0x10),*psVar4)), cVar5 == '\0')) {
            sVar6 = *psVar4;
          }
          FUN_00458f40(&param_8,0);
        }
      }
      iVar7 = FUN_00789ce0(iVar7,(int)sVar6);
      if (iVar7 == 0) {
        return;
      }
      *param_2 = *(float *)(iVar7 + 0x24);
      param_2[1] = *(float *)(iVar7 + 0x28);
      param_2[2] = *(float *)(iVar7 + 0x2c);
      param_2[3] = *(float *)(iVar7 + 0x54);
      param_2[4] = *(float *)(iVar7 + 0x58);
      param_2[5] = *(float *)(iVar7 + 0xac);
      param_2[6] = *(float *)(iVar7 + 0xa8);
      param_2[7] = *(float *)(iVar7 + 0x30);
      param_2[8] = *(float *)(iVar7 + 0xa4);
      param_2[9] = *(float *)(iVar7 + 0x78);
      param_2[10] = *(float *)(iVar7 + 0x74);
      param_2[0xb] = *(float *)(iVar7 + 0x18);
      param_2[0xc] = *(float *)(iVar7 + 0x9c);
      param_2[0xd] = *(float *)(iVar7 + 0x98);
      param_2[0xe] = *(float *)(iVar7 + 0x1c);
      param_2[0xf] = *(float *)(iVar7 + 0x20);
      iVar7 = *(int *)(param_1 + 0x48a0 + *param_7 * 4);
      if (iVar7 != 0) {
        *param_2 = *(float *)(iVar7 + 0x24) + *param_2;
        param_2[1] = *(float *)(iVar7 + 0x28) + param_2[1];
        param_2[2] = *(float *)(iVar7 + 0x2c) + param_2[2];
        param_2[3] = *(float *)(iVar7 + 0x54) + param_2[3];
        param_2[4] = *(float *)(iVar7 + 0x58) + param_2[4];
        param_2[5] = *(float *)(iVar7 + 0xac) + param_2[5];
        param_2[6] = *(float *)(iVar7 + 0xa8) + param_2[6];
        param_2[7] = *(float *)(iVar7 + 0x30) + param_2[7];
        param_2[8] = *(float *)(iVar7 + 0xa4) + param_2[8];
        param_2[9] = *(float *)(iVar7 + 0x78) + param_2[9];
        param_2[10] = *(float *)(iVar7 + 0x74) + param_2[10];
        param_2[0xb] = *(float *)(iVar7 + 0x18) + param_2[0xb];
        param_2[0xc] = *(float *)(iVar7 + 0x9c) + param_2[0xc];
        param_2[0xd] = *(float *)(iVar7 + 0x98) + param_2[0xd];
        param_2[0xe] = *(float *)(iVar7 + 0x1c) + param_2[0xe];
        param_2[0xf] = *(float *)(iVar7 + 0x20) + param_2[0xf];
      }
    }
    fVar1 = (*(float *)(param_1 + 0x127c0 + *param_7 * 0x18) + _DAT_007e3374) * *param_2;
    *param_2 = fVar1;
    *param_2 = *(float *)(*(int *)(param_1 + 0x244) + 0x3e) * fVar1;
    return;
  }
  if ((int)(&DAT_00dbd1a2)[param_5] < 0xc) {
    if (param_3 == 0) {
      iVar7 = FUN_00789c90(param_5,(int)param_6);
      if (iVar7 != 0) {
        *param_2 = *(float *)(iVar7 + 0x24);
        param_2[1] = *(float *)(iVar7 + 0x28);
        param_2[2] = *(float *)(iVar7 + 0x4c);
        param_2[3] = *(float *)(iVar7 + 0x58);
        param_2[4] = *(float *)(iVar7 + 0x54);
        param_2[5] = *(float *)(iVar7 + 0x2c);
        param_2[6] = *(float *)(iVar7 + 0x44);
        param_2[7] = *(float *)(iVar7 + 0x48);
        param_2[8] = *(float *)(iVar7 + 0x30);
        param_2[9] = *(float *)(iVar7 + 0x50);
        param_2[10] = *(float *)(iVar7 + 0x18);
        param_2[0xb] = *(float *)(iVar7 + 0xc6);
        param_2[0xd] = *(float *)(iVar7 + 0x60);
        param_2[0xe] = *(float *)(iVar7 + 0x6c);
        param_2[0xf] = *(float *)(iVar7 + 0x68);
        param_2[0x10] = *(float *)(iVar7 + 100);
        param_2[0x11] = *(float *)(iVar7 + 0x5c);
        param_2[0x12] = *(float *)(iVar7 + 0x1c);
        param_2[0x13] = *(float *)(iVar7 + 0x20);
        param_2[0x14] = *(float *)(iVar7 + 0xca);
        param_2[0x15] = *(float *)(iVar7 + 0xce);
        iVar7 = *(int *)(param_1 + 0x4670 + param_5 * 4);
        if (iVar7 != 0) {
          *param_2 = *(float *)(iVar7 + 0x24) + *param_2;
          param_2[1] = *(float *)(iVar7 + 0x28) + param_2[1];
          param_2[2] = *(float *)(iVar7 + 0x4c) + param_2[2];
          param_2[3] = *(float *)(iVar7 + 0x58) + param_2[3];
          param_2[4] = *(float *)(iVar7 + 0x54) + param_2[4];
          param_2[5] = *(float *)(iVar7 + 0x2c) + param_2[5];
          param_2[6] = *(float *)(iVar7 + 0x44) + param_2[6];
          param_2[7] = *(float *)(iVar7 + 0x48) + param_2[7];
          param_2[8] = *(float *)(iVar7 + 0x30) + param_2[8];
          param_2[9] = *(float *)(iVar7 + 0x50) + param_2[9];
          param_2[10] = *(float *)(iVar7 + 0x18) + param_2[10];
          param_2[0xb] = *(float *)(iVar7 + 0xc6) + param_2[0xb];
          param_2[0xd] = *(float *)(iVar7 + 0x60) + param_2[0xd];
          param_2[0xe] = *(float *)(iVar7 + 0x6c) + param_2[0xe];
          param_2[0xf] = *(float *)(iVar7 + 0x68) + param_2[0xf];
          param_2[0x10] = *(float *)(iVar7 + 100) + param_2[0x10];
          param_2[0x11] = *(float *)(iVar7 + 0x5c) + param_2[0x11];
          param_2[0x12] = *(float *)(iVar7 + 0x1c) + param_2[0x12];
          param_2[0x13] = *(float *)(iVar7 + 0x20) + param_2[0x13];
          param_2[0x14] = *(float *)(iVar7 + 0xca) + param_2[0x14];
          param_2[0x15] = *(float *)(iVar7 + 0xce) + param_2[0x15];
        }
        param_2[0xc] = 3.4028235e+38;
      }
      goto LAB_00456528;
    }
    if (0xb < (int)(&DAT_00dbd1a2)[param_5]) goto LAB_004561e6;
  }
  else {
LAB_004561e6:
    cVar5 = FUN_004581d0(param_5);
    if ((cVar5 == '\0') && (param_3 == 1)) {
      iVar7 = FUN_00789c90(param_5,(int)param_6);
      if (iVar7 != 0) {
        *param_2 = *(float *)(iVar7 + 0x24);
        param_2[1] = *(float *)(iVar7 + 0x28);
        param_2[2] = *(float *)(iVar7 + 0x2c);
        param_2[3] = *(float *)(iVar7 + 0x54);
        param_2[4] = *(float *)(iVar7 + 0x58);
        param_2[5] = *(float *)(iVar7 + 0xac);
        param_2[6] = *(float *)(iVar7 + 0xa8);
        param_2[7] = *(float *)(iVar7 + 0x30);
        param_2[8] = *(float *)(iVar7 + 0xa4);
        param_2[9] = *(float *)(iVar7 + 0x78);
        param_2[10] = *(float *)(iVar7 + 0x74);
        param_2[0xb] = *(float *)(iVar7 + 0x18);
        param_2[0xc] = *(float *)(iVar7 + 0x9c);
        param_2[0xd] = *(float *)(iVar7 + 0x98);
        param_2[0xe] = *(float *)(iVar7 + 0x1c);
        param_2[0xf] = *(float *)(iVar7 + 0x20);
        param_2[0x10] = *(float *)(iVar7 + 0xca);
        param_2[0x11] = *(float *)(iVar7 + 0xce);
        iVar7 = *(int *)(param_1 + 0x4670 + param_5 * 4);
        if (iVar7 != 0) {
          *param_2 = *(float *)(iVar7 + 0x24) + *param_2;
          param_2[1] = *(float *)(iVar7 + 0x28) + param_2[1];
          param_2[2] = *(float *)(iVar7 + 0x2c) + param_2[2];
          param_2[3] = *(float *)(iVar7 + 0x54) + param_2[3];
          param_2[4] = *(float *)(iVar7 + 0x58) + param_2[4];
          param_2[5] = *(float *)(iVar7 + 0xac) + param_2[5];
          param_2[6] = *(float *)(iVar7 + 0xa8) + param_2[6];
          param_2[7] = *(float *)(iVar7 + 0x30) + param_2[7];
          param_2[8] = *(float *)(iVar7 + 0xa4) + param_2[8];
          param_2[9] = *(float *)(iVar7 + 0x78) + param_2[9];
          param_2[10] = *(float *)(iVar7 + 0x74) + param_2[10];
          param_2[0xb] = *(float *)(iVar7 + 0x18) + param_2[0xb];
          param_2[0xc] = *(float *)(iVar7 + 0x9c) + param_2[0xc];
          param_2[0xd] = *(float *)(iVar7 + 0x98) + param_2[0xd];
          param_2[0xe] = *(float *)(iVar7 + 0x1c) + param_2[0xe];
          param_2[0xf] = *(float *)(iVar7 + 0x20) + param_2[0xf];
          param_2[0x10] = *(float *)(iVar7 + 0xca) + param_2[0x10];
          param_2[0x11] = *(float *)(iVar7 + 0xce) + param_2[0x11];
        }
      }
      goto LAB_00456528;
    }
  }
  if ((((0x14 < (int)(&DAT_00dbd1a2)[param_5]) && ((&DAT_00dbd1a2)[param_5] != 0x8c)) &&
      (param_3 == 2)) && (iVar7 = FUN_00789c90(param_5,(int)param_6), iVar7 != 0)) {
    *param_2 = *(float *)(iVar7 + 0x24);
    param_2[1] = *(float *)(iVar7 + 0x28);
    param_2[2] = *(float *)(iVar7 + 0xa0);
    param_2[3] = *(float *)(iVar7 + 0x88);
    param_2[4] = *(float *)(iVar7 + 0x8c);
    param_2[5] = *(float *)(iVar7 + 0x90);
    param_2[6] = *(float *)(iVar7 + 0x2c);
    param_2[7] = *(float *)(iVar7 + 0x94);
    param_2[8] = *(float *)(iVar7 + 0x84);
    param_2[9] = *(float *)(iVar7 + 0x30);
    param_2[10] = *(float *)(iVar7 + 0x74);
    param_2[0xb] = *(float *)(iVar7 + 0x7c);
    param_2[0xc] = *(float *)(iVar7 + 0x78);
    param_2[0xd] = *(float *)(iVar7 + 0x80);
    param_2[0xe] = *(float *)(iVar7 + 0x18);
    param_2[0xf] = *(float *)(iVar7 + 0x9c);
    param_2[0x10] = *(float *)(iVar7 + 0x98);
    param_2[0x11] = *(float *)(iVar7 + 0x1c);
    param_2[0x12] = *(float *)(iVar7 + 0x20);
    param_2[0x13] = *(float *)(iVar7 + 0xca);
    param_2[0x14] = *(float *)(iVar7 + 0xce);
    iVar7 = *(int *)(param_1 + 0x4670 + param_5 * 4);
    if (iVar7 != 0) {
      *param_2 = *(float *)(iVar7 + 0x24) + *param_2;
      param_2[1] = *(float *)(iVar7 + 0x28) + param_2[1];
      param_2[2] = *(float *)(iVar7 + 0xa0) + param_2[2];
      param_2[3] = *(float *)(iVar7 + 0x88) + param_2[3];
      param_2[4] = *(float *)(iVar7 + 0x8c) + param_2[4];
      param_2[5] = *(float *)(iVar7 + 0x90) + param_2[5];
      param_2[6] = *(float *)(iVar7 + 0x2c) + param_2[6];
      param_2[7] = *(float *)(iVar7 + 0x94) + param_2[7];
      param_2[8] = *(float *)(iVar7 + 0x84) + param_2[8];
      param_2[9] = *(float *)(iVar7 + 0x30) + param_2[9];
      param_2[10] = *(float *)(iVar7 + 0x74) + param_2[10];
      param_2[0xb] = *(float *)(iVar7 + 0x7c) + param_2[0xb];
      param_2[0xc] = *(float *)(iVar7 + 0x78) + param_2[0xc];
      param_2[0xd] = *(float *)(iVar7 + 0x80) + param_2[0xd];
      param_2[0xe] = *(float *)(iVar7 + 0x18) + param_2[0xe];
      param_2[0xf] = *(float *)(iVar7 + 0x9c) + param_2[0xf];
      param_2[0x10] = *(float *)(iVar7 + 0x98) + param_2[0x10];
      param_2[0x11] = *(float *)(iVar7 + 0x1c) + param_2[0x11];
      param_2[0x12] = *(float *)(iVar7 + 0x20) + param_2[0x12];
      param_2[0x13] = *(float *)(iVar7 + 0xca) + param_2[0x13];
      param_2[0x14] = *(float *)(iVar7 + 0xce) + param_2[0x14];
    }
  }
LAB_00456528:
  param_8 = (short *)((int)param_8 - (int)param_7);
  _param_6 = 5;
  piVar8 = param_7;
  do {
    iVar7 = *piVar8;
    if (iVar7 != 0) {
      iVar3 = *(int *)((&DAT_00dbf99a)[iVar7] + 0x18);
      if ((iVar3 == 0) && (param_3 == 0)) {
        sVar6 = *(short *)((int)param_8 + (int)piVar8);
        if (sVar6 == -1) {
          sVar6 = FUN_0044c4a0(iVar7);
        }
        iVar7 = FUN_00789ce0(iVar7,(int)sVar6);
        if (iVar7 != 0) {
          fVar1 = *(float *)(iVar7 + 0x70);
          *param_2 = *(float *)(iVar7 + 0x24) + *param_2;
          param_2[1] = *(float *)(iVar7 + 0x28) + param_2[1];
          param_2[2] = *(float *)(iVar7 + 0x4c) + param_2[2];
          param_2[3] = *(float *)(iVar7 + 0x58) + param_2[3];
          param_2[4] = *(float *)(iVar7 + 0x54) + param_2[4];
          param_2[5] = *(float *)(iVar7 + 0x2c) + param_2[5];
          param_2[6] = *(float *)(iVar7 + 0x44) + param_2[6];
          param_2[7] = *(float *)(iVar7 + 0x48) + param_2[7];
          param_2[8] = *(float *)(iVar7 + 0x30) + param_2[8];
          param_2[9] = *(float *)(iVar7 + 0x50) + param_2[9];
          param_2[10] = *(float *)(iVar7 + 0x18) + param_2[10];
          param_2[0x11] = *(float *)(iVar7 + 0x5c) + param_2[0x11];
          param_2[0x12] = *(float *)(iVar7 + 0x1c) + param_2[0x12];
          param_2[0x13] = *(float *)(iVar7 + 0x20) + param_2[0x13];
          iVar7 = *(int *)(param_1 + 0x48a0 + *piVar8 * 4);
          if (iVar7 != 0) {
            fVar1 = fVar1 + *(float *)(iVar7 + 0x70);
            *param_2 = *(float *)(iVar7 + 0x24) + *param_2;
            param_2[1] = *(float *)(iVar7 + 0x28) + param_2[1];
            param_2[2] = *(float *)(iVar7 + 0x4c) + param_2[2];
            param_2[3] = *(float *)(iVar7 + 0x58) + param_2[3];
            param_2[4] = *(float *)(iVar7 + 0x54) + param_2[4];
            param_2[5] = *(float *)(iVar7 + 0x2c) + param_2[5];
            param_2[6] = *(float *)(iVar7 + 0x44) + param_2[6];
            param_2[7] = *(float *)(iVar7 + 0x48) + param_2[7];
            param_2[8] = *(float *)(iVar7 + 0x30) + param_2[8];
            param_2[9] = *(float *)(iVar7 + 0x50) + param_2[9];
            param_2[10] = *(float *)(iVar7 + 0x18) + param_2[10];
            param_2[0x11] = *(float *)(iVar7 + 0x5c) + param_2[0x11];
            param_2[0x12] = *(float *)(iVar7 + 0x1c) + param_2[0x12];
            param_2[0x13] = *(float *)(iVar7 + 0x20) + param_2[0x13];
          }
          if ((fVar1 != _DAT_007e3380) && (fVar1 < param_2[0xc])) {
            param_2[0xc] = fVar1;
          }
          switch(*piVar8) {
          case 1:
            if (_DAT_007e3380 < param_2[0xd]) {
              fVar1 = param_2[0xc];
              if (param_2[0xd] < param_2[0xc]) {
                fVar1 = param_2[0xd];
              }
              param_2[0xc] = fVar1;
            }
            break;
          case 5:
            if (_DAT_007e3380 < param_2[0xe]) {
              fVar1 = param_2[0xc];
              if (param_2[0xe] < param_2[0xc]) {
                fVar1 = param_2[0xe];
              }
              param_2[0xc] = fVar1;
            }
            break;
          case 0xb:
            if (_DAT_007e3380 < param_2[0xf]) {
              fVar1 = param_2[0xc];
              if (param_2[0xf] < param_2[0xc]) {
                fVar1 = param_2[0xf];
              }
              param_2[0xc] = fVar1;
            }
            break;
          case 0xd:
            if (_DAT_007e3380 < param_2[0x10]) {
              fVar1 = param_2[0xc];
              if (param_2[0x10] < param_2[0xc]) {
                fVar1 = param_2[0x10];
              }
              param_2[0xc] = fVar1;
            }
          }
        }
      }
      else if ((iVar3 == 1) && (param_3 == 1)) {
        sVar6 = *(short *)((int)param_8 + (int)piVar8);
        if (sVar6 == -1) {
          sVar6 = FUN_0044c4a0(iVar7);
        }
        iVar7 = FUN_00789ce0(iVar7,(int)sVar6);
        if (iVar7 != 0) {
          fVar1 = *(float *)(iVar7 + 0x9c);
          *param_2 = *(float *)(iVar7 + 0x24) + *param_2;
          param_2[1] = *(float *)(iVar7 + 0x28) + param_2[1];
          param_2[2] = *(float *)(iVar7 + 0x2c) + param_2[2];
          param_2[3] = *(float *)(iVar7 + 0x54) + param_2[3];
          param_2[4] = *(float *)(iVar7 + 0x58) + param_2[4];
          param_2[5] = *(float *)(iVar7 + 0xac) + param_2[5];
          param_2[6] = *(float *)(iVar7 + 0xa8) + param_2[6];
          param_2[7] = *(float *)(iVar7 + 0x30) + param_2[7];
          param_2[8] = *(float *)(iVar7 + 0xa4) + param_2[8];
          param_2[9] = *(float *)(iVar7 + 0x78) + param_2[9];
          param_2[10] = *(float *)(iVar7 + 0x74) + param_2[10];
          param_2[0xb] = *(float *)(iVar7 + 0x18) + param_2[0xb];
          param_2[0xd] = *(float *)(iVar7 + 0x98) + param_2[0xd];
          param_2[0xe] = *(float *)(iVar7 + 0x1c) + param_2[0xe];
          param_2[0xf] = *(float *)(iVar7 + 0x20) + param_2[0xf];
          iVar7 = *(int *)(param_1 + 0x48a0 + *piVar8 * 4);
          if (iVar7 != 0) {
            fVar1 = fVar1 + *(float *)(iVar7 + 0x9c);
            *param_2 = *(float *)(iVar7 + 0x24) + *param_2;
            param_2[1] = *(float *)(iVar7 + 0x28) + param_2[1];
            param_2[2] = *(float *)(iVar7 + 0x2c) + param_2[2];
            param_2[3] = *(float *)(iVar7 + 0x54) + param_2[3];
            param_2[4] = *(float *)(iVar7 + 0x58) + param_2[4];
            param_2[5] = *(float *)(iVar7 + 0xac) + param_2[5];
            param_2[6] = *(float *)(iVar7 + 0xa8) + param_2[6];
            param_2[7] = *(float *)(iVar7 + 0x30) + param_2[7];
            param_2[8] = *(float *)(iVar7 + 0xa4) + param_2[8];
            param_2[9] = *(float *)(iVar7 + 0x78) + param_2[9];
            param_2[10] = *(float *)(iVar7 + 0x74) + param_2[10];
            param_2[0xb] = *(float *)(iVar7 + 0x18) + param_2[0xb];
            param_2[0xd] = *(float *)(iVar7 + 0x98) + param_2[0xd];
            param_2[0xe] = *(float *)(iVar7 + 0x1c) + param_2[0xe];
            param_2[0xf] = *(float *)(iVar7 + 0x20) + param_2[0xf];
          }
          if ((fVar1 != _DAT_007e3380) && (fVar1 < param_2[0xc])) {
            param_2[0xc] = fVar1;
          }
        }
      }
      else if ((iVar3 == 2) && (param_3 == 2)) {
        sVar6 = *(short *)((int)param_8 + (int)piVar8);
        if (sVar6 == -1) {
          sVar6 = FUN_0044c4a0(iVar7);
        }
        iVar7 = FUN_00789ce0(iVar7,(int)sVar6);
        if (iVar7 != 0) {
          *param_2 = *(float *)(iVar7 + 0x24) + *param_2;
          param_2[1] = *(float *)(iVar7 + 0x28) + param_2[1];
          param_2[2] = *(float *)(iVar7 + 0xa0) + param_2[2];
          param_2[3] = *(float *)(iVar7 + 0x88) + param_2[3];
          param_2[4] = *(float *)(iVar7 + 0x8c) + param_2[4];
          param_2[5] = *(float *)(iVar7 + 0x90) + param_2[5];
          param_2[6] = *(float *)(iVar7 + 0x2c) + param_2[6];
          param_2[7] = *(float *)(iVar7 + 0x94) + param_2[7];
          param_2[8] = *(float *)(iVar7 + 0x84) + param_2[8];
          param_2[9] = *(float *)(iVar7 + 0x30) + param_2[9];
          param_2[10] = *(float *)(iVar7 + 0x74) + param_2[10];
          param_2[0xb] = *(float *)(iVar7 + 0x7c) + param_2[0xb];
          param_2[0xc] = *(float *)(iVar7 + 0x78) + param_2[0xc];
          param_2[0xd] = *(float *)(iVar7 + 0x80) + param_2[0xd];
          param_2[0xe] = *(float *)(iVar7 + 0x18) + param_2[0xe];
          param_2[0xf] = *(float *)(iVar7 + 0x9c) + param_2[0xf];
          param_2[0x10] = *(float *)(iVar7 + 0x98) + param_2[0x10];
          param_2[0x11] = *(float *)(iVar7 + 0x1c) + param_2[0x11];
          param_2[0x12] = *(float *)(iVar7 + 0x20) + param_2[0x12];
          iVar7 = *(int *)(param_1 + 0x48a0 + *piVar8 * 4);
          if (iVar7 != 0) {
            *param_2 = *(float *)(iVar7 + 0x24) + *param_2;
            param_2[1] = *(float *)(iVar7 + 0x28) + param_2[1];
            param_2[2] = *(float *)(iVar7 + 0xa0) + param_2[2];
            param_2[3] = *(float *)(iVar7 + 0x88) + param_2[3];
            param_2[4] = *(float *)(iVar7 + 0x8c) + param_2[4];
            param_2[5] = *(float *)(iVar7 + 0x90) + param_2[5];
            param_2[6] = *(float *)(iVar7 + 0x2c) + param_2[6];
            param_2[7] = *(float *)(iVar7 + 0x94) + param_2[7];
            param_2[8] = *(float *)(iVar7 + 0x84) + param_2[8];
            param_2[9] = *(float *)(iVar7 + 0x30) + param_2[9];
            param_2[10] = *(float *)(iVar7 + 0x74) + param_2[10];
            param_2[0xb] = *(float *)(iVar7 + 0x7c) + param_2[0xb];
            param_2[0xc] = *(float *)(iVar7 + 0x78) + param_2[0xc];
            param_2[0xd] = *(float *)(iVar7 + 0x80) + param_2[0xd];
            param_2[0xe] = *(float *)(iVar7 + 0x18) + param_2[0xe];
            param_2[0xf] = *(float *)(iVar7 + 0x9c) + param_2[0xf];
            param_2[0x10] = *(float *)(iVar7 + 0x98) + param_2[0x10];
            param_2[0x11] = *(float *)(iVar7 + 0x1c) + param_2[0x11];
            param_2[0x12] = *(float *)(iVar7 + 0x20) + param_2[0x12];
          }
        }
      }
    }
    piVar8 = piVar8 + 1;
    _param_6 = _param_6 + -1;
  } while (_param_6 != 0);
  fVar1 = *(float *)(param_1 + 0x11aa0 + param_5 * 0x18);
  switch(DAT_00dc16f8) {
  case 1:
    if (fVar1 == _DAT_007e3380) {
      iVar7 = 5;
      do {
        if (((*param_7 != 0) &&
            (fVar2 = *(float *)(param_1 + 0x127c0 + *param_7 * 0x18), fVar2 != _DAT_007e3380)) &&
           (fVar1 < fVar2)) {
          fVar1 = fVar2;
        }
        param_7 = param_7 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    break;
  case 2:
    uVar10 = (uint)(fVar1 != _DAT_007e3380);
    iVar7 = 5;
    do {
      if ((*param_7 != 0) &&
         (fVar2 = *(float *)(param_1 + 0x127c0 + *param_7 * 0x18), fVar2 != _DAT_007e3380)) {
        fVar1 = fVar2 + fVar1;
        uVar10 = uVar10 + 1;
      }
      param_7 = param_7 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    fVar1 = fVar1 / (float)(int)uVar10;
    break;
  case 3:
    iVar7 = 5;
    do {
      if (*param_7 != 0) {
        fVar1 = fVar1 + *(float *)(param_1 + 0x127c0 + *param_7 * 0x18);
      }
      param_7 = param_7 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    break;
  case 4:
    iVar7 = 5;
    do {
      if (((*param_7 != 0) &&
          (fVar2 = *(float *)(param_1 + 0x127c0 + *param_7 * 0x18), fVar2 != _DAT_007e3380)) &&
         ((fVar1 != _DAT_007e3380 && (fVar2 < fVar1)))) {
        fVar1 = fVar2;
      }
      param_7 = param_7 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    break;
  case 5:
    iVar7 = 5;
    do {
      if ((((*param_7 != 0) &&
           (fVar2 = *(float *)(param_1 + 0x127c0 + *param_7 * 0x18), fVar2 != _DAT_007e3380)) &&
          (fVar1 != _DAT_007e3380)) && (fVar1 < fVar2)) {
        fVar1 = fVar2;
      }
      param_7 = param_7 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (param_3 == 0) {
    fVar1 = (fVar1 + _DAT_007e3374) * *param_2;
    *param_2 = fVar1;
    *param_2 = *(float *)(*(int *)(param_1 + 0x244) + 0x3e) * fVar1;
    param_2[0x14] = param_2[0x14] + _DAT_007e3374;
    param_2[0x15] = param_2[0x15] + _DAT_007e3374;
    if (param_2[0xc] < param_2[10]) {
      param_2[10] = param_2[0xc];
    }
    if (param_2[10] <= param_2[0xc]) {
      param_2[0xc] = 0.0;
    }
    if (param_2[2] < DAT_00dc1744) {
      param_2[2] = DAT_00dc1744;
      return;
    }
  }
  else {
    if (param_3 == 1) {
      fVar1 = (fVar1 + _DAT_007e3374) * *param_2;
      *param_2 = fVar1;
      *param_2 = *(float *)(*(int *)(param_1 + 0x244) + 0x3e) * fVar1;
      param_2[0x10] = param_2[0x10] + _DAT_007e3374;
      param_2[0x11] = param_2[0x11] + _DAT_007e3374;
      return;
    }
    if (param_3 == 2) {
      fVar1 = (fVar1 + _DAT_007e3374) * *param_2;
      *param_2 = fVar1;
      *param_2 = *(float *)(*(int *)(param_1 + 0x244) + 0x3e) * fVar1;
      param_2[2] = param_2[2] * _DAT_007e4088;
      param_2[0x13] = param_2[0x13] + _DAT_007e3374;
      param_2[0x14] = param_2[0x14] + _DAT_007e3374;
      return;
    }
  }
  return;
}


