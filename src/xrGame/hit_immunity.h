// hit_immunity.h: ����� ��� ��� ��������, ������� ������������
//				   ������������ ���������� ��� ������ ����� �����
//////////////////////////////////////////////////////////////////////

#pragma once

#include "alife_space.h"
#include "hit_immunity_space.h"

class CInifile;

class CHitImmunity
{
    //������������ �� ������� ����������� ���
    //��� ��������������� ���� �����������
    //(��� �������� �������� � ����������� ��������)
private:
    HitImmunity::HitTypeSVec m_HitImmunityKoefs;

public:
    CHitImmunity();
    virtual ~CHitImmunity();

    void LoadImmunities(const char* section, const CInifile* ini);
    void AddImmunities(const char* section, const CInifile* ini);
    float GetHitImmunity(ALife::EHitType hit_type) const { return m_HitImmunityKoefs[hit_type]; }
    float AffectHit(float power, ALife::EHitType hit_type) const { return power * GetHitImmunity(hit_type); }
};
