// FUN_006a6a20 @ 6a6a20 size=966

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006a6a20(int *param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  
  bVar2 = true;
  piVar4 = (int *)param_1[0x25];
  if ((int *)param_1[0x25] != (int *)0x0) {
    do {
      piVar1 = (int *)piVar4[2];
      piVar4 = (int *)*piVar4;
      iVar7 = piVar4[3];
      iVar5 = FUN_006a6370();
      if (iVar7 != iVar5) {
        bVar2 = false;
        cVar3 = (**(code **)(*(int *)((int)piVar4 + 0x22e) + 8))();
        if (cVar3 != '\0') {
          cVar3 = FUN_004f03a0(param_1[0x23]);
          if (cVar3 == '\0') {
            uVar6 = FUN_006a6370(piVar4[3]);
            FUN_0044a9c0(uVar6);
            FUN_004f0290();
            FUN_0051b230();
            FUN_0051b230();
            uVar6 = __ftol();
            uVar6 = __ftol(uVar6);
            iVar7 = FUN_004d8580(uVar6);
            iVar5 = FUN_004e9370(iVar7);
            if (*(int *)(iVar5 + 0x3d8) == 0) {
LAB_006a6bff:
              uVar6 = __ftol();
              uVar6 = __ftol(uVar6);
              iVar7 = FUN_004d8580(uVar6);
              iVar5 = FUN_004e9370(iVar7);
              if (*(int *)(iVar5 + 0x3d8) != 0) {
                uVar6 = FUN_006a9d50();
                cVar3 = FUN_0044b280(uVar6);
                if (((cVar3 == '\0') && (cVar3 = FUN_005216c0(iVar5), cVar3 != '\0')) &&
                   (iVar7 != 0)) {
                  piVar8 = (int *)FUN_004e9370(iVar7);
                  goto LAB_006a6d79;
                }
              }
              uVar6 = __ftol();
              uVar6 = __ftol(uVar6);
              iVar7 = FUN_004d8580(uVar6);
              iVar5 = FUN_004e9370(iVar7);
              if (*(int *)(iVar5 + 0x3d8) != 0) {
                uVar6 = FUN_006a9d50();
                cVar3 = FUN_0044b280(uVar6);
                if (((cVar3 == '\0') && (cVar3 = FUN_005216c0(iVar5), cVar3 != '\0')) &&
                   (iVar7 != 0)) {
                  piVar8 = (int *)FUN_004e9370(iVar7);
                  goto LAB_006a6d79;
                }
              }
              uVar6 = __ftol();
              uVar6 = __ftol(uVar6);
              iVar7 = FUN_004d8580(uVar6);
              iVar5 = FUN_004e9370(iVar7);
              if (*(int *)(iVar5 + 0x3d8) != 0) {
                uVar6 = FUN_006a9d50();
                cVar3 = FUN_0044b280(uVar6);
                if (((cVar3 == '\0') && (cVar3 = FUN_005216c0(iVar5), cVar3 != '\0')) &&
                   (iVar7 != 0)) {
                  piVar8 = (int *)FUN_004e9370(iVar7);
                  goto LAB_006a6d79;
                }
              }
              goto LAB_006a6d73;
            }
            uVar6 = FUN_006a9d50();
            cVar3 = FUN_0044b280(uVar6);
            if (((cVar3 != '\0') || (cVar3 = FUN_005216c0(iVar5), cVar3 == '\0')) || (iVar7 == 0))
            goto LAB_006a6bff;
            piVar8 = (int *)FUN_004e9370(iVar7);
          }
          else {
LAB_006a6d73:
            piVar8 = (int *)param_1[0x23];
          }
LAB_006a6d79:
          if (piVar8 != (int *)0x0) {
            FUN_006aaff0(piVar4,piVar8,0);
            iVar7 = *(int *)((int)param_1 + 10);
            uVar6 = (**(code **)(*(int *)param_1[0x23] + 0xc))();
            uVar6 = (**(code **)(*piVar8 + 0xc))(uVar6);
            uVar6 = (**(code **)(*piVar4 + 0xc))(uVar6);
            uVar6 = (**(code **)(*(int *)(iVar7 + 0xe) + 0xc))(uVar6);
            FUN_00458570(s_STRBOMB___s_sends__s_to__s__Fina_00869218,uVar6);
          }
        }
      }
      piVar4 = piVar1;
    } while (piVar1 != (int *)0x0);
    if (!bVar2) {
      return;
    }
  }
  (**(code **)(*param_1 + 200))();
  return;
}


