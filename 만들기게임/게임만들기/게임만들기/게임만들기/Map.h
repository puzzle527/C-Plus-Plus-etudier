#pragma once
class Map
{
protected:
	string			Mapname;
	int				Input;
	Inventory*		pInven;
	vector<Mop*>	Monster;
	Ataho*			pAtaho;
	Store*			pStore;

public:
	Map();
	Map(string na);
	~Map();
	MAKESET(Inventory*, pInven)
	MAKESET(Ataho*, pAtaho)
	virtual int		Play();
	virtual void	InitMob();
	virtual void	FightMob();
	virtual int		UseSkill();
	virtual void	DamageSkill(int SKnum, int Monum);
	virtual void	UseInven();
	virtual void	InitpStore();
};

class AtahoHome : public Map
{
public:
	int Play() override;
};

class MountainRoad : public Map
{
public:
	int		Play()								override;
	void	InitMob()							override;
	void	FightMob()							override;
	int		UseSkill()							override;
	void	DamageSkill(int SKnum, int Monum)	override;
	void	UseInven()							override;
};

class SeasideVillage : public Map
{
public:
	int		Play()								override;
	void	InitpStore()						override;
	void	UseInven()							override;
};