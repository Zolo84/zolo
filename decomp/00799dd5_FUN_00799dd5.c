// FUN_00799dd5 @ 799dd5 size=628

int FUN_00799dd5(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int unaff_EBP;
  undefined8 uVar6;
  
  FUN_007a9c5c();
  FUN_00798acc();
  iVar1 = *(int *)(unaff_EBP + 0x10);
  uVar2 = *(uint *)(unaff_EBP + 0xc) & 2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(uint *)(unaff_EBP + -0x10) = uVar2;
  if (uVar2 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar3 = operator_new(0x18);
      *(undefined4 **)(unaff_EBP + 0x10) = puVar3;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3[1] = 0;
        uVar4 = *(undefined4 *)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        *puVar3 = &PTR_FUN_0080011c;
        FUN_0079a05b(uVar4);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      uVar4 = FUN_0074c210();
    }
    else {
      uVar4 = FUN_0074c210();
      puVar3 = (undefined4 *)FUN_0079b652(*(undefined4 *)(unaff_EBP + 0x14),0,1,uVar4);
    }
    FUN_0079a297(puVar3,uVar4);
  }
  uVar2 = *(uint *)(unaff_EBP + 0xc) & 8;
  *(uint *)(unaff_EBP + 0x10) = uVar2;
  if (uVar2 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar3 = operator_new(8);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3[1] = 0;
        *puVar3 = &PTR_FUN_008000f0;
      }
      uVar4 = FUN_0074c210();
    }
    else {
      uVar4 = FUN_0074c210();
      puVar3 = (undefined4 *)FUN_0079b7b9(*(undefined4 *)(unaff_EBP + 0x14),0,1,uVar4);
    }
    FUN_0079a297(puVar3,uVar4);
  }
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar3 = operator_new(8);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3[1] = 0;
        *puVar3 = &PTR_FUN_008000d0;
      }
      uVar4 = FUN_0074c210();
    }
    else {
      uVar4 = FUN_0074c210();
      puVar3 = (undefined4 *)FUN_0079b895(*(undefined4 *)(unaff_EBP + 0x14),0,1,uVar4);
    }
    FUN_0079a297(puVar3,uVar4);
    if (*(int *)(unaff_EBP + 0x10) != 0) {
      if (*(int *)(unaff_EBP + 0x14) == 0) {
        puVar3 = operator_new(0x18);
        *(undefined4 **)(unaff_EBP + 0x10) = puVar3;
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3[1] = 0;
          uVar4 = *(undefined4 *)(unaff_EBP + 8);
          *(undefined1 *)(unaff_EBP + -4) = 4;
          *puVar3 = &PTR_FUN_008000b4;
          FUN_0079b4b4(uVar4);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        uVar4 = FUN_0074c210();
      }
      else {
        uVar4 = FUN_0074c210();
        puVar3 = (undefined4 *)FUN_0079b971(*(undefined4 *)(unaff_EBP + 0x14),0,1,uVar4);
      }
      FUN_0079a297(puVar3,uVar4);
    }
  }
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar3 = operator_new(0x10);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3[1] = 0;
        *puVar3 = &PTR_FUN_00800094;
        uVar6 = FUN_007a55bb();
        *(undefined8 *)(puVar3 + 2) = uVar6;
      }
      uVar4 = FUN_0074c210();
    }
    else {
      uVar4 = FUN_0074c210();
      puVar3 = (undefined4 *)FUN_0079ba35(*(undefined4 *)(unaff_EBP + 0x14),0,1,uVar4);
    }
    FUN_0079a297(puVar3,uVar4);
  }
  uVar2 = *(uint *)(unaff_EBP + 0xc);
  FUN_007a2620(*(undefined4 *)(unaff_EBP + 8),uVar2,iVar1,*(undefined4 *)(unaff_EBP + 0x14));
  FUN_0079c41b(*(undefined4 *)(unaff_EBP + 8),uVar2,iVar1,*(undefined4 *)(unaff_EBP + 0x14));
  *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | uVar2;
  uVar5 = FUN_00799b00(unaff_EBP + -0x24);
  uVar4 = DAT_007f33d8;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00674710(uVar5,0,uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00674910(1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00798b68();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar1;
}


