// FUN_00411259 @ 411259 size=831

void __thiscall FUN_00411259(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  void *pvVar4;
  void *pvVar5;
  int local_24;
  int local_20;
  byte local_1c;
  int local_14;
  uint local_10;
  
  bVar3 = false;
  pvVar4 = operator_new(param_2 * param_4);
  local_10 = 0;
  if (pvVar4 != (void *)0x0) {
    bVar2 = false;
    for (local_14 = 0; local_14 < param_3; local_14 = local_14 + 1) {
      for (local_20 = 0; local_20 < param_4; local_20 = local_20 + 1) {
        if (*(char *)(param_5 + local_20 * param_2 + local_14) != -1) {
          *(undefined2 *)((int)param_1 + 6) = (undefined2)local_14;
          bVar2 = true;
        }
      }
    }
    if ((*(short *)((int)param_1 + 6) != 0) || (bVar2)) {
      *(short *)((int)param_1 + 6) = *(short *)((int)param_1 + 6) + 1;
      for (local_14 = 0; local_14 < param_4; local_14 = local_14 + 1) {
        for (local_24 = 0; local_24 < *(short *)((int)param_1 + 6); local_24 = local_24 + 1) {
          if (bVar3) {
            if (bVar3) {
              bVar1 = *(byte *)(param_5 + local_14 * param_2 + local_24);
              if (bVar1 == 0xff) {
                bVar1 = 0;
              }
              if ((local_1c & 0xf) == bVar1) {
                if (local_1c >> 4 == 0xf) {
                  *(byte *)((int)pvVar4 + local_10) = local_1c;
                  local_10 = local_10 + 1;
                  local_1c = local_1c & 0xf;
                }
                else {
                  local_1c = local_1c & 0xf | ((local_1c >> 4) + 1) * '\x10';
                }
              }
              else {
                *(byte *)((int)pvVar4 + local_10) = local_1c;
                local_10 = local_10 + 1;
                if ((*(char *)(param_5 + local_14 * param_2 + local_24) == -1) ||
                   (*(char *)(param_5 + local_14 * param_2 + local_24) == '\0')) {
                  local_1c = 0;
                }
                else {
                  local_1c = *(byte *)(param_5 + local_14 * param_2 + local_24) & 0xf;
                }
              }
            }
          }
          else {
            if ((*(char *)(param_5 + local_14 * param_2 + local_24) == -1) ||
               (*(char *)(param_5 + local_24 * param_2 + local_14) == '\0')) {
              local_1c = 0;
            }
            else {
              local_1c = *(byte *)(param_5 + local_14 * param_2 + local_24) & 0xf;
            }
            bVar3 = true;
          }
        }
      }
      pvVar5 = operator_new(local_10);
      *param_1 = (int)pvVar5;
      if (*param_1 != 0) {
        FUN_007a71b0(*param_1,pvVar4,local_10);
        *(undefined2 *)(param_1 + 1) = (undefined2)local_10;
        DAT_0088ebac = DAT_0088ebac + local_10 + 8;
      }
      if (pvVar4 != (void *)0x0) {
        FUN_00796cd8(pvVar4);
      }
    }
    else {
      *(undefined2 *)((int)param_1 + 6) = 1;
      *(undefined2 *)(param_1 + 1) = 0;
      FUN_00796cd8(pvVar4);
    }
  }
  return;
}


