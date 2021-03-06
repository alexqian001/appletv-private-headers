/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray, GEOMapRegion, NSString, GEOLatLng, GEOAddress;

@interface GEOPlace : PBCodable {
	long long _geoId;	// 4 = 0x4
	long long _uID;	// 12 = 0xc
	GEOAddress *_address;	// 20 = 0x14
	int _addressGeocodeAccuracy;	// 24 = 0x18
	NSMutableArray *_business;	// 28 = 0x1c
	GEOLatLng *_center;	// 32 = 0x20
	NSMutableArray *_entryPoints;	// 36 = 0x24
	GEOMapRegion *_mapRegion;	// 40 = 0x28
	NSString *_name;	// 44 = 0x2c
	GEOAddress *_phoneticAddress;	// 48 = 0x30
	NSString *_phoneticName;	// 52 = 0x34
	int _type;	// 56 = 0x38
	int _version;	// 60 = 0x3c
	BOOL _isDisputed;	// 64 = 0x40
	struct {
		unsigned geoId : 1;
		unsigned uID : 1;
		unsigned addressGeocodeAccuracy : 1;
		unsigned type : 1;
		unsigned version : 1;
		unsigned isDisputed : 1;
	} _has;	// 65 = 0x41
}
@property(retain, nonatomic) GEOAddress *address;	// G=0x379fa5ed; S=0x379daca9; @synthesize=_address
@property(assign, nonatomic) int addressGeocodeAccuracy;	// G=0x37a007b9; S=0x37a1dc49; @synthesize=_addressGeocodeAccuracy
@property(retain, nonatomic) NSMutableArray *business;	// G=0x379ffc55; S=0x379fa55d; @synthesize=_business
@property(retain, nonatomic) GEOLatLng *center;	// G=0x379fa589; S=0x379daed9; @synthesize=_center
@property(retain, nonatomic) NSMutableArray *entryPoints;	// G=0x37a1ee71; S=0x379fa56d; @synthesize=_entryPoints
@property(assign, nonatomic) long long geoId;	// G=0x37a007fd; S=0x37a1ddf5; @synthesize=_geoId
@property(readonly, assign, nonatomic) BOOL hasAddress;	// G=0x37a1db3d; 
@property(assign, nonatomic) BOOL hasAddressGeocodeAccuracy;	// G=0x37a1dc91; S=0x37a1dc71; 
@property(readonly, assign, nonatomic) BOOL hasCenter;	// G=0x37a1db85; 
@property(assign, nonatomic) BOOL hasGeoId;	// G=0x37a1de45; S=0x37a1de29; 
@property(assign, nonatomic) BOOL hasIsDisputed;	// G=0x37a1dde1; S=0x37a1ddc1; 
@property(readonly, assign, nonatomic) BOOL hasMapRegion;	// G=0x37a1db25; 
@property(readonly, assign, nonatomic) BOOL hasName;	// G=0x37a1db0d; 
@property(readonly, assign, nonatomic) BOOL hasPhoneticAddress;	// G=0x37a1db6d; 
@property(readonly, assign, nonatomic) BOOL hasPhoneticName;	// G=0x37a1db55; 
@property(assign, nonatomic) BOOL hasType;	// G=0x37a1daf9; S=0x37a1dad9; 
@property(assign, nonatomic) BOOL hasUID;	// G=0x37a1da41; S=0x37a1da21; 
@property(assign, nonatomic) BOOL hasVersion;	// G=0x37a1da9d; S=0x37a1da7d; 
@property(assign, nonatomic) BOOL isDisputed;	// G=0x37a1dd71; S=0x37a1dd99; @synthesize=_isDisputed
@property(retain, nonatomic) GEOMapRegion *mapRegion;	// G=0x379fe8dd; S=0x379dae49; @synthesize=_mapRegion
@property(retain, nonatomic) NSString *name;	// G=0x379fa5dd; S=0x379e47d5; @synthesize=_name
@property(retain, nonatomic) GEOAddress *phoneticAddress;	// G=0x37a1ee61; S=0x379fa54d; @synthesize=_phoneticAddress
@property(retain, nonatomic) NSString *phoneticName;	// G=0x37a1ee51; S=0x379fa53d; @synthesize=_phoneticName
@property(assign, nonatomic) int type;	// G=0x37a1ee41; S=0x37a1dab1; @synthesize=_type
@property(assign, nonatomic) long long uID;	// G=0x37a1ee19; S=0x37a1d9ed; @synthesize=_uID
@property(assign, nonatomic) int version;	// G=0x37a1ee31; S=0x37a1da55; @synthesize=_version
- (void)addBusiness:(id)business;	// 0x37a1dbbd
- (void)addEntryPoint:(id)point;	// 0x37a1dcc5
// declared property getter: - (id)address;	// 0x379fa5ed
- (id)addressDictionary;	// 0x37a09e71
// declared property getter: - (int)addressGeocodeAccuracy;	// 0x37a007b9
// declared property getter: - (id)business;	// 0x379ffc55
- (id)businessAtIndex:(unsigned)index;	// 0x37a1dc29
- (unsigned)businessCount;	// 0x379fa5fd
// declared property getter: - (id)center;	// 0x379fa589
- (void)clearBusiness;	// 0x37a1db9d
- (void)clearEntryPoints;	// 0x37a1dca5
- (void)copyTo:(id)to;	// 0x37a1e4e1
- (void)dealloc;	// 0x379fa46d
- (id)description;	// 0x37a1de59
- (id)dictionaryRepresentation;	// 0x37a1dec9
- (id)entryPointAtIndex:(unsigned)index;	// 0x37a1dd51
// declared property getter: - (id)entryPoints;	// 0x37a1ee71
- (unsigned)entryPointsCount;	// 0x37a1dd31
// declared property getter: - (long long)geoId;	// 0x37a007fd
// declared property getter: - (BOOL)hasAddress;	// 0x37a1db3d
// declared property getter: - (BOOL)hasAddressGeocodeAccuracy;	// 0x37a1dc91
// declared property getter: - (BOOL)hasCenter;	// 0x37a1db85
// declared property getter: - (BOOL)hasGeoId;	// 0x37a1de45
// declared property getter: - (BOOL)hasIsDisputed;	// 0x37a1dde1
// declared property getter: - (BOOL)hasMapRegion;	// 0x37a1db25
// declared property getter: - (BOOL)hasName;	// 0x37a1db0d
// declared property getter: - (BOOL)hasPhoneticAddress;	// 0x37a1db6d
// declared property getter: - (BOOL)hasPhoneticName;	// 0x37a1db55
// declared property getter: - (BOOL)hasType;	// 0x37a1daf9
// declared property getter: - (BOOL)hasUID;	// 0x37a1da41
// declared property getter: - (BOOL)hasVersion;	// 0x37a1da9d
- (unsigned)hash;	// 0x37a1ec05
// declared property getter: - (BOOL)isDisputed;	// 0x37a1dd71
- (BOOL)isEqual:(id)equal;	// 0x37a1e8c1
// declared property getter: - (id)mapRegion;	// 0x379fe8dd
// declared property getter: - (id)name;	// 0x379fa5dd
// declared property getter: - (id)phoneticAddress;	// 0x37a1ee61
// declared property getter: - (id)phoneticName;	// 0x37a1ee51
- (BOOL)readFrom:(id)from;	// 0x379fa57d
// declared property setter: - (void)setAddress:(id)address;	// 0x379daca9
// declared property setter: - (void)setAddressGeocodeAccuracy:(int)accuracy;	// 0x37a1dc49
// declared property setter: - (void)setBusiness:(id)business;	// 0x379fa55d
// declared property setter: - (void)setCenter:(id)center;	// 0x379daed9
// declared property setter: - (void)setEntryPoints:(id)points;	// 0x379fa56d
// declared property setter: - (void)setGeoId:(long long)anId;	// 0x37a1ddf5
// declared property setter: - (void)setHasAddressGeocodeAccuracy:(BOOL)accuracy;	// 0x37a1dc71
// declared property setter: - (void)setHasGeoId:(BOOL)anId;	// 0x37a1de29
// declared property setter: - (void)setHasIsDisputed:(BOOL)disputed;	// 0x37a1ddc1
// declared property setter: - (void)setHasType:(BOOL)type;	// 0x37a1dad9
// declared property setter: - (void)setHasUID:(BOOL)uid;	// 0x37a1da21
// declared property setter: - (void)setHasVersion:(BOOL)version;	// 0x37a1da7d
// declared property setter: - (void)setIsDisputed:(BOOL)disputed;	// 0x37a1dd99
// declared property setter: - (void)setMapRegion:(id)region;	// 0x379dae49
// declared property setter: - (void)setName:(id)name;	// 0x379e47d5
// declared property setter: - (void)setPhoneticAddress:(id)address;	// 0x379fa54d
// declared property setter: - (void)setPhoneticName:(id)name;	// 0x379fa53d
// declared property setter: - (void)setType:(int)type;	// 0x37a1dab1
// declared property setter: - (void)setUID:(long long)uid;	// 0x37a1d9ed
// declared property setter: - (void)setVersion:(int)version;	// 0x37a1da55
// declared property getter: - (int)type;	// 0x37a1ee41
// declared property getter: - (long long)uID;	// 0x37a1ee19
// declared property getter: - (int)version;	// 0x37a1ee31
- (void)writeTo:(id)to;	// 0x379fefb9
@end

