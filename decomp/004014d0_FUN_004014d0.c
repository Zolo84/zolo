// FUN_004014d0 @ 4014d0 size=2214

void __thiscall FUN_004014d0(int *param_1,int param_2,int param_3,int param_4)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  byte bVar4;
  undefined2 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint unaff_EBX;
  uint unaff_EBP;
  int iVar13;
  uint unaff_ESI;
  int iVar14;
  uint uVar15;
  int unaff_EDI;
  int iVar16;
  int unaff_retaddr;
  int local_28;
  int *piStack_24;
  int local_1c;
  int local_14;
  int iStack_c;
  int iStack_8;
  uint uStack_4;
  
  if (param_2 < 1) {
    param_2 = 1;
    iVar14 = param_2;
LAB_004014fc:
    param_2 = iVar14;
  }
  else {
    iVar14 = param_1[1] + -1;
    if (param_1[1] + -1 < param_2) goto LAB_004014fc;
  }
  if (param_4 < 1) {
    param_4 = 1;
    iVar14 = param_4;
LAB_0040151a:
    param_4 = iVar14;
  }
  else {
    iVar14 = param_1[1] + -1;
    if (param_1[1] + -1 < param_4) goto LAB_0040151a;
  }
  if (param_3 < 1) {
    param_3 = 1;
    iVar14 = param_3;
  }
  else {
    iVar14 = param_1[2] + -1;
    if (param_3 <= param_1[2] + -1) goto LAB_0040153c;
  }
  param_3 = iVar14;
