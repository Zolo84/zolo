// FUN_0065eb20 @ 65eb20 size=340

void __thiscall FUN_0065eb20(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar1 = param_2;
  iVar3 = *(int *)(*(int *)(param_1 + 0x28) + 0x62);
  iVar2 = *(int *)(iVar3 + 8) / 2;
  iVar3 = *(int *)(iVar3 + 4) / 2;
  FUN_00429c00(&local_14,&local_18,0,0xffffffe8,param_2,iVar3,iVar2);
  FUN_00429c00(&local_c,&local_10,0xfffffff0,0x18,iVar1,iVar3,iVar2);
  FUN_00429c00(&local_4,&local_8,0x10,0x18,iVar1,iVar3,iVar2);
  FUN_00429c00(&local_1c,&param_2,0,0xc,iVar1,iVar3,iVar2);
  FUN_00407da0();
  FUN_00403840(local_14 + 5,local_18 + 5,local_c + 5,local_10 + 5,local_1c + 5,param_2 + 5,1);
  FUN_00403840(local_14 + 5,local_18 + 5,local_1c + 5,param_2 + 5,local_4 + 5,local_8 + 5,1);
  FUN_00403840(local_14,local_18,local_c,local_10,local_1c,param_2,5);
  FUN_00403840(local_14,local_18,local_1c,param_2,local_4,local_8,5);
  return;
}


