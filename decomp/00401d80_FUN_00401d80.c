// FUN_00401d80 @ 401d80 size=984

void FUN_00401d80(int param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_2 != 0) {
    uVar2 = *(ushort *)(param_2 + 2 + param_1 * 2);
    uVar6 = (param_4 & 0xffff) >> 0xb;
    uVar5 = ((int)(uVar6 - (uVar2 >> 0xb)) >> 1) * 0x800 + (uVar2 & 0xf800) ^ uVar2 & 0x7ff;
    uVar3 = (param_4 & 0xffff) >> 5 & 0x3f;
    param_4 = param_4 & 0x1f;
    uVar5 = (((int)(uVar3 - (uVar5 >> 5 & 0x3f)) >> 1) * 0x20 + (uVar5 & 0xffe0) ^ uVar5) & 0x7e0 ^
            uVar5;
    *(ushort *)(param_2 + 2 + param_1 * 2) =
         (byte)((char)((int)(param_4 - (uVar5 & 0x1f)) >> 1) + (byte)uVar5 ^ (byte)uVar5) & 0x1f ^
         (ushort)uVar5;
    iVar4 = param_1 + param_6;
    uVar2 = *(ushort *)(param_2 + iVar4 * 2);
    uVar5 = ((int)(uVar6 - (uVar2 >> 0xb)) >> 1) * 0x800 + (uVar2 & 0xf800) ^ uVar2 & 0x7ff;
    uVar5 = (((int)(uVar3 - (uVar5 >> 5 & 0x3f)) >> 1) * 0x20 + (uVar5 & 0xffe0) ^ uVar5) & 0x7e0 ^
            uVar5;
    *(ushort *)(param_2 + iVar4 * 2) =
         (byte)((char)((int)(param_4 - (uVar5 & 0x1f)) >> 1) + (byte)uVar5 ^ (byte)uVar5) & 0x1f ^
         (ushort)uVar5;
    uVar2 = *(ushort *)(param_2 + 4 + iVar4 * 2);
    uVar5 = ((int)(uVar6 - (uVar2 >> 0xb)) >> 1) * 0x800 + (uVar2 & 0xf800) ^ uVar2 & 0x7ff;
    uVar5 = (((int)(uVar3 - (uVar5 >> 5 & 0x3f)) >> 1) * 0x20 + (uVar5 & 0xffe0) ^ uVar5) & 0x7e0 ^
            uVar5;
    *(ushort *)(param_2 + 4 + iVar4 * 2) =
         (byte)((char)((int)(param_4 - (uVar5 & 0x1f)) >> 1) + (byte)uVar5 ^ (byte)uVar5) & 0x1f ^
         (ushort)uVar5;
    param_1 = param_1 + param_6 * 2;
    uVar2 = *(ushort *)(param_2 + 2 + param_1 * 2);
    uVar5 = ((int)(uVar6 - (uVar2 >> 0xb)) >> 1) * 0x800 + (uVar2 & 0xf800) ^ uVar2 & 0x7ff;
    uVar5 = (((int)(uVar3 - (uVar5 >> 5 & 0x3f)) >> 1) * 0x20 + (uVar5 & 0xffe0) ^ uVar5) & 0x7e0 ^
            uVar5;
    *(ushort *)(param_2 + 2 + param_1 * 2) =
         (byte)((char)((int)(param_4 - (uVar5 & 0x1f)) >> 1) + (byte)uVar5 ^ (byte)uVar5) & 0x1f ^
         (ushort)uVar5;
    return;
  }
  uVar2 = *(ushort *)(param_3 + 2 + param_1 * 2);
  uVar3 = (param_5 & 0xffff) >> 10 & 0x1f;
  uVar6 = param_5 & 0x1f;
  uVar5 = (((int)(uVar3 - ((uVar2 & 0x7c00) >> 10)) >> 1) * 0x400 + (uVar2 & 0xfc00) ^ (uint)uVar2)
          & 0x7c00 ^ (uint)uVar2;
  uVar7 = (param_5 & 0xffff) >> 5 & 0x1f;
  uVar5 = (((int)(uVar7 - (uVar5 >> 5 & 0x1f)) >> 1) * 0x20 + (uVar5 & 0xffe0) ^ uVar5) & 0x3e0 ^
          uVar5;
  *(ushort *)(param_3 + 2 + param_1 * 2) =
       (byte)((char)((int)(uVar6 - (uVar5 & 0x1f)) >> 1) + (byte)uVar5 ^ (byte)uVar5) & 0x1f ^
       (ushort)uVar5;
  iVar4 = param_1 + param_6;
  uVar2 = *(ushort *)(param_3 + iVar4 * 2);
  uVar5 = (((int)(uVar3 - ((uVar2 & 0x7c00) >> 10)) >> 1) * 0x400 + (uVar2 & 0xfc00) ^ (uint)uVar2)
          & 0x7c00 ^ (uint)uVar2;
  uVar5 = (((int)(uVar7 - (uVar5 >> 5 & 0x1f)) >> 1) * 0x20 + (uVar5 & 0xffe0) ^ uVar5) & 0x3e0 ^
          uVar5;
  *(ushort *)(param_3 + iVar4 * 2) =
       (byte)((char)((int)(uVar6 - (uVar5 & 0x1f)) >> 1) + (byte)uVar5 ^ (byte)uVar5) & 0x1f ^
       (ushort)uVar5;
  uVar2 = *(ushort *)(param_3 + 4 + iVar4 * 2);
  uVar5 = (((int)(uVar3 - ((uVar2 & 0x7c00) >> 10)) >> 1) * 0x400 + (uVar2 & 0xfc00) ^ (uint)uVar2)
          & 0x7c00 ^ (uint)uVar2;
  uVar5 = (((int)(uVar7 - (uVar5 >> 5 & 0x1f)) >> 1) * 0x20 + (uVar5 & 0xffe0) ^ uVar5) & 0x3e0 ^
          uVar5;
  *(ushort *)(param_3 + 4 + iVar4 * 2) =
       (byte)((char)((int)(uVar6 - (uVar5 & 0x1f)) >> 1) + (byte)uVar5 ^ (byte)uVar5) & 0x1f ^
       (ushort)uVar5;
  puVar1 = (ushort *)(param_3 + 2 + (param_1 + param_6 * 2) * 2);
  uVar2 = *puVar1;
  uVar3 = (((int)(uVar3 - ((uVar2 & 0x7c00) >> 10)) >> 1) * 0x400 + (uVar2 & 0xfc00) ^ (uint)uVar2)
          & 0x7c00 ^ (uint)uVar2;
  uVar3 = (((int)(uVar7 - (uVar3 >> 5 & 0x1f)) >> 1) * 0x20 + (uVar3 & 0xffe0) ^ uVar3) & 0x3e0 ^
          uVar3;
  *puVar1 = (byte)((char)((int)(uVar6 - (uVar3 & 0x1f)) >> 1) + (byte)uVar3 ^ (byte)uVar3) & 0x1f ^
            (ushort)uVar3;
  return;
}


