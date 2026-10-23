// FUN_004fcfd0 @ 4fcfd0 size=882

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004fcfd0(int *param_1,int param_2)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined1 uVar4;
  bool bVar5;
  
  param_1[0x4e] = *(int *)(param_2 + 0x3c);
  if (param_1[0x17] == 0) {
    fVar1 = *(float *)(param_2 + 0x24);
    if (*(float *)(param_2 + 0x24) < _DAT_007e3380) {
      fVar1 = _DAT_007e3380;
    }
    param_1[0x3d] = (int)fVar1;
    param_1[0x3f] = *(int *)(param_2 + 0x28);
    (**(code **)(*param_1 + 0x38))(param_2);
    fVar1 = *(float *)(param_2 + 0x24);
    if (*(float *)(param_2 + 0x24) < _DAT_007e3380) {
      fVar1 = _DAT_007e3380;
    }
    param_1[0x3e] = (int)fVar1;
    fVar1 = *(float *)(param_2 + 0x1c);
    if (*(float *)(param_2 + 0x1c) < _DAT_007e3380) {
      fVar1 = _DAT_007e3380;
    }
    param_1[0x42] = (int)fVar1;
    fVar1 = *(float *)(param_2 + 0x20);
    if (*(float *)(param_2 + 0x20) < _DAT_007e3380) {
      fVar1 = _DAT_007e3380;
    }
    param_1[0x43] = (int)fVar1;
    fVar1 = *(float *)(param_2 + 0x18);
    if (*(float *)(param_2 + 0x18) < _DAT_007e3380) {
      fVar1 = _DAT_007e3380;
    }
    param_1[0x44] = (int)fVar1;
    fVar1 = *(float *)(param_2 + 0xc6);
    if (*(float *)(param_2 + 0xc6) < _DAT_007e3380) {
      fVar1 = _DAT_007e3380;
    }
    param_1[0x47] = (int)fVar1;
    param_1[0x48] = *(int *)(param_2 + 0xca);
    fVar1 = *(float *)(param_2 + 0xce);
  }
  else {
    iVar3 = FUN_0044c620(*(undefined4 *)(param_2 + 4));
    fVar1 = *(float *)(iVar3 + 0x24) + *(float *)(param_2 + 0x24);
    if (fVar1 < _DAT_007e3380) {
      fVar1 = _DAT_007e3380;
    }
    param_1[0x3d] = (int)fVar1;
    param_1[0x3f] = (int)(*(float *)(iVar3 + 0x28) + *(float *)(param_2 + 0x28));
    (**(code **)(*param_1 + 0x38))(param_2);
    fVar1 = *(float *)(iVar3 + 0x24) + *(float *)(param_2 + 0x24);
    if (fVar1 < _DAT_007e3380) {
      fVar1 = _DAT_007e3380;
    }
    param_1[0x3e] = (int)fVar1;
    fVar1 = *(float *)(iVar3 + 0x1c) + *(float *)(param_2 + 0x1c);
    if (fVar1 < _DAT_007e3380) {
      fVar1 = _DAT_007e3380;
    }
    param_1[0x42] = (int)fVar1;
    fVar1 = *(float *)(iVar3 + 0x20) + *(float *)(param_2 + 0x20);
    if (fVar1 < _DAT_007e3380) {
      fVar1 = _DAT_007e3380;
    }
    param_1[0x43] = (int)fVar1;
    fVar1 = *(float *)(iVar3 + 0x18) + *(float *)(param_2 + 0x18);
    if (fVar1 < _DAT_007e3380) {
      fVar1 = _DAT_007e3380;
    }
    param_1[0x44] = (int)fVar1;
    fVar1 = *(float *)(iVar3 + 0xc6) + *(float *)(param_2 + 0xc6);
    if (fVar1 < _DAT_007e3380) {
      fVar1 = _DAT_007e3380;
    }
    param_1[0x47] = (int)fVar1;
    param_1[0x48] = (int)(*(float *)(iVar3 + 0xca) + *(float *)(param_2 + 0xca));
    fVar1 = *(float *)(iVar3 + 0xce) + *(float *)(param_2 + 0xce);
  }
  param_1[0x49] = (int)fVar1;
  param_1[0x4c] = *(int *)(param_2 + 4);
  bVar5 = *(int *)(param_2 + 4) == 0x8c;
  *(bool *)((int)param_1 + 0x162) = bVar5;
  if (bVar5) {
    param_1[0x4d] = 0x8c;
  }
  else {
    iVar3 = (&DAT_00dbd1a2)[*(int *)(param_2 + 4)];
    *(undefined1 *)(param_1 + 0x8c) = 1;
    param_1[0x4d] = iVar3;
  }
  if ((char)param_2 != '\0') {
    param_1[0x50] = *(int *)(param_2 + 0xb4);
    param_1[0x51] = *(int *)(param_2 + 0xb8);
    param_1[0x4b] = 0x3f800000;
    param_1[0x4a] = 0x3f800000;
    *(undefined1 *)((int)param_1 + 0x163) = *(undefined1 *)(param_2 + 0xbc);
    iVar3 = param_1[0x4d];
    if ((iVar3 == 0x13) || (iVar3 == 0x14)) {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
    *(undefined1 *)(param_1 + 0x57) = uVar4;
    if ((iVar3 == 0x1a) || (iVar3 == 0x1b)) {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
    *(undefined1 *)((int)param_1 + 0x15d) = uVar4;
    if ((iVar3 == 0x1c) || (iVar3 == 0x1d)) {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
    *(undefined1 *)((int)param_1 + 0x15e) = uVar4;
    *(bool *)((int)param_1 + 0x15f) = iVar3 < 0xc;
    if ((iVar3 < 0x15) || (iVar3 == 0x8c)) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
    *(char *)((int)param_1 + 0x161) = cVar2;
    if ((iVar3 < 0xc) || (cVar2 != '\0')) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    *(undefined1 *)(param_1 + 0x58) = uVar4;
    if (-1 < param_1[0x51]) {
      if (*(char *)(param_2 + 0xbd) != '\0') {
        param_1[0x4b] = *(int *)(param_2 + 0x34);
        param_1[0x4a] = *(int *)(param_2 + 0x38);
        return;
      }
      iVar3 = FUN_00789c90(param_1[0x50],param_1[0x51]);
      if (iVar3 != 0) {
        param_1[0x4b] = *(int *)(iVar3 + 0x34);
        param_1[0x4a] = *(int *)(iVar3 + 0x38);
      }
    }
  }
  return;
}


