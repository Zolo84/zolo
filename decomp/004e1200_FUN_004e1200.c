// FUN_004e1200 @ 4e1200 size=832

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004e1200(int param_1)

{
  undefined1 uVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int local_288;
  int local_280 [4];
  double local_270;
  undefined1 local_264 [336];
  undefined1 local_114 [256];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_007bfcd9;
  pvStack_14 = ExceptionList;
  local_270 = _DAT_007e7f88 / SQRT(_DAT_007e7f90);
  ExceptionList = &pvStack_14;
  pvVar2 = operator_new(0xb40c);
  local_c = 0;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004eedc0(s_map_id_tbl_00847898);
  }
  local_c = 0xffffffff;
  *(undefined4 *)(param_1 + 0x124f84) = uVar3;
  local_288 = 0;
  do {
    iVar7 = 0;
    do {
      iVar4 = FUN_004ef3b0(iVar7 + -0x20,local_288 + -0x20,0x40,0);
      if (iVar4 < 2) {
        iVar4 = FUN_004eeef0(iVar7,local_288);
        if (iVar4 == DAT_00877690) {
          iVar4 = 0;
        }
        iVar8 = (((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) +
                ((int)(local_288 + (local_288 >> 0x1f & 0x1fU)) >> 5) * 0x3a8) * 8;
        uVar1 = FUN_004d9300(iVar7,local_288,iVar4);
        *(undefined1 *)(*(int *)(param_1 + 0x124f88) + iVar8) = uVar1;
        iVar4 = 1;
        *(undefined1 *)(*(int *)(param_1 + 0x124f88) + 4 + iVar8) = 0;
        do {
          *(undefined1 *)(*(int *)(param_1 + 0x124f88) + iVar8 + iVar4) = 0;
          iVar4 = iVar4 + 1;
          *(undefined1 *)(*(int *)(param_1 + 0x124f88) + iVar8 + 3 + iVar4) = 0xff;
        } while (iVar4 < 4);
      }
      else {
        FUN_004ef200(iVar7,local_288,0x40,local_280,local_264,4,DAT_00ab27b4);
        iVar8 = 0;
        iVar4 = (((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) +
                ((int)(local_288 + (local_288 >> 0x1f & 0x1fU)) >> 5) * 0x3a8) * 8;
        do {
          if (local_280[iVar8] == DAT_00877690) {
            local_280[iVar8] = 0;
          }
          uVar1 = FUN_004d9300(iVar7,local_288,local_280[iVar8]);
          *(undefined1 *)(*(int *)(param_1 + 0x124f88) + iVar4 + iVar8) = uVar1;
          iVar5 = __ftol();
          uVar6 = _rand();
          iVar5 = iVar5 + -0xf + (uVar6 & 0x1f);
          if (iVar5 < 0) {
            iVar5 = 0;
          }
          else if (0xff < iVar5) {
            iVar5 = 0xff;
          }
          iVar8 = iVar8 + 1;
          *(char *)(*(int *)(param_1 + 0x124f88) + iVar4 + 3 + iVar8) = (char)iVar5;
        } while (iVar8 < 4);
      }
      iVar7 = iVar7 + 0x20;
    } while (iVar7 < 0x7500);
    local_288 = local_288 + 0x20;
  } while (local_288 < 0x2d00);
  iVar7 = 0;
  do {
    iVar8 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
    iVar4 = iVar8 * 8;
    *(undefined1 *)(*(int *)(param_1 + 0x124f88) + iVar4) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x124f88) + 4 + iVar4) = 0xff;
    iVar5 = 1;
    do {
      *(undefined1 *)(*(int *)(param_1 + 0x124f88) + iVar4 + iVar5) = 0;
      iVar5 = iVar5 + 1;
      *(undefined1 *)(*(int *)(param_1 + 0x124f88) + iVar4 + 3 + iVar5) = 0xff;
    } while (iVar5 < 4);
    iVar4 = iVar8 * 8 + 0x292200;
    *(undefined1 *)(*(int *)(param_1 + 0x124f88) + iVar4) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x124f88) + 4 + iVar4) = 0xff;
    iVar8 = 1;
    do {
      *(undefined1 *)(*(int *)(param_1 + 0x124f88) + iVar4 + iVar8) = 0;
      iVar8 = iVar8 + 1;
      *(undefined1 *)(*(int *)(param_1 + 0x124f88) + iVar4 + 3 + iVar8) = 0xff;
    } while (iVar8 < 4);
    iVar7 = iVar7 + 0x20;
  } while (iVar7 < 0x7500);
  FUN_007a630a(local_114,s__s_incgrid_tbl_00847d90,&DAT_00dc1970);
  FUN_00426d70(local_114,&DAT_0082ef98);
  local_c = 1;
  FUN_00427330(*(undefined4 *)(param_1 + 0x124f88),8,0x527e8);
  if (*(undefined4 **)(param_1 + 0x124f84) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x124f84))(1);
  }
  local_c = 0xffffffff;
  FUN_00426f80();
  ExceptionList = pvStack_14;
  return 0;
}


