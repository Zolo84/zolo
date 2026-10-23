// FUN_00517160 @ 517160 size=348

undefined4 __thiscall FUN_00517160(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  uint unaff_EDI;
  undefined4 *puVar5;
  
  iVar1 = param_2;
  puVar5 = &param_2;
  piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x2aa) + 0x28))(puVar5,param_2);
  if (*piVar3 == 0) {
    if (*(int *)(iVar1 + 0x2b2) != 0) {
      (**(code **)(**(int **)(*(int *)(iVar1 + 0x2b2) + 0x294) + 0x18))(iVar1);
      *(undefined4 *)(iVar1 + 0x2b2) = 0;
    }
    FUN_00459df0(iVar1);
    *(int *)(iVar1 + 0x2ae) = param_1;
    *(undefined4 *)(iVar1 + 0x240) = 0;
    iVar4 = iVar1;
    FUN_0051b230(iVar1);
    FUN_004e43f0(iVar4);
    *(undefined1 *)(iVar1 + 0x17b) = 0;
    FUN_005232b0();
    (*(code *)**(undefined4 **)(iVar1 + 8))(0);
    FUN_00419440(0xffffff9c,0xffffff9c);
    (**(code **)(**(int **)(iVar1 + 0x15e) + 0x18))(0xffffff9c,0xffffff9c);
    *(undefined4 *)(iVar1 + 0x29e) = 0;
    FUN_0050bd10(0,*(undefined4 *)(param_1 + 0xc),0x3ca3d70a,1,0,unaff_EDI & 0xff000000,0,
                 (uint)puVar5 & 0xff000000,0,0xffffffff,0,1,0,0xbf800000,1);
    iVar4 = (**(code **)(*(int *)(iVar1 + 0x11c) + 4))();
    if ((iVar4 != 0) && (cVar2 = FUN_0042e980(), cVar2 != '\0')) {
      iVar4 = (**(code **)(*(int *)(iVar1 + 0x11c) + 4))();
      puVar5 = *(undefined4 **)(iVar1 + 0x120);
      for (iVar4 = iVar4 + 1; (puVar5 != (undefined4 *)0x0 && (-1 < iVar4)); iVar4 = iVar4 + -1) {
        FUN_005b0270(*puVar5,iVar1);
        puVar5 = *(undefined4 **)(iVar1 + 0x120);
      }
    }
  }
  return 1;
}


