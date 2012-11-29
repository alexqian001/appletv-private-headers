/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBCodable.h> // Unknown library

@class NSString, NSMutableArray;

@interface GEOStructuredAddress : PBCodable {
	XXStruct_19EQxD _geoIds;	// 4 = 0x4
	NSString *_administrativeArea;	// 16 = 0x10
	NSString *_administrativeAreaCode;	// 20 = 0x14
	NSMutableArray *_areaOfInterests;	// 24 = 0x18
	NSString *_country;	// 28 = 0x1c
	NSString *_countryCode;	// 32 = 0x20
	NSMutableArray *_dependentLocalitys;	// 36 = 0x24
	NSString *_fullThoroughfare;	// 40 = 0x28
	NSString *_inlandWater;	// 44 = 0x2c
	NSString *_locality;	// 48 = 0x30
	NSString *_ocean;	// 52 = 0x34
	NSString *_postCode;	// 56 = 0x38
	NSString *_postCodeExtension;	// 60 = 0x3c
	NSString *_premise;	// 64 = 0x40
	NSString *_premises;	// 68 = 0x44
	NSString *_subAdministrativeArea;	// 72 = 0x48
	NSString *_subLocality;	// 76 = 0x4c
	NSMutableArray *_subPremises;	// 80 = 0x50
	NSString *_subThoroughfare;	// 84 = 0x54
	NSString *_thoroughfare;	// 88 = 0x58
}
@property(retain, nonatomic) NSString *administrativeArea;	// G=0x302442c9; S=0x30244e89; @synthesize=_administrativeArea
@property(retain, nonatomic) NSString *administrativeAreaCode;	// G=0x3027ff65; S=0x30244e99; @synthesize=_administrativeAreaCode
@property(retain, nonatomic) NSMutableArray *areaOfInterests;	// G=0x3027ff85; S=0x30244f39; @synthesize=_areaOfInterests
@property(retain, nonatomic) NSString *country;	// G=0x30244349; S=0x30244e69; @synthesize=_country
@property(retain, nonatomic) NSString *countryCode;	// G=0x30244289; S=0x30244e79; @synthesize=_countryCode
@property(retain, nonatomic) NSMutableArray *dependentLocalitys;	// G=0x3027ff95; S=0x30244f69; @synthesize=_dependentLocalitys
@property(retain, nonatomic) NSString *fullThoroughfare;	// G=0x30244299; S=0x30244f19; @synthesize=_fullThoroughfare
@property(readonly, assign, nonatomic) long long *geoIds;	// G=0x3027ed49; 
@property(readonly, assign, nonatomic) unsigned geoIdsCount;	// G=0x3027ed35; 
@property(readonly, assign, nonatomic) BOOL hasAdministrativeArea;	// G=0x3027e9ed; 
@property(readonly, assign, nonatomic) BOOL hasAdministrativeAreaCode;	// G=0x3027ea05; 
@property(readonly, assign, nonatomic) BOOL hasCountry;	// G=0x3027e9bd; 
@property(readonly, assign, nonatomic) BOOL hasCountryCode;	// G=0x3027e9d5; 
@property(readonly, assign, nonatomic) BOOL hasFullThoroughfare;	// G=0x3027eac5; 
@property(readonly, assign, nonatomic) BOOL hasInlandWater;	// G=0x3027ebc1; 
@property(readonly, assign, nonatomic) BOOL hasLocality;	// G=0x3027ea35; 
@property(readonly, assign, nonatomic) BOOL hasOcean;	// G=0x3027ebd9; 
@property(readonly, assign, nonatomic) BOOL hasPostCode;	// G=0x3027ea4d; 
@property(readonly, assign, nonatomic) BOOL hasPostCodeExtension;	// G=0x3027eadd; 
@property(readonly, assign, nonatomic) BOOL hasPremise;	// G=0x3027ec51; 
@property(readonly, assign, nonatomic) BOOL hasPremises;	// G=0x3027ea7d; 
@property(readonly, assign, nonatomic) BOOL hasSubAdministrativeArea;	// G=0x3027ea1d; 
@property(readonly, assign, nonatomic) BOOL hasSubLocality;	// G=0x3027ea65; 
@property(readonly, assign, nonatomic) BOOL hasSubThoroughfare;	// G=0x3027eaad; 
@property(readonly, assign, nonatomic) BOOL hasThoroughfare;	// G=0x3027ea95; 
@property(retain, nonatomic) NSString *inlandWater;	// G=0x30244329; S=0x30244f49; @synthesize=_inlandWater
@property(retain, nonatomic) NSString *locality;	// G=0x302442b9; S=0x30244eb9; @synthesize=_locality
@property(retain, nonatomic) NSString *ocean;	// G=0x30244339; S=0x30244f59; @synthesize=_ocean
@property(retain, nonatomic) NSString *postCode;	// G=0x302442d9; S=0x30244ec9; @synthesize=_postCode
@property(retain, nonatomic) NSString *postCodeExtension;	// G=0x3027ff75; S=0x30244f29; @synthesize=_postCodeExtension
@property(retain, nonatomic) NSString *premise;	// G=0x3027ffa5; S=0x30244f79; @synthesize=_premise
@property(retain, nonatomic) NSString *premises;	// G=0x30244309; S=0x30244ee9; @synthesize=_premises
@property(retain, nonatomic) NSString *subAdministrativeArea;	// G=0x302442e9; S=0x30244ea9; @synthesize=_subAdministrativeArea
@property(retain, nonatomic) NSString *subLocality;	// G=0x302442f9; S=0x30244ed9; @synthesize=_subLocality
@property(retain, nonatomic) NSMutableArray *subPremises;	// G=0x3027ffb5; S=0x30244f89; @synthesize=_subPremises
@property(retain, nonatomic) NSString *subThoroughfare;	// G=0x30244319; S=0x30244f09; @synthesize=_subThoroughfare
@property(retain, nonatomic) NSString *thoroughfare;	// G=0x302442a9; S=0x30244ef9; @synthesize=_thoroughfare
- (void)addAreaOfInterest:(id)interest;	// 0x3027eb15
- (void)addDependentLocality:(id)locality;	// 0x30246969
- (void)addGeoId:(long long)anId;	// 0x3027ed6d
- (void)addSubPremise:(id)premise;	// 0x3027ec89
// declared property getter: - (id)administrativeArea;	// 0x302442c9
// declared property getter: - (id)administrativeAreaCode;	// 0x3027ff65
- (id)areaOfInterestAtIndex:(unsigned)index;	// 0x3027eba1
// declared property getter: - (id)areaOfInterests;	// 0x3027ff85
- (unsigned)areaOfInterestsCount;	// 0x3027eb81
- (void)clearAreaOfInterests;	// 0x3027eaf5
- (void)clearDependentLocalitys;	// 0x3027ebf1
- (void)clearGeoIds;	// 0x3027ed59
- (void)clearSubPremises;	// 0x3027ec69
- (void)copyTo:(id)to;	// 0x3027f39d
// declared property getter: - (id)country;	// 0x30244349
// declared property getter: - (id)countryCode;	// 0x30244289
- (void)dealloc;	// 0x30244cad
- (id)dependentLocalityAtIndex:(unsigned)index;	// 0x3027ec31
// declared property getter: - (id)dependentLocalitys;	// 0x3027ff95
- (unsigned)dependentLocalitysCount;	// 0x3027ec11
- (id)description;	// 0x3027ee45
- (id)dictionaryRepresentation;	// 0x3027eeb5
// declared property getter: - (id)fullThoroughfare;	// 0x30244299
- (long long)geoIdAtIndex:(unsigned)index;	// 0x3027ed85
// declared property getter: - (long long *)geoIds;	// 0x3027ed49
// declared property getter: - (unsigned)geoIdsCount;	// 0x3027ed35
// declared property getter: - (BOOL)hasAdministrativeArea;	// 0x3027e9ed
// declared property getter: - (BOOL)hasAdministrativeAreaCode;	// 0x3027ea05
// declared property getter: - (BOOL)hasCountry;	// 0x3027e9bd
// declared property getter: - (BOOL)hasCountryCode;	// 0x3027e9d5
// declared property getter: - (BOOL)hasFullThoroughfare;	// 0x3027eac5
// declared property getter: - (BOOL)hasInlandWater;	// 0x3027ebc1
// declared property getter: - (BOOL)hasLocality;	// 0x3027ea35
// declared property getter: - (BOOL)hasOcean;	// 0x3027ebd9
// declared property getter: - (BOOL)hasPostCode;	// 0x3027ea4d
// declared property getter: - (BOOL)hasPostCodeExtension;	// 0x3027eadd
// declared property getter: - (BOOL)hasPremise;	// 0x3027ec51
// declared property getter: - (BOOL)hasPremises;	// 0x3027ea7d
// declared property getter: - (BOOL)hasSubAdministrativeArea;	// 0x3027ea1d
// declared property getter: - (BOOL)hasSubLocality;	// 0x3027ea65
// declared property getter: - (BOOL)hasSubThoroughfare;	// 0x3027eaad
// declared property getter: - (BOOL)hasThoroughfare;	// 0x3027ea95
- (unsigned)hash;	// 0x3027fd49
// declared property getter: - (id)inlandWater;	// 0x30244329
- (BOOL)isEqual:(id)equal;	// 0x3027f941
// declared property getter: - (id)locality;	// 0x302442b9
// declared property getter: - (id)ocean;	// 0x30244339
// declared property getter: - (id)postCode;	// 0x302442d9
// declared property getter: - (id)postCodeExtension;	// 0x3027ff75
// declared property getter: - (id)premise;	// 0x3027ffa5
// declared property getter: - (id)premises;	// 0x30244309
- (BOOL)readFrom:(id)from;	// 0x3027f391
// declared property setter: - (void)setAdministrativeArea:(id)area;	// 0x30244e89
// declared property setter: - (void)setAdministrativeAreaCode:(id)code;	// 0x30244e99
// declared property setter: - (void)setAreaOfInterests:(id)interests;	// 0x30244f39
// declared property setter: - (void)setCountry:(id)country;	// 0x30244e69
// declared property setter: - (void)setCountryCode:(id)code;	// 0x30244e79
// declared property setter: - (void)setDependentLocalitys:(id)localitys;	// 0x30244f69
// declared property setter: - (void)setFullThoroughfare:(id)thoroughfare;	// 0x30244f19
- (void)setGeoIds:(long long *)ids count:(unsigned)count;	// 0x3027ee2d
// declared property setter: - (void)setInlandWater:(id)water;	// 0x30244f49
// declared property setter: - (void)setLocality:(id)locality;	// 0x30244eb9
// declared property setter: - (void)setOcean:(id)ocean;	// 0x30244f59
// declared property setter: - (void)setPostCode:(id)code;	// 0x30244ec9
// declared property setter: - (void)setPostCodeExtension:(id)extension;	// 0x30244f29
// declared property setter: - (void)setPremise:(id)premise;	// 0x30244f79
// declared property setter: - (void)setPremises:(id)premises;	// 0x30244ee9
// declared property setter: - (void)setSubAdministrativeArea:(id)area;	// 0x30244ea9
// declared property setter: - (void)setSubLocality:(id)locality;	// 0x30244ed9
// declared property setter: - (void)setSubPremises:(id)premises;	// 0x30244f89
// declared property setter: - (void)setSubThoroughfare:(id)thoroughfare;	// 0x30244f09
// declared property setter: - (void)setThoroughfare:(id)thoroughfare;	// 0x30244ef9
// declared property getter: - (id)subAdministrativeArea;	// 0x302442e9
// declared property getter: - (id)subLocality;	// 0x302442f9
- (id)subPremiseAtIndex:(unsigned)index;	// 0x3027ed15
// declared property getter: - (id)subPremises;	// 0x3027ffb5
- (unsigned)subPremisesCount;	// 0x3027ecf5
// declared property getter: - (id)subThoroughfare;	// 0x30244319
// declared property getter: - (id)thoroughfare;	// 0x302442a9
- (void)writeTo:(id)to;	// 0x30242f35
@end
