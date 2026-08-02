modded class TentBase
{
	override bool OnStoreLoad(ParamsReadContext ctx, int version)
	{
		super.OnStoreLoad(ctx, version);
		m_OpeningMask = 0; /* should cause all flaps/windows/doors to be open on load
	}
};
