///////////////////////////////////////////////////////////////
// ElectricBall.cpp
// ElectricBall - �������� ������������� ���
///////////////////////////////////////////////////////////////

#include "ElectricBall.h"
#include "stdafx.h"
#include "xrPhysics/PhysicsShell.h"

CElectricBall::CElectricBall(void)
{
}

CElectricBall::~CElectricBall(void)
{
}

void CElectricBall::Load(LPCSTR section)
{
    inherited::Load(section);
}

void CElectricBall::UpdateCLChild()
{
    inherited::UpdateCLChild();

    if (H_Parent()) XFORM().set(H_Parent()->XFORM());
};