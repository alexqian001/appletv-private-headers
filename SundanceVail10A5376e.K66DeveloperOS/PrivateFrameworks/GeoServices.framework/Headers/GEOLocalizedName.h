/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library
#import "GeoServices-Structs.h"

@class NSString;

@interface GEOLocalizedName : PBCodable {
	NSString *_languageCode;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	unsigned _nameRank;	// 12 = 0xc
	NSString *_nameType;	// 16 = 0x10
	NSString *_phoneticName;	// 20 = 0x14
	BOOL _isDefault;	// 24 = 0x18
	XXStruct_UvnNeB _has;	// 25 = 0x19
}
@property(assign, nonatomic) BOOL hasIsDefault;	// G=0x37a99765; S=0x37a99745; 
@property(readonly, assign, nonatomic) BOOL hasLanguageCode;	// G=0x37a99779; 
@property(readonly, assign, nonatomic) BOOL hasName;	// G=0x37a997a9; 
@property(assign, nonatomic) BOOL hasNameRank;	// G=0x37a99805; S=0x37a997e9; 
@property(readonly, assign, nonatomic) BOOL hasNameType;	// G=0x37a99791; 
@property(readonly, assign, nonatomic) BOOL hasPhoneticName;	// G=0x37a99819; 
@property(assign, nonatomic) BOOL isDefault;	// G=0x37a9a209; S=0x37a9971d; @synthesize=_isDefault
@property(retain, nonatomic) NSString *languageCode;	// G=0x37a9a219; S=0x37a9a229; @synthesize=_languageCode
@property(retain, nonatomic) NSString *name;	// G=0x37a9a259; S=0x37a9a269; @synthesize=_name
@property(assign, nonatomic) unsigned nameRank;	// G=0x37a9a279; S=0x37a997c1; @synthesize=_nameRank
@property(retain, nonatomic) NSString *nameType;	// G=0x37a9a239; S=0x37a9a249; @synthesize=_nameType
@property(retain, nonatomic) NSString *phoneticName;	// G=0x37a9a289; S=0x37a9a299; @synthesize=_phoneticName
- (void)copyTo:(id)to;	// 0x37a99e15
- (void)dealloc;	// 0x37a9969d
- (id)description;	// 0x37a99831
- (id)dictionaryRepresentation;	// 0x37a998a1
// declared property getter: - (BOOL)hasIsDefault;	// 0x37a99765
// declared property getter: - (BOOL)hasLanguageCode;	// 0x37a99779
// declared property getter: - (BOOL)hasName;	// 0x37a997a9
// declared property getter: - (BOOL)hasNameRank;	// 0x37a99805
// declared property getter: - (BOOL)hasNameType;	// 0x37a99791
// declared property getter: - (BOOL)hasPhoneticName;	// 0x37a99819
- (unsigned)hash;	// 0x37a9a111
// declared property getter: - (BOOL)isDefault;	// 0x37a9a209
- (BOOL)isEqual:(id)equal;	// 0x37a99f99
// declared property getter: - (id)languageCode;	// 0x37a9a219
// declared property getter: - (id)name;	// 0x37a9a259
// declared property getter: - (unsigned)nameRank;	// 0x37a9a279
// declared property getter: - (id)nameType;	// 0x37a9a239
// declared property getter: - (id)phoneticName;	// 0x37a9a289
- (BOOL)readFrom:(id)from;	// 0x37a99d09
// declared property setter: - (void)setHasIsDefault:(BOOL)aDefault;	// 0x37a99745
// declared property setter: - (void)setHasNameRank:(BOOL)rank;	// 0x37a997e9
// declared property setter: - (void)setIsDefault:(BOOL)aDefault;	// 0x37a9971d
// declared property setter: - (void)setLanguageCode:(id)code;	// 0x37a9a229
// declared property setter: - (void)setName:(id)name;	// 0x37a9a269
// declared property setter: - (void)setNameRank:(unsigned)rank;	// 0x37a997c1
// declared property setter: - (void)setNameType:(id)type;	// 0x37a9a249
// declared property setter: - (void)setPhoneticName:(id)name;	// 0x37a9a299
- (void)writeTo:(id)to;	// 0x37a99d15
@end
