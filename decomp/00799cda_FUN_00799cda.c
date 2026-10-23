// FUN_00799cda @ 799cda size=251

undefined4 * FUN_00799cda(void)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  int unaff_EBP;
  uint uVar5;
  int iVar6;
  
  FUN_007a9c5c();
  iVar6 = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  FUN_0079720d();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00798acc();
  iVar4 = DAT_00dc4fd0;
  piVar1 = *(int **)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar4 != *piVar1) {
    puVar2 = (undefined4 *)FUN_0074c240();
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
    pvVar3 = operator_new(0x28);
    *(void **)(unaff_EBP + 0xc) = pvVar3;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (pvVar3 == (void *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_0079a177(*piVar1);
    }
    uVar5 = *(uint *)(iVar4 + 0x10) & 0x3f;
    DAT_00dc4fd0 = iVar4;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (uVar5 == 0x3f) {
      puVar2 = *(undefined4 **)(iVar4 + 0x1c);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = &DAT_007f0c98;
      }
      FUN_007aa17c(0,puVar2);
    }
    else {
      do {
        if ((uVar5 & (1 << ((byte)iVar6 & 0x1f)) >> 1) != 0) {
          puVar2 = *(undefined4 **)(DAT_00dc4fd0 + 0x1c);
          if (puVar2 == (undefined4 *)0x0) {
            puVar2 = &DAT_007f0c98;
          }
          FUN_007aa17c(iVar6,puVar2);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 6);
    }
  }
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *puVar2 = *(undefined4 *)(unaff_EBP + -0x10);
  FUN_0079723b();
  *(undefined4 *)(unaff_EBP + -0x14) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00798b68();
  FUN_0074c280();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar2;
}