LAB_0040153c:
  if (param_2 < param_4) {
    local_1c = param_4 - param_2;
  }
  else {
    local_1c = param_2 - param_4;
  }
  iVar14 = param_1[6];
  puVar5 = (undefined2 *)(**(code **)(*param_1 + 4))(param_2,param_3);
  uVar6 = unaff_EBX & 0xffff8000;
  iVar13 = 0;
  iVar16 = 0;
  uVar11 = (uint)(iVar14 / 2) >> 0x10;
  local_28 = uVar11 * 0x10000;
  if (DAT_00857744 == 0) {
    iVar16 = (**(code **)(*param_1 + 4))(uStack_4 + -1,unaff_retaddr + -1);
    bVar4 = (byte)*(ushort *)((int)param_1 + 0x25a);
    unaff_EBP = (uint)((bVar4 ^ bVar4 & 0x1f) & 0x1f ^ *(ushort *)((int)param_1 + 0x25a));
    local_1c = iVar16;
  }
  else {
    iVar13 = (**(code **)(*param_1 + 4))(uStack_4 + -1,unaff_retaddr + -1);
    uVar2 = *(ushort *)((int)param_1 + 0x25a);
    uVar9 = (ushort)unaff_ESI ^ (byte)((byte)uVar2 ^ (byte)unaff_ESI) & 0x1f;
    uVar9 = uVar9 ^ (uVar2 ^ uVar9) & 0x3e0;
    unaff_ESI = (uint)(uVar9 ^ (uVar2 ^ uVar9) & 0x7c00);
  }
  iVar14 = 0;
  if (uVar11 == 0) {
    if ((int)uStack_4 < iStack_c) {
      puVar5 = puVar5 + -uVar6;
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      iVar7 = iVar14 * 2;
      *puVar5 = *(undefined2 *)((int)piStack_24 + 0x25a);
      if (iVar16 == 0) {
        uVar12 = (unaff_ESI & 0xffff) >> 10 & 0x1f;
        uVar15 = (unaff_ESI & 0xffff) >> 5 & 0x1f;
        uVar9 = ((short)(((int)(uVar12 - ((*(ushort *)(iVar7 + 2 + iVar13) & 0x7c00) >> 10)) >> 1)
                        << 10) + (*(ushort *)(iVar7 + 2 + iVar13) & 0xfc00) ^
                *(ushort *)(iVar7 + 2 + iVar13)) & 0x7c00 ^ *(ushort *)(iVar7 + 2 + iVar13);
        uVar11 = (uint)uVar9;
        uVar11 = (((int)(uVar15 - (uVar9 >> 5 & 0x1f)) >> 1) * 0x20 + (uVar11 & 0xffe0) ^ uVar11) &
                 0x3e0 ^ uVar11;
        uVar10 = unaff_ESI & 0x1f;
        *(ushort *)(iVar7 + 2 + iVar13) =
             (byte)((char)((int)(uVar10 - (uVar11 & 0x1f)) >> 1) + (byte)uVar11 ^ (byte)uVar11) &
             0x1f ^ (ushort)uVar11;
        iVar16 = iVar7 + unaff_EDI * 2;
        uVar9 = ((short)(((int)(uVar12 - (*(ushort *)(iVar16 + iVar13) >> 10 & 0x1f)) >> 1) << 10) +
                 (*(ushort *)(iVar16 + iVar13) & 0xfc00) ^ *(ushort *)(iVar16 + iVar13)) & 0x7c00 ^
                *(ushort *)(iVar16 + iVar13);
        uVar11 = (uint)uVar9;
        uVar11 = (((int)(uVar15 - (uVar9 >> 5 & 0x1f)) >> 1) * 0x20 + (uVar11 & 0xffe0) ^ uVar11) &
                 0x3e0 ^ uVar11;
        *(ushort *)(iVar7 + unaff_EDI * 2 + iVar13) =
             (byte)((char)((int)(uVar10 - (uVar11 & 0x1f)) >> 1) + (byte)uVar11 ^ (byte)uVar11) &
             0x1f ^ (ushort)uVar11;
        uVar9 = *(ushort *)(iVar13 + 4 + (iVar14 + unaff_EDI) * 2);
        uVar11 = (((int)(uVar12 - ((uVar9 & 0x7c00) >> 10)) >> 1) * 0x400 + (uVar9 & 0xfc00) ^
                 (uint)uVar9) & 0x7c00 ^ (uint)uVar9;
        uVar11 = (((int)(uVar15 - (uVar11 >> 5 & 0x1f)) >> 1) * 0x20 + (uVar11 & 0xffe0) ^ uVar11) &
                 0x3e0 ^ uVar11;
        *(ushort *)(iVar13 + 4 + (iVar14 + unaff_EDI) * 2) =
             (byte)((char)((int)(uVar10 - (uVar11 & 0x1f)) >> 1) + (byte)uVar11 ^ (byte)uVar11) &
             0x1f ^ (ushort)uVar11;
        iVar16 = iVar14 + unaff_EDI * 2;
        uVar9 = *(ushort *)(iVar13 + 2 + iVar16 * 2);
        uVar11 = (((int)(uVar12 - ((uVar9 & 0x7c00) >> 10)) >> 1) * 0x400 + (uVar9 & 0xfc00) ^
                 (uint)uVar9) & 0x7c00 ^ (uint)uVar9;
        uVar11 = (((int)(uVar15 - (uVar11 >> 5 & 0x1f)) >> 1) * 0x20 + (uVar11 & 0xffe0) ^ uVar11) &
                 0x3e0 ^ uVar11;
        *(ushort *)(iVar13 + 2 + iVar16 * 2) =
             (byte)((char)((int)(uVar10 - (uVar11 & 0x1f)) >> 1) + (byte)uVar11 ^ (byte)uVar11) &
             0x1f ^ (ushort)uVar11;
        iVar16 = local_1c;
      }
      else {
        uVar10 = (unaff_EBP & 0xffff) >> 0xb;
        uVar11 = ((int)(uVar10 - (*(ushort *)(iVar7 + 2 + iVar16) >> 0xb)) >> 1) * 0x800 +
                 (*(ushort *)(iVar7 + 2 + iVar16) & 0xf800) ^
                 *(ushort *)(iVar7 + 2 + iVar16) & 0x7ff;
        uVar15 = (unaff_EBP & 0xffff) >> 5 & 0x3f;
        uVar11 = (((int)(uVar15 - (uVar11 >> 5 & 0x3f)) >> 1) * 0x20 + (uVar11 & 0xffe0) ^ uVar11) &
                 0x7e0 ^ uVar11;
        uVar12 = unaff_EBP & 0x1f;
        *(ushort *)(iVar7 + 2 + iVar16) =
             (byte)((char)((int)(uVar12 - (uVar11 & 0x1f)) >> 1) + (byte)uVar11 ^ (byte)uVar11) &
             0x1f ^ (ushort)uVar11;
        iVar8 = iVar7 + unaff_EDI * 2;
        uVar11 = ((int)(uVar10 - (*(ushort *)(iVar8 + iVar16) >> 0xb)) >> 1) * 0x800 +
                 (*(ushort *)(iVar8 + iVar16) & 0xf800) ^ *(ushort *)(iVar8 + iVar16) & 0x7ff;
        uVar11 = (((int)(uVar15 - (uVar11 >> 5 & 0x3f)) >> 1) * 0x20 + (uVar11 & 0xffe0) ^ uVar11) &
                 0x7e0 ^ uVar11;
        puVar1 = (ushort *)(iVar16 + 4 + (iVar14 + unaff_EDI) * 2);
        *(ushort *)(iVar7 + unaff_EDI * 2 + iVar16) =
             (byte)((char)((int)(uVar12 - (uVar11 & 0x1f)) >> 1) + (byte)uVar11 ^ (byte)uVar11) &
             0x1f ^ (ushort)uVar11;
        uVar9 = *puVar1;
        uVar11 = ((int)(uVar10 - (uVar9 >> 0xb)) >> 1) * 0x800 + (uVar9 & 0xf800) ^ uVar9 & 0x7ff;
        uVar11 = (((int)(uVar15 - (uVar11 >> 5 & 0x3f)) >> 1) * 0x20 + (uVar11 & 0xffe0) ^ uVar11) &
                 0x7e0 ^ uVar11;
        *puVar1 = (byte)((char)((int)(uVar12 - (uVar11 & 0x1f)) >> 1) + (byte)uVar11 ^ (byte)uVar11)
                  & 0x1f ^ (ushort)uVar11;
        iVar7 = iVar14 + unaff_EDI * 2;
        uVar9 = *(ushort *)(iVar16 + 2 + iVar7 * 2);
        uVar11 = ((int)(uVar10 - (uVar9 >> 0xb)) >> 1) * 0x800 + (uVar9 & 0xf800) ^ uVar9 & 0x7ff;
        uVar11 = (((int)(uVar15 - (uVar11 >> 5 & 0x3f)) >> 1) * 0x20 + (uVar11 & 0xffe0) ^ uVar11) &
                 0x7e0 ^ uVar11;
        *(ushort *)(iVar16 + 2 + iVar7 * 2) =
             (byte)((char)((int)(uVar12 - (uVar11 & 0x1f)) >> 1) + (byte)uVar11 ^ (byte)uVar11) &
             0x1f ^ (ushort)uVar11;
      }
      iVar14 = iVar14 + 1;
      puVar5 = puVar5 + 1;
    }
    (**(code **)(*piStack_24 + 0xc))();
    return;
  }
  if (uVar6 == 0) {
    iVar7 = unaff_EDI;
    if (unaff_retaddr <= iStack_8) {
      iVar7 = -unaff_EDI;
    }
    uStack_4 = local_28;
    do {
      *puVar5 = *(undefined2 *)((int)piStack_24 + 0x25a);
      iVar14 = iVar14 + iVar7;
      FUN_00401d80(iVar14,iVar16,iVar13,unaff_EBP,unaff_ESI,unaff_EDI);
      puVar5 = puVar5 + iVar7;
      uStack_4 = uStack_4 + -1;
    } while (uStack_4 != 0);
    (**(code **)(*piStack_24 + 0xc))();
    return;
  }
  if ((int)uVar6 < local_28) {
    iVar7 = unaff_EDI;
    if (unaff_retaddr <= iStack_8) {
      iVar7 = -unaff_EDI;
    }
    if (iStack_c < (int)uStack_4) {
      iStack_c = iVar7 + 1;
      local_14 = local_28 - uVar6;
      uStack_4 = uVar6;
    }
    else {
      iStack_c = iVar7 + -1;
      local_14 = local_28 - uVar6;
      uStack_4 = uVar6;
    }
    do {
      local_14 = local_14 - uVar6;
      if (local_14 < 0) {
        local_14 = local_14 + local_28;
        iVar14 = iVar14 + iStack_c;
        FUN_00401d80(iVar14,iVar16,iVar13,unaff_EBP,unaff_ESI,unaff_EDI);
        uStack_4 = uStack_4 - 1;
        iVar8 = iStack_c;
      }
      else {
        iVar14 = iVar14 + iVar7;
        FUN_00401d80(iVar14,iVar16,iVar13,unaff_EBP,unaff_ESI,unaff_EDI);
        iVar8 = iVar7;
      }
      puVar5 = puVar5 + iVar8;
      *puVar5 = *(undefined2 *)((int)piStack_24 + 0x25a);
    } while (uStack_4 != 0);
    (**(code **)(*piStack_24 + 0xc))();
    return;
  }
  iVar8 = (((int)uStack_4 <= iStack_c) - 1 & 2) - 1;
  iVar7 = unaff_EDI;
  if (unaff_retaddr <= iStack_8) {
    iVar7 = -unaff_EDI;
  }
  iVar7 = iVar8 + iVar7;
  uStack_4 = uVar6 + uVar11 * -0x10000;
  uVar10 = uVar6;
  while (uVar10 = uVar10 - 1, uVar10 != 0) {
    uStack_4 = uStack_4 + uVar11 * -0x10000;
    if ((int)uStack_4 < 0) {
      uStack_4 = uStack_4 + uVar6;
      iVar14 = iVar14 + iVar7;
      FUN_00401d80(iVar14,iVar16,iVar13,unaff_EBP,unaff_ESI,unaff_EDI);
      iVar3 = iVar7;
    }
    else {
      iVar14 = iVar14 + iVar8;
      FUN_00401d80(iVar14,iVar16,iVar13,unaff_EBP,unaff_ESI,unaff_EDI);
      iVar3 = iVar8;
    }
    puVar5 = puVar5 + iVar3;
    *puVar5 = *(undefined2 *)((int)piStack_24 + 0x25a);
  }
  if ((int)(uStack_4 + uVar11 * -0x10000) < 0) {
    FUN_00401d80(iVar7 + iVar14,iVar16,iVar13,unaff_EBP,unaff_ESI,unaff_EDI);
    (**(code **)(*piStack_24 + 0xc))();
    return;
  }
  FUN_00401d80(iVar8 + iVar14,iVar16,iVar13,unaff_EBP,unaff_ESI,unaff_EDI);
  (**(code **)(*piStack_24 + 0xc))();
  return;
}


