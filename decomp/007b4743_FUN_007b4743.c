// FUN_007b4743 @ 7b4743 size=581

undefined4 FUN_007b4743(void)

{
  BYTE *pBVar1;
  byte bVar2;
  int iVar3;
  undefined2 *puVar4;
  BOOL BVar5;
  BYTE *pBVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined4 uVar9;
  _cpinfo local_28;
  undefined2 *local_14;
  undefined2 *local_10;
  undefined2 *local_c;
  void *local_8;
  
  uVar9 = 0;
  local_8 = (void *)0x0;
  local_c = (undefined2 *)0x0;
  if (DAT_00dc5218 == 0) {
    PTR_DAT_0087cdd0 = &DAT_0087cdda;
    PTR_DAT_0087cdd4 = &DAT_0087cdda;
    FUN_007a77fa(DAT_00dc538c);
    FUN_007a77fa(DAT_00dc5390);
    DAT_00dc538c = (undefined2 *)0x0;
    DAT_00dc5390 = (undefined2 *)0x0;
    return 0;
  }
  if ((DAT_00dc5228 != 0) || (iVar3 = FUN_007b84e7(0,DAT_00dc53a0,0x1004,&DAT_00dc5228), iVar3 == 0)
     ) {
    puVar4 = _malloc(0x202);
    local_14 = puVar4;
    local_10 = _malloc(0x202);
    local_8 = _malloc(0x101);
    local_c = _malloc(0x202);
    if ((puVar4 != (undefined2 *)0x0) &&
       (((local_10 != (undefined2 *)0x0 && (local_8 != (void *)0x0)) &&
        (local_c != (undefined2 *)0x0)))) {
      iVar3 = 0;
      do {
        *(char *)(iVar3 + (int)local_8) = (char)iVar3;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x100);
      BVar5 = GetCPInfo(DAT_00dc5228,&local_28);
      if ((BVar5 != 0) && (local_28.MaxCharSize < 3)) {
        DAT_0087cfdc = local_28.MaxCharSize & 0xffff;
        if ((1 < DAT_0087cfdc) && (local_28.LeadByte[0] != '\0')) {
          pBVar6 = local_28.LeadByte + 1;
          do {
            bVar2 = *pBVar6;
            if (bVar2 == 0) break;
            for (uVar7 = (uint)pBVar6[-1]; (int)uVar7 <= (int)(uint)bVar2; uVar7 = uVar7 + 1) {
              *(undefined1 *)(uVar7 + (int)local_8) = 0;
              bVar2 = *pBVar6;
            }
            pBVar1 = pBVar6 + 1;
            pBVar6 = pBVar6 + 2;
          } while (*pBVar1 != 0);
        }
        iVar3 = FUN_007b1861(1,local_8,0x100,puVar4 + 1,0,0,0);
        if (iVar3 != 0) {
          *puVar4 = 0;
          iVar3 = 0;
          puVar4 = local_c;
          do {
            *puVar4 = (short)iVar3;
            puVar4 = puVar4 + 1;
            iVar3 = iVar3 + 1;
          } while (iVar3 < 0x100);
          puVar4 = local_10 + 1;
          iVar3 = FUN_007b7a87(1,local_c,0x100,puVar4,0,0);
          if (iVar3 != 0) {
            *local_10 = 0;
            if ((1 < (int)DAT_0087cfdc) && (local_28.LeadByte[0] != '\0')) {
              pBVar6 = local_28.LeadByte + 1;
              do {
                if (*pBVar6 == 0) break;
                uVar7 = (uint)pBVar6[-1];
                if (uVar7 <= *pBVar6) {
                  puVar8 = local_14 + uVar7 + 1;
                  do {
                    *puVar8 = 0x8000;
                    uVar7 = uVar7 + 1;
                    puVar8 = puVar8 + 1;
                  } while ((int)uVar7 <= (int)(uint)*pBVar6);
                }
                pBVar1 = pBVar6 + 1;
                pBVar6 = pBVar6 + 2;
              } while (*pBVar1 != 0);
            }
            PTR_DAT_0087cdd0 = (undefined *)(local_14 + 1);
            PTR_DAT_0087cdd4 = (undefined *)puVar4;
            if (DAT_00dc538c != (undefined2 *)0x0) {
              FUN_007a77fa(DAT_00dc538c);
            }
            DAT_00dc538c = local_14;
            if (DAT_00dc5390 != (undefined2 *)0x0) {
              FUN_007a77fa(DAT_00dc5390);
            }
            DAT_00dc5390 = local_10;
            goto LAB_007b4921;
          }
        }
      }
    }
  }
  FUN_007a77fa(local_14);
  FUN_007a77fa(local_10);
  uVar9 = 1;
LAB_007b4921:
  FUN_007a77fa(local_8);
  FUN_007a77fa(local_c);
  return uVar9;
}


