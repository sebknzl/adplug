/*
 * Adplug - Replayer for many OPL2/OPL3 audio file formats.
 * Copyright (C) 1999, 2000, 2001 Simon Peter, <dn.tlp@gmx.net>, et al.
 * 
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 *
 * imfcrc.h - CRC checksums for non-standard IMF files, by Simon Peter (dn.tlp@gmx.net)
 */

#define MAXFILES	41

static const struct {
	unsigned long crc,size;
	float rate;
} filetab[MAXFILES] = {
	// Bio Menace
	{140403894u,3856,600.0f},		// apogfanf.imf
	{3898052868u,8088,600.0f},		// bayou.imf
	{2335066612u,10488,600.0f},		// biothem1.imf
	{3117733582u,12820,600.0f},		// cantget.imf
	{1421676307u,12616,600.0f},		// chasing.imf
	{917939824u,14584,600.0f},		// cruising.imf
	{611447850u,13204,600.0f},		// dirtyh20.imf
	{4059528298u,10896,600.0f},		// drshock.imf
	{3217132565u,7448,600.0f},		// likitwas.imf
	{502377849u,2188,600.0f},		// nonvince.imf
	{2484288080u,14680,600.0f},		// prisoner.imf
	{1629823587u,4272,600.0f},		// resting.imf
	{1956572352u,14760,600.0f},		// roboty.imf
	{1628531752u,21152,600.0f},		// rockinit.imf
	{4077307948u,7076,600.0f},		// saved.imf
	{639488439u,12232,600.0f},		// snaksave.imf
	{1119930336u,13604,600.0f},		// weasel.imf
	{3911355851u,14704,600.0f},		// xcity.imf

	// Duke Nukem 2
	{144795658u,24804,280.0f},		// dn2_1.imf
	{2588111802u,34768,280.0f},		// dn2_2.imf

	// Commander Keen 4-6
	{3682452985u,6324,560.44f},		// 2FUTURE.IMF
	{2641664289u,23052,560.44f},	// ALIENATE.IMF
	{600529047u,6440,560.44f},		// BAGPIPES.IMF
	{151363365u,13156,560.44f},		// BRER_TAR.IMF
	{2227664803u,4816,560.44f},		// BULLFROG.IMF
	{4119841757u,4408,560.44f},		// CAMEIN.IMF
	{3053030905u,4192,560.44f},		// DOPEY.IMF
	{2934446598u,12416,560.44f},	// FASTER.IMF
	{1339593761u,9260,560.44f},		// FNFARE01.IMF
	{552106695u,3220,560.44f},		// ISCREAM.IMF
	{3999058425u,26144,560.44f},	// JAZZME.IMF
	{4050367348u,7200,560.44f},		// KICKPANT.IMF
	{1005311586u,9672,560.44f},		// MAMSNAKE.IMF
	{3162236431u,6624,560.44f},		// METAL.IMF
	{2220431570u,25824,560.44f},	// OASIS.IMF
	{4268722134u,6340,560.44f},		// OMINOUS.IMF
	{3334910941u,4560,560.44f},		// SHADOWS.IMF
	{3877200415u,17108,560.44f},	// SNOOPIN1.IMF
	{234581740u,5136,560.44f},		// SPACFUNK.IMF
	{3784522900u,2740,560.44f},		// TOOHOT.IMF
	{287158407u,9896,560.44f}		// VEGGIES.IMF
};
