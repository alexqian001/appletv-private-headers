/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface PFUbiquityLocation : NSObject {
@private
	PFUbiquityLocation *_ubiquityRootLocation;	// 4 = 0x4
	NSString *_ubiquityRootLocationPath;	// 8 = 0x8
	int _ubiquityLocationType;	// 12 = 0xc
	NSString *_exportingPeerID;	// 16 = 0x10
	NSString *_storeName;	// 20 = 0x14
	NSString *_modelVersionHash;	// 24 = 0x18
	NSString *_filename;	// 28 = 0x1c
	NSArray *_otherPathComponents;	// 32 = 0x20
	unsigned _hash;	// 36 = 0x24
}
@property(readonly, assign, nonatomic) NSString *exportingPeerID;	// G=0x36369bc9; @synthesize=_exportingPeerID
@property(readonly, assign, nonatomic) NSString *filename;	// G=0x36369b99; @synthesize=_filename
@property(readonly, assign, nonatomic) unsigned hash;	// G=0x36369b89; @synthesize=_hash
@property(readonly, assign, nonatomic) NSString *modelVersionHash;	// G=0x36369ba9; @synthesize=_modelVersionHash
@property(readonly, assign, nonatomic) NSArray *otherPathComponents;	// G=0x36369b79; @synthesize=_otherPathComponents
@property(readonly, assign, nonatomic) NSString *storeName;	// G=0x36369bb9; @synthesize=_storeName
@property(readonly, assign, nonatomic) int ubiquityLocationType;	// G=0x36369bd9; @synthesize=_ubiquityLocationType
@property(readonly, assign, nonatomic) PFUbiquityLocation *ubiquityRootLocation;	// G=0x3636bd51; 
@property(readonly, assign, nonatomic) NSString *ubiquityRootLocationPath;	// G=0x36369be9; @synthesize=_ubiquityRootLocationPath
@property(readonly, assign, nonatomic) BOOL usesBaselineDirectory;	// G=0x3636ccf5; 
@property(readonly, assign, nonatomic) BOOL usesBaselineStagingDirectory;	// G=0x3636cd75; 
@property(readonly, assign, nonatomic) BOOL usesCurrentBaselineDirectory;	// G=0x3636cda5; 
@property(readonly, assign, nonatomic) BOOL usesStagingLogDirectory;	// G=0x3636ce3d; 
@property(readonly, assign, nonatomic) BOOL usesTemporaryLogDirectory;	// G=0x3636cdf1; 
+ (id)createArrayOfSubLocationsAtLocation:(id)location error:(id *)error;	// 0x36369c9d
+ (id)createBaselineLocation:(int)location forStoreName:(id)storeName andModelVersionHash:(id)hash withUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x3636ad01
+ (id)createBaselineStagingLocation:(int)location forStoreName:(id)storeName modelVersionHash:(id)hash andFilename:(id)filename withUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x3636abe5
+ (id)createCurrentBaselineLocation:(int)location forStoreName:(id)storeName andModelVersionHash:(id)hash forFileNamed:(id)fileNamed withUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x3636aae1
+ (id)createMapOfLocationsForOldManagedObjectModel:(id)oldManagedObjectModel andNewManagedObjectModel:(id)model inUbiquityPeerStoreLocation:(id)ubiquityPeerStoreLocation;	// 0x36369fd5
+ (id)createMetadataPeerLocationForLocalPeerID:(id)localPeerID andUbiquityRootLocation:(id)location;	// 0x3636af81
+ (id)createMetadataPeerStoreLocationForLocalPeerID:(id)localPeerID storeName:(id)name andUbiquityRootLocation:(id)location;	// 0x3636af09
+ (id)createMetadataRootLocationForUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x3636b051
+ (id)createMetadataStoreLocationForLocalPeerID:(id)localPeerID andUbiquityRootLocation:(id)location;	// 0x3636afd9
+ (id)createMetadataUUIDLocationForLocalPeerID:(id)localPeerID storeName:(id)name UUID:(id)uuid andUbiquityRootLocation:(id)location;	// 0x3636ae15
+ (id)createPeerRootLocationForPeerID:(id)peerID withUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x3636a8e9
+ (id)createPeerStoreLocationForPeerID:(id)peerID andStoreName:(id)name withUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x3636a87d
+ (id)createPeerStoreVersionLocationForPeerID:(id)peerID storeName:(id)name andModelVersionHash:(id)hash withUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x3636a7fd
+ (id)createStagingPeerStoreVersionLocationForExportingPeerID:(id)exportingPeerID storeName:(id)name andModelVersionHash:(id)hash withUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x3636a941
+ (id)createStagingTransactionLogLocationFromTransactionLogLocation:(id)transactionLogLocation;	// 0x3636aa21
+ (id)createTemporaryTransactionLogLocationFromTransactionLogLocation:(id)transactionLogLocation;	// 0x3636aa61
+ (id)createTransactionLogLocationForPeerID:(id)peerID storeName:(id)name modelVersionHash:(id)hash logFilename:(id)filename andUbiquityRootLocation:(id)location;	// 0x3636a98d
+ (id)createTransactionLogLocationFromTemporaryOrStagingLogLocation:(id)temporaryOrStagingLogLocation;	// 0x3636aaa1
+ (id)createUbiquityExternalDataReferenceFileLocationForUUID:(id)uuid andLog:(id)log;	// 0x3636a6ad
+ (id)createUbiquityExternalDataReferenceFileLocationForUUID:(id)uuid andStore:(id)store;	// 0x3636a729
+ (id)createUbiquityExternalDataReferenceFileLocationForUUID:(id)uuid storeName:(id)name andUbiquityRootLocation:(id)location;	// 0x3636a601
+ (id)createUbiquityLocationForPath:(id)path withUbiquityRootPath:(id)ubiquityRootPath;	// 0x3636b0cd
+ (id)createUbiquityLocationForRootPath:(id)rootPath;	// 0x3636bbf9
+ (id)createUbiquityLocationForRootURL:(id)rootURL;	// 0x3636bbe5
+ (id)createUbiquityLocationForSubpath:(id)subpath ofPath:(id)path withUbiquityRootPath:(id)ubiquityRootPath;	// 0x3636b98d
+ (id)createUbiquityLocationForSubpath:(id)subpath ofUbiquityRootPath:(id)ubiquityRootPath;	// 0x3636ba65
+ (id)createUbiquityLocationForURL:(id)url withUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x3636bbad
+ (id)createUbiquityLocationForURL:(id)url withUbiquityRootPath:(id)ubiquityRootPath;	// 0x3636bb39
+ (id)createUbiquityLocationForURL:(id)url withUbiquityRootURL:(id)ubiquityRootURL;	// 0x3636bb75
+ (id)createUbiquityPeerReceiptFileLocationForPeerWithID:(id)anId storeName:(id)name andModelVersionHash:(id)hash withUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x3636a59d
+ (id)createVersionHashStringForModel:(id)model;	// 0x3636b095
+ (BOOL)isUbiquityLocationPath:(id)path equalToPath:(id)path2;	// 0x36369ee1
+ (id)pathByTruncatingBeforeLibraryMobileDocuments:(id)documents;	// 0x36369f25
- (id)init;	// 0x36369bf9
- (id)initWithUbiquityRootPath:(id)ubiquityRootPath;	// 0x3636d1e9
- (id)initWithUbiquityRootURL:(id)ubiquityRootURL;	// 0x3636d1b5
- (id)copyWithZone:(NSZone *)zone;	// 0x3636d015
- (id)createFullPath;	// 0x3636c019
- (id)createFullURL;	// 0x3636bfbd
- (void)dealloc;	// 0x3636cf19
- (id)description;	// 0x3636ce89
// declared property getter: - (id)exportingPeerID;	// 0x36369bc9
- (BOOL)fileExistsAtLocation;	// 0x3636cb15
// declared property getter: - (id)filename;	// 0x36369b99
// declared property getter: - (unsigned)hash;	// 0x36369b89
- (BOOL)isEqual:(id)equal;	// 0x3636bcd9
- (BOOL)isEqualToURL:(id)url;	// 0x3636bc31
// declared property getter: - (id)modelVersionHash;	// 0x36369ba9
// declared property getter: - (id)otherPathComponents;	// 0x36369b79
- (void)setExportingPeerID:(id)anId;	// 0x3636bf7d
- (void)setFilename:(id)filename;	// 0x3636bebd
- (void)setHash:(unsigned)hash;	// 0x36369b69
- (void)setModelVersionHash:(id)hash;	// 0x3636befd
- (void)setOtherPathComponents:(id)components;	// 0x3636be7d
- (void)setStoreName:(id)name;	// 0x3636bf3d
- (void)setUbiquityLocationType:(int)type;	// 0x36369b59
- (void)setUbiquityRootLocation:(id)location;	// 0x3636bdfd
- (void)setUbiquityRootLocationPath:(id)path;	// 0x3636be3d
// declared property getter: - (id)storeName;	// 0x36369bb9
// declared property getter: - (int)ubiquityLocationType;	// 0x36369bd9
// declared property getter: - (id)ubiquityRootLocation;	// 0x3636bd51
// declared property getter: - (id)ubiquityRootLocationPath;	// 0x36369be9
- (void)updateHash;	// 0x3636bd7d
// declared property getter: - (BOOL)usesBaselineDirectory;	// 0x3636ccf5
// declared property getter: - (BOOL)usesBaselineStagingDirectory;	// 0x3636cd75
// declared property getter: - (BOOL)usesCurrentBaselineDirectory;	// 0x3636cda5
// declared property getter: - (BOOL)usesStagingLogDirectory;	// 0x3636ce3d
// declared property getter: - (BOOL)usesTemporaryLogDirectory;	// 0x3636cdf1
@end
