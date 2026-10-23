// FUN_0042ddd0 @ 42ddd0 size=93

short __thiscall FUN_0042ddd0(char *param_1,char *param_2)

{
  short sVar1;
  byte bVar2;
  
  sVar1 = *(short *)(param_1 + 4);
  bVar2 = (byte)((ushort)sVar1 >> 8);
  if (*(short *)(param_2 + 4) < sVar1) {
    return CONCAT11(bVar2,1);
  }
  if (sVar1 < *(short *)(param_2 + 4)) {
    return (ushort)bVar2 << 8;
  }
  if (param_2[2] < param_1[2]) {
    return CONCAT11(bVar2,1);
  }
  if (param_1[2] < param_2[2]) {
    return (ushort)bVar2 << 8;
  }
  if (param_2[1] < param_1[1]) {
    return CONCAT11(bVar2,1);
  }
  if (param_1[1] < param_2[1]) {
    return (ushort)bVar2 << 8;
  }
  return CONCAT11(bVar2,*param_2 <= *param_1);
}


