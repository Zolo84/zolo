// FUN_005af6b0 @ 5af6b0 size=492

int FUN_005af6b0(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  
  if (param_2[0x99] != 2) {
    bVar4 = false;
    cVar5 = (**(code **)(*param_2 + 0x30))();
    if ((cVar5 != '\0') && (cVar5 = FUN_005129b0(), cVar5 != '\0')) {
      bVar4 = true;
    }
    iVar9 = *(int *)(param_1 + 0x1aa);
    if (iVar9 != 0) {
      piVar3 = *(int **)(iVar9 + 8);
joined_r0x005af701:
      while( true ) {
        if (piVar3 == (int *)0x0) {
          if (bVar4) {
            return 0;
          }
          puVar8 = *(undefined4 **)(iVar9 + 8);
          if (*(undefined4 **)(iVar9 + 8) == (undefined4 *)0x0) {
            return 0;
          }
          goto LAB_005af82a;
        }
        piVar1 = (int *)piVar3[1];
        piVar7 = (int *)*piVar3;
        iVar6 = piVar7[0x1d];
        piVar3 = piVar1;
        if (((iVar6 == 4) || (iVar6 == 5)) || (iVar6 == 6)) break;
        if (((iVar6 == 7) || (iVar6 == 8)) &&
           (cVar5 = (**(code **)(*param_2 + 0x30))(), cVar5 != '\0')) {
          iVar6 = param_2[0x92];
          (**(code **)(*(int *)piVar7[0x21] + 0xc))(iVar6);
          cVar5 = FUN_00527dc0(iVar6);
          if ((cVar5 != '\0') && (cVar5 = (**(code **)(*piVar7 + 0x48))(param_2), cVar5 != '\0'))
          goto LAB_005af889;
        }
      }
      if (bVar4) {
        if (iVar6 != 6) goto joined_r0x005af701;
      }
      else if (iVar6 == 6) goto joined_r0x005af701;
      cVar5 = (**(code **)(*param_2 + 0x30))();
      if ((cVar5 != '\0') && (iVar6 = FUN_004bf290(), iVar6 != 0)) {
        iVar6 = FUN_004bf290();
        cVar5 = FUN_0044b280(*(undefined4 *)(iVar6 + 6));
        if ((cVar5 != '\0') && (cVar5 = (**(code **)(*piVar7 + 0x48))(param_2), cVar5 != '\0'))
        goto LAB_005af889;
      }
      cVar5 = (**(code **)(*param_2 + 0x30))();
      if ((cVar5 != '\0') || (iVar6 = FUN_004bf290(), iVar6 == 0)) goto joined_r0x005af701;
      iVar6 = FUN_004bf290();
      cVar5 = FUN_0044b280(*(undefined4 *)(iVar6 + 6));
      if ((cVar5 == '\0') || (cVar5 = (**(code **)(*piVar7 + 0x48))(param_2), cVar5 == '\0'))
      goto joined_r0x005af701;
LAB_005af889:
      return piVar7[0x1d];
    }
  }
  return 0;
LAB_005af82a:
  puVar2 = (undefined4 *)puVar8[1];
  piVar7 = (int *)*puVar8;
  iVar9 = piVar7[0x1d];
  if ((((iVar9 == 4) || (iVar9 == 5)) || (iVar9 == 6)) &&
     (cVar5 = (**(code **)(*piVar7 + 0x48))(param_2), cVar5 != '\0')) {
    iVar9 = param_2[0x92];
    iVar6 = iVar9;
    (**(code **)(*(int *)piVar7[0x20] + 0xc))(iVar9);
    cVar5 = FUN_00527dc0(iVar6);
    if (cVar5 == '\0') {
      (**(code **)(*(int *)piVar7[0x21] + 0xc))(iVar9);
      cVar5 = FUN_00527dc0(iVar9);
      if (cVar5 == '\0') goto LAB_005af889;
    }
  }
  puVar8 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    return 0;
  }
  goto LAB_005af82a;
}


