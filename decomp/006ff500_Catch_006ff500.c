// Catch@006ff500 @ 6ff500 size=138

undefined4 Catch_006ff500(void)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_EBP;
  undefined4 uVar5;
  
  pvVar2 = operator_new(0x68);
  *(void **)(unaff_EBP + 8) = pvVar2;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (pvVar2 != (void *)0x0) {
    uVar5 = 0x29a;
    uVar3 = FUN_0042b6c9(s_EN_NAME_0086ffd0);
    uVar4 = FUN_0042b6c9(s_EN_NO_NAME_SERVER_0086ffbc);
    FUN_0043dce0(uVar4,uVar3,uVar5);
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  pvVar2 = operator_new(0x32);
  *(void **)(unaff_EBP + 8) = pvVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (pvVar2 != (void *)0x0) {
    uVar3 = FUN_006f5120(s_GFX_interface_frontend_bg_start__00870054);
    iVar1 = *(int *)(unaff_EBP + -0x14);
    *(undefined4 *)(iVar1 + 0xc) = uVar3;
    *(undefined1 *)(iVar1 + 0x11) = 1;
    return 0x6ff62f;
  }
  iVar1 = *(int *)(unaff_EBP + -0x14);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined1 *)(iVar1 + 0x11) = 1;
  return 0x6ff62f;
}


