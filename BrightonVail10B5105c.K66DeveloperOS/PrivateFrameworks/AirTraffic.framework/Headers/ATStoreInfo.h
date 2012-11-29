/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <NSObject.h> // Unknown library

@class NSString, NSNumber, NSMutableDictionary, NSDictionary;

@interface ATStoreInfo : NSObject {
	NSMutableDictionary *_downloadDictionary;	// 4 = 0x4
	NSMutableDictionary *_assetDictionary;	// 8 = 0x8
}
@property(retain, nonatomic) NSNumber *DSID;	// G=0x366fff5d; S=0x366fff0d; 
@property(retain, nonatomic) NSString *XID;	// G=0x3670014d; S=0x367000fd; 
@property(retain, nonatomic) NSNumber *adamID;	// G=0x366ffee1; S=0x366ffe91; 
@property(retain, nonatomic) NSString *appleID;	// G=0x367001c9; S=0x36700179; 
@property(readonly, assign) NSDictionary *assetDictionary;	// G=0x36700661; @synthesize=_assetDictionary
@property(retain, nonatomic) NSNumber *collectionID;	// G=0x366fffd9; S=0x366fff89; 
@property(retain, nonatomic) NSString *dimensions;	// G=0x367004b1; S=0x36700461; 
@property(readonly, assign) NSDictionary *downloadDictionary;	// G=0x3670064d; @synthesize=_downloadDictionary
@property(retain, nonatomic) NSNumber *drmFree;	// G=0x3670052d; S=0x367004dd; 
@property(retain, nonatomic) NSString *flavor;	// G=0x36700435; S=0x367003e5; 
@property(retain, nonatomic) NSNumber *matchStatus;	// G=0x367002c1; S=0x36700271; 
@property(retain, nonatomic) NSString *podcastEpisodeGUID;	// G=0x367003b9; S=0x36700369; 
@property(retain, nonatomic) NSNumber *redownloadStatus;	// G=0x3670033d; S=0x367002ed; 
@property(retain, nonatomic) NSNumber *sagaID;	// G=0x36700245; S=0x367001f5; 
@property(retain, nonatomic) NSString *storefrontID;	// G=0x367000d1; S=0x36700081; 
@property(retain, nonatomic) NSNumber *versionID;	// G=0x36700055; S=0x36700005; 
- (id)init;	// 0x36700559
// declared property getter: - (id)DSID;	// 0x366fff5d
// declared property getter: - (id)XID;	// 0x3670014d
// declared property getter: - (id)adamID;	// 0x366ffee1
// declared property getter: - (id)appleID;	// 0x367001c9
// declared property getter: - (id)assetDictionary;	// 0x36700661
// declared property getter: - (id)collectionID;	// 0x366fffd9
- (void)dealloc;	// 0x367005e9
// declared property getter: - (id)dimensions;	// 0x367004b1
// declared property getter: - (id)downloadDictionary;	// 0x3670064d
// declared property getter: - (id)drmFree;	// 0x3670052d
// declared property getter: - (id)flavor;	// 0x36700435
// declared property getter: - (id)matchStatus;	// 0x367002c1
// declared property getter: - (id)podcastEpisodeGUID;	// 0x367003b9
// declared property getter: - (id)redownloadStatus;	// 0x3670033d
// declared property getter: - (id)sagaID;	// 0x36700245
// declared property setter: - (void)setAdamID:(id)anId;	// 0x366ffe91
// declared property setter: - (void)setAppleID:(id)anId;	// 0x36700179
// declared property setter: - (void)setCollectionID:(id)anId;	// 0x366fff89
// declared property setter: - (void)setDSID:(id)dsid;	// 0x366fff0d
// declared property setter: - (void)setDimensions:(id)dimensions;	// 0x36700461
// declared property setter: - (void)setDrmFree:(id)free;	// 0x367004dd
// declared property setter: - (void)setFlavor:(id)flavor;	// 0x367003e5
// declared property setter: - (void)setMatchStatus:(id)status;	// 0x36700271
// declared property setter: - (void)setPodcastEpisodeGUID:(id)guid;	// 0x36700369
// declared property setter: - (void)setRedownloadStatus:(id)status;	// 0x367002ed
// declared property setter: - (void)setSagaID:(id)anId;	// 0x367001f5
// declared property setter: - (void)setStorefrontID:(id)anId;	// 0x36700081
// declared property setter: - (void)setVersionID:(id)anId;	// 0x36700005
// declared property setter: - (void)setXID:(id)xid;	// 0x367000fd
// declared property getter: - (id)storefrontID;	// 0x367000d1
// declared property getter: - (id)versionID;	// 0x36700055
@end
