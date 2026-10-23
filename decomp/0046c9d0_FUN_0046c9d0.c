// FUN_0046c9d0 @ 46c9d0 size=2273

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0046c9d0(int *param_1,int *param_2)

{
  float fVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  float10 fVar12;
  float local_8;
  
  piVar3 = param_1;
  local_8 = 0.0;
  if ((param_2 == (int *)0x0) || (param_1 == (int *)0x0)) {
    return (float10)_DAT_007e3380;
  }
  iVar6 = *(int *)((int)param_1 + 0x32);
  fVar12 = (float10)FUN_0050a030();
  iVar8 = *(int *)((int)param_1 + 0x3e);
  fVar1 = (float)((float10)iVar6 + fVar12);
  if (iVar8 < 1) {
    uVar5 = (**(code **)(*(int *)(*(int *)((int)param_1 + 0x62) + 0xe) + 0xc))(iVar8);
    uVar5 = (**(code **)(*param_1 + 0xc))(uVar5);
    FUN_00429a00(s_Warning__Military_leader__s_from_0083cad0,uVar5);
    param_1 = (int *)fVar1;
  }
  else {
    param_1 = (int *)((float)((iVar8 - *(int *)((int)param_1 + 0x32)) / iVar8) + fVar1);
  }
  cVar4 = (**(code **)(*param_2 + 0x28))();
  if (cVar4 == '\0') {
    cVar4 = (**(code **)(*param_2 + 0x30))();
    if (cVar4 != '\0') {
      param_1 = (int *)((float)param_1 * _DAT_007e67fc);
      piVar7 = *(int **)((int)param_2 + 0x26);
      do {
        if (piVar7 == (int *)0x0) {
          if ((*(uint *)((int)piVar3 + 0x1e) >> 0xc & 1) != 0) {
            param_1 = (int *)((float)param_1 + (float)param_1);
          }
          iVar6 = (**(code **)(*(int *)((int)param_2 + 0x22) + 4))();
          iVar8 = FUN_0050a580();
          if (iVar8 != iVar6) {
            iVar6 = (**(code **)(*(int *)((int)param_2 + 0x22) + 4))();
            iVar8 = FUN_0050a580();
            if (iVar8 <= iVar6) {
              iVar6 = FUN_0050a580();
              iVar8 = (**(code **)(*(int *)((int)param_2 + 0x22) + 4))();
              return (float10)_DAT_007e3374 / (float10)((1 - iVar6) + iVar8);
            }
            return (float10)(float)param_1;
          }
          return (float10)(float)param_1 + (float10)_DAT_007e3650;
        }
        switch(*(undefined4 *)(*piVar7 + 0x134)) {
        case 0xc:
        case 0xd:
          uVar10 = *(uint *)((int)piVar3 + 0x1e);
          uVar11 = uVar10 >> 0xd;
          goto joined_r0x0046d00f;
        case 0xe:
          uVar10 = *(uint *)((int)piVar3 + 0x1e);
          uVar11 = uVar10 >> 0xf;
joined_r0x0046d00f:
          bVar9 = (byte)(uVar10 >> 0x10);
          if ((uVar11 & 1) != 0) {
            param_1 = (int *)((float)param_1 + _DAT_007e5e34);
          }
LAB_0046cff9:
          if ((bVar9 & 1) != 0) {
            param_1 = (int *)((float)param_1 + _DAT_007e3374);
          }
          break;
        case 0xf:
        case 0x11:
          if ((*(uint *)((int)piVar3 + 0x1e) >> 0xe & 1) != 0) {
            param_1 = (int *)((float)param_1 + _DAT_007e5e34);
          }
          bVar9 = (byte)(*(uint *)((int)piVar3 + 0x1e) >> 0xf);
          goto LAB_0046cff9;
        case 0x10:
          if ((*(uint *)((int)piVar3 + 0x1e) >> 0x11 & 1) != 0) {
            param_1 = (int *)((float)param_1 + _DAT_007e5e34);
          }
        }
        piVar7 = (int *)piVar7[2];
      } while( true );
    }
    cVar4 = (**(code **)(*param_2 + 0x2c))();
    if (cVar4 != '\0') {
      param_1 = (int *)((float)param_1 + (float)param_1);
      if (((*(uint *)((int)piVar3 + 0x1e) >> 10 & 1) != 0) &&
         (cVar4 = (**(code **)(*param_2 + 0x70))(), cVar4 != '\0')) {
        param_1 = (int *)((float)param_1 * _DAT_007e384c);
      }
      piVar7 = *(int **)((int)param_2 + 0x26);
      while (piVar7 != (int *)0x0) {
        piVar2 = (int *)piVar7[2];
        iVar6 = *(int *)(*piVar7 + 0x134);
        if (iVar6 == 0x1a) {
          if ((*(uint *)((int)piVar3 + 0x1e) >> 0xb & 1) != 0) {
            param_1 = (int *)((float)param_1 + _DAT_007e384c);
          }
          piVar7 = piVar2;
          if ((*(uint *)((int)piVar3 + 0x1e) >> 0xd & 1) != 0) {
            param_1 = (int *)((float)param_1 + _DAT_007e384c);
          }
        }
        else if (iVar6 == 0x1c) {
          uVar10 = *(uint *)((int)piVar3 + 0x1e);
          if ((uVar10 >> 10 & 1) != 0) {
            param_1 = (int *)((float)param_1 + (float)(*(int *)(*piVar7 + 0x138) + 4));
          }
          if ((uVar10 >> 0xb & 1) != 0) {
            param_1 = (int *)((float)param_1 + _DAT_007e3374);
          }
          piVar7 = piVar2;
          if ((uVar10 >> 0xd & 1) != 0) {
            param_1 = (int *)((float)param_1 + _DAT_007e5e34);
          }
        }
        else {
          uVar10 = *(uint *)((int)piVar3 + 0x1e);
          if (iVar6 == 0x1e) {
            if ((uVar10 >> 0xb & 1) != 0) {
              param_1 = (int *)((float)param_1 + _DAT_007e4074);
            }
            piVar7 = piVar2;
            if ((uVar10 >> 0xd & 1) != 0) {
              param_1 = (int *)((float)param_1 - _DAT_007e5e34);
            }
          }
          else {
            if ((uVar10 >> 0xb & 1) != 0) {
              param_1 = (int *)((float)param_1 + _DAT_007e3374);
            }
            piVar7 = piVar2;
            if ((uVar10 >> 0xd & 1) != 0) {
              param_1 = (int *)((float)param_1 + _DAT_007e3374);
            }
          }
        }
      }
      if ((*(uint *)((int)piVar3 + 0x1e) >> 0xc & 1) != 0) {
        param_1 = (int *)((float)param_1 * _DAT_007e384c);
      }
      if ((*(uint *)((int)piVar3 + 0x1e) >> 9 & 1) != 0) {
        cVar4 = FUN_0044beb0();
        fVar1 = _DAT_007e687c;
        if (cVar4 != '\0') {
          fVar1 = _DAT_007e6878;
        }
        param_1 = (int *)((float)param_1 * fVar1);
      }
      iVar6 = (**(code **)(*(int *)((int)param_2 + 0x22) + 4))();
      iVar8 = FUN_0050a580();
      if (iVar8 != iVar6) {
        iVar6 = (**(code **)(*(int *)((int)param_2 + 0x22) + 4))();
        iVar8 = FUN_0050a580();
        if (iVar8 <= iVar6) {
          iVar6 = FUN_0050a580();
          iVar8 = (**(code **)(*(int *)((int)param_2 + 0x22) + 4))();
          return (float10)_DAT_007e3374 / (float10)((1 - iVar6) + iVar8);
        }
        return (float10)(float)param_1;
      }
      return (float10)(float)param_1 + (float10)_DAT_007e5e34;
    }
    goto LAB_0046d299;
  }
  param_1 = (int *)((float)param_1 * _DAT_007e384c);
  if (((*(uint *)((int)piVar3 + 0x1e) >> 3 & 1) != 0) &&
     ((iVar6 = FUN_0051b230(), *(int *)(iVar6 + 0x250) == 1 ||
      (iVar6 = FUN_0051b230(), *(int *)(iVar6 + 0x250) == 2)))) {
    param_1 = (int *)((float)param_1 + (float)param_1);
  }
  piVar7 = *(int **)((int)param_2 + 0x26);
  while (piVar7 != (int *)0x0) {
    piVar2 = (int *)piVar7[2];
    iVar6 = *piVar7;
    if ((_DAT_007e3380 < *(float *)(iVar6 + 0x2fc)) &&
       ((*(uint *)((int)piVar3 + 0x1e) >> 5 & 1) != 0)) {
      param_1 = (int *)((float)param_1 + _DAT_007e5e34);
    }
    switch(*(undefined4 *)(iVar6 + 0x134)) {
    case 0:
      uVar10 = *(uint *)((int)piVar3 + 0x1e);
      if ((uVar10 >> 2 & 1) != 0) {
        param_1 = (int *)((float)param_1 + _DAT_007e384c);
      }
      if ((uVar10 >> 1 & 1) != 0) {
        param_1 = (int *)((float)param_1 + _DAT_007e5e34);
      }
      if ((uVar10 >> 4 & 1) != 0) {
        param_1 = (int *)((float)param_1 + _DAT_007e3374);
      }
      if ((uVar10 >> 6 & 1) != 0) {
        param_1 = (int *)((float)param_1 + _DAT_007e3374);
      }
      if ((*(byte *)((int)piVar3 + 0x1e) & 1) != 0) {
        param_1 = (int *)((float)param_1 + _DAT_007e3374);
      }
      if ((uVar10 >> 7 & 1) != 0) {
        param_1 = (int *)((float)param_1 - _DAT_007e384c);
      }
      if ((uVar10 & 0x100) == 0) break;
      goto LAB_0046cd04;
    case 1:
    case 2:
      uVar10 = *(uint *)((int)piVar3 + 0x1e);
      if ((uVar10 >> 2 & 1) != 0) {
        param_1 = (int *)((float)param_1 + _DAT_007e3848);
      }
      if ((uVar10 >> 1 & 1) != 0) {
        param_1 = (int *)((float)param_1 + _DAT_007e5e34);
      }
      if ((uVar10 >> 4 & 1) != 0) {
        param_1 = (int *)((float)param_1 + _DAT_007e3374);
      }
      if ((*(byte *)((int)piVar3 + 0x1e) & 1) != 0) {
        param_1 = (int *)((float)param_1 + _DAT_007e3374);
      }
      if ((uVar10 >> 7 & 1) != 0) {
        param_1 = (int *)((float)param_1 - _DAT_007e3374);
      }
      goto joined_r0x0046cd02;
    case 3:
    case 4:
    case 5:
      uVar10 = *(uint *)((int)piVar3 + 0x1e);
      if ((uVar10 >> 7 & 1) != 0) {
        param_1 = (int *)((float)param_1 + (float)(*(int *)(iVar6 + 0x138) + 4));
      }
      if ((uVar10 >> 2 & 1) != 0) {
        param_1 = (int *)((float)param_1 + _DAT_007e384c);
      }
      if ((uVar10 >> 1 & 1) != 0) {
        param_1 = (int *)((float)param_1 + _DAT_007e5e34);
      }
      if ((*(byte *)((int)piVar3 + 0x1e) & 1) != 0) {
        param_1 = (int *)((float)param_1 + _DAT_007e5e34);
      }
      if ((uVar10 >> 4 & 1) != 0) {
        param_1 = (int *)((float)param_1 + _DAT_007e3374);
      }
      if (((uVar10 & 0x100) != 0) && ((uVar10 >> 7 & 1) == 0)) goto LAB_0046cd04;
      break;
    case 6:
    case 7:
    case 8:
      uVar10 = *(uint *)((int)piVar3 + 0x1e);
      if ((uVar10 & 0x100) != 0) {
        param_1 = (int *)((float)param_1 + _DAT_007e4074);
      }
      if ((uVar10 >> 2 & 1) != 0) {
        param_1 = (int *)((float)param_1 + _DAT_007e384c);
      }
      if ((uVar10 >> 4 & 1) != 0) {
        param_1 = (int *)((float)param_1 + _DAT_007e3374);
      }
      if ((uVar10 >> 6 & 1) != 0) {
        param_1 = (int *)((float)param_1 + _DAT_007e3374);
      }
      if ((uVar10 >> 1 & 1) != 0) {
        param_1 = (int *)((float)param_1 + _DAT_007e5e34);
      }
      if ((*(byte *)((int)piVar3 + 0x1e) & 1) != 0) {
        param_1 = (int *)((float)param_1 + _DAT_007e3374);
      }
      break;
    case 9:
    case 0xb:
      uVar10 = *(uint *)((int)piVar3 + 0x1e);
      if ((uVar10 >> 7 & 1) != 0) {
        param_1 = (int *)((float)param_1 - _DAT_007e3848);
      }
      if ((uVar10 & 0x100) != 0) {
        param_1 = (int *)((float)param_1 - _DAT_007e3848);
      }
      if ((uVar10 >> 2 & 1) != 0) {
        param_1 = (int *)((float)param_1 - _DAT_007e3848);
      }
      if ((*(byte *)((int)piVar3 + 0x1e) & 1) == 0) {
        if ((uVar10 >> 1 & 1) != 0) {
          param_1 = (int *)((float)param_1 + _DAT_007e5e34);
        }
      }
      else {
        param_1 = (int *)((float)param_1 - _DAT_007e5e34);
      }
      break;
    case 10:
      uVar10 = *(uint *)((int)piVar3 + 0x1e);
      if ((uVar10 >> 9 & 1) != 0) {
        param_1 = (int *)((float)param_1 + _DAT_007e5e34);
      }
      if ((uVar10 >> 7 & 1) != 0) {
        param_1 = (int *)((float)param_1 - _DAT_007e5e34);
      }
joined_r0x0046cd02:
      if ((uVar10 & 0x100) != 0) {
LAB_0046cd04:
        param_1 = (int *)((float)param_1 - _DAT_007e3848);
      }
    }
    piVar7 = piVar2;
    if (*(char *)(iVar6 + 0x155) != '\0') {
      if ((*(uint *)((int)piVar3 + 0x1e) >> 2 & 1) == 0) {
        if ((*(uint *)((int)piVar3 + 0x1e) >> 1 & 1) != 0) {
          param_1 = (int *)((float)param_1 + _DAT_007e3848);
        }
      }
      else {
        param_1 = (int *)((float)param_1 * _DAT_007e40b8);
      }
      if ((*(byte *)((int)piVar3 + 0x1e) & 1) != 0) {
        param_1 = (int *)((float)param_1 + _DAT_007e5e34);
      }
    }
  }
  iVar6 = FUN_0051b230();
  fVar1 = _DAT_00dc1664;
  switch(*(undefined4 *)(iVar6 + 0x254)) {
  case 1:
    if (((*(uint *)((int)piVar3 + 0x1e) >> 0x15 & 1) == 0) &&
       (iVar6 = FUN_0051c480(), fVar1 = _DAT_00dc1668, (*(uint *)(iVar6 + 0x1e) >> 0x13 & 1) == 0))
    goto switchD_0046cd66_default;
    goto LAB_0046ce24;
  case 2:
    if ((*(uint *)((int)piVar3 + 0x1e) >> 0x16 & 1) != 0) goto LAB_0046ce24;
    iVar6 = FUN_0051c480();
    uVar10 = *(uint *)(iVar6 + 0x1e) >> 0x17;
    fVar1 = _DAT_00dc1668;
    break;
  case 3:
    uVar10 = *(uint *)((int)piVar3 + 0x1e) >> 0x12;
    break;
  case 4:
  case 6:
    if ((*(uint *)((int)piVar3 + 0x1e) >> 0x13 & 1) != 0) goto LAB_0046ce24;
    iVar6 = FUN_0051c480();
    uVar10 = *(uint *)(iVar6 + 0x1e) >> 0x15;
    fVar1 = _DAT_00dc1668;
    break;
  case 5:
    if ((*(uint *)((int)piVar3 + 0x1e) >> 0x17 & 1) != 0) goto LAB_0046ce24;
    iVar6 = FUN_0051c480();
    uVar10 = *(uint *)(iVar6 + 0x1e) >> 0x16;
    fVar1 = _DAT_00dc1668;
    break;
  case 7:
    uVar10 = *(uint *)((int)piVar3 + 0x1e) >> 0x14;
    break;
  default:
    goto switchD_0046cd66_default;
  }
  if ((uVar10 & 1) != 0) {
LAB_0046ce24:
    param_1 = (int *)((fVar1 + _DAT_007e3374) * (float)param_1);
  }
switchD_0046cd66_default:
  cVar4 = FUN_0044beb0();
  if (cVar4 == '\0') {
    if ((*(byte *)((int)piVar3 + 0x1e) & 1) != 0) {
      param_1 = (int *)((float)param_1 * _DAT_007e4090);
    }
    if ((*(uint *)((int)piVar3 + 0x1e) >> 9 & 1) != 0) {
      param_1 = (int *)((float)param_1 * _DAT_007e687c);
    }
  }
  else if ((*(uint *)((int)piVar3 + 0x1e) >> 9 & 1) != 0) {
    param_1 = (int *)((float)param_1 * _DAT_007e6878);
  }
  if ((((*(int *)((int)piVar3 + 0x22) < 2) && (cVar4 = FUN_0051cc00(), cVar4 != '\0')) &&
      (iVar6 = (**(code **)(*(int *)((int)param_2 + 0x22) + 4))(), iVar6 == 1)) &&
     ((*(uint *)((int)piVar3 + 0x1e) >> 9 & 1) != 0)) {
    local_8 = (float)param_1 + _DAT_007e681c;
  }
  else {
    piVar7 = (int *)FUN_0051c480();
    if ((piVar3 == piVar7) && (cVar4 = FUN_0051cc30(), cVar4 != '\0')) {
      local_8 = (float)param_1 + _DAT_007e4090;
    }
    else if ((*(int *)((int)piVar3 + 0x22) < 2) &&
            ((cVar4 = FUN_0051cc00(), cVar4 != '\0' && (cVar4 = FUN_0051cc30(), cVar4 == '\0')))) {
      local_8 = (float)param_1 + _DAT_007e682c;
    }
    else {
      iVar6 = (**(code **)(*(int *)((int)param_2 + 0x22) + 4))();
      iVar8 = FUN_0050a580();
      if (iVar8 == iVar6) {
        local_8 = (float)param_1 + _DAT_007e384c;
      }
      else {
        iVar6 = (**(code **)(*(int *)((int)param_2 + 0x22) + 4))();
        iVar8 = FUN_0050a580();
        if (iVar6 < iVar8) {
          local_8 = (float)param_1;
        }
        else {
          iVar6 = FUN_0050a580();
          iVar8 = (**(code **)(*(int *)((int)param_2 + 0x22) + 4))();
          local_8 = _DAT_007e3374 / (float)((1 - iVar6) + iVar8);
        }
      }
    }
  }
  cVar4 = FUN_0051cc00();
  if ((cVar4 == '\0') && (*(int *)((int)piVar3 + 0x22) < 2)) {
    return (float10)local_8 * (float10)_DAT_007e6874;
  }
LAB_0046d299:
  return (float10)local_8;
}


