// FUN_00740d70 @ 740d70 size=273

void FUN_00740d70(void)

{
  UINT UVar1;
  int iVar2;
  char cVar3;
  int local_8;
  undefined *local_4;
  
  do {
    cVar3 = 'A';
    local_4 = PTR_LAB_00874224;
    do {
      local_4 = (undefined *)CONCAT31(local_4._1_3_,cVar3);
      UVar1 = GetDriveTypeA((LPCSTR)&local_4);
      if ((((UVar1 == 5) &&
           (s_d__1111_VPP_00874140[0] = cVar3, s_d__2222_VPP_0087414c[0] = cVar3,
           s_d__3333_VPP_00874158[0] = cVar3, s_d__4444_VPP_00874164[0] = cVar3,
           FUN_00740c70(0x29834000,s_d__1111_VPP_00874140,0x40,&local_8,2), local_8 != 0)) &&
          (FUN_00740c70(0x29839800,s_d__2222_VPP_0087414c,0x5e,&local_8,2), local_8 != 0)) &&
         ((FUN_00740c70(0x29823800,s_d__3333_VPP_00874158,0x3a,&local_8,2), local_8 != 0 &&
          (FUN_00740c70(0x29846800,s_d__4444_VPP_00874164,0x34,&local_8,2), local_8 != 0)))) {
        return;
      }
      cVar3 = cVar3 + '\x01';
    } while (cVar3 < '[');
    iVar2 = MessageBoxA((HWND)0x0,s_EU_CD_not_found__Please_insert_C_008741f0,s_Error_0087421c,5);
    if (iVar2 == 2) {
      FUN_007a64d3(0);
      return;
    }
  } while (iVar2 == 4);
  return;
}


