// FUN_006a2940 @ 6a2940 size=48

undefined * __fastcall FUN_006a2940(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x1e8))();
  if (iVar1 < 0) {
    iVar1 = (**(code **)(*param_1 + 0x1e8))();
    if (iVar1 < 0) goto LAB_006a296b;
  }
  if (iVar1 < 0x54) {
    return (&PTR_s__CAI_PLAN_GATHERARMIES__00868398)[iVar1];
  }
LAB_006a296b:
  return (undefined *)((int)param_1 + 0x76);
}


