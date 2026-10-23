// FUN_007b56a0 @ 7b56a0 size=428

bool FUN_007b56a0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  if (DAT_0088005c != 0) {
    iVar2 = param_1[5];
    if ((iVar2 != DAT_008800f0) || (iVar2 != DAT_00880100)) {
      if (DAT_00dc53e0 == 0) {
        FUN_007b584c(1,1,iVar2,4,1,0,0,2,0,0,0);
        FUN_007b584c(0,1,param_1[5],10,5,0,0,2,0,0,0);
      }
      else {
        if (DAT_00dc5480 != 0) {
          uVar4 = 0;
          uVar3 = 0;
          uVar5 = DAT_00dc5486;
        }
        else {
          uVar4 = DAT_00dc5484;
          uVar3 = DAT_00dc5486;
          uVar5 = 0;
        }
        FUN_007b584c(1,DAT_00dc5480 == 0,iVar2,DAT_00dc5482,uVar3,uVar4,uVar5,DAT_00dc5488,
                     DAT_00dc548a,DAT_00dc548c,DAT_00dc548e);
        if (DAT_00dc542c != 0) {
          uVar4 = 0;
          uVar3 = 0;
          iVar2 = param_1[5];
          uVar5 = DAT_00dc5432;
        }
        else {
          iVar2 = param_1[5];
          uVar4 = DAT_00dc5430;
          uVar3 = DAT_00dc5432;
          uVar5 = 0;
        }
        FUN_007b584c(0,DAT_00dc542c == 0,iVar2,DAT_00dc542e,uVar3,uVar4,uVar5,DAT_00dc5434,
                     DAT_00dc5436,DAT_00dc5438,DAT_00dc543a);
      }
    }
    iVar2 = param_1[7];
    if (DAT_008800f4 < DAT_00880104) {
      if ((DAT_008800f4 <= iVar2) && (iVar2 <= DAT_00880104)) {
        if ((DAT_008800f4 < iVar2) && (iVar2 < DAT_00880104)) {
          return true;
        }
LAB_007b5818:
        iVar1 = ((param_1[2] * 0x3c + param_1[1]) * 0x3c + *param_1) * 1000;
        if (iVar2 == DAT_008800f4) {
          return DAT_008800f8 <= iVar1;
        }
        return iVar1 < DAT_00880108;
      }
    }
    else {
      if (iVar2 < DAT_00880104) {
        return true;
      }
      if (DAT_008800f4 < iVar2) {
        return true;
      }
      if ((iVar2 <= DAT_00880104) || (DAT_008800f4 <= iVar2)) goto LAB_007b5818;
    }
  }
  return false;
}


