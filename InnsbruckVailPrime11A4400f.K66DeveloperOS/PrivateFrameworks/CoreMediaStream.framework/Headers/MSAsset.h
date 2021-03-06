/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "NSCopying.h"
#import "CoreMediaStream-Structs.h"
#import </libobjc.A.h>
#import "MMCSAsset.h"
#import "NSSecureCoding.h"

@class NSURL, NSDictionary, NSString, NSData, NSError, NSDate;

@interface MSAsset : NSObject <MMCSAsset, NSSecureCoding, NSCopying> {
	BOOL _assetDataAvailableOnServer;	// 4 = 0x4
	NSData *_masterAssetHash;	// 8 = 0x8
	NSDictionary *_metadata;	// 12 = 0xc
	NSString *_path;	// 16 = 0x10
	NSURL *_MMCSURL;	// 20 = 0x14
	NSData *_fileData;	// 24 = 0x18
	NSError *_error;	// 28 = 0x1c
	NSString *_type;	// 32 = 0x20
	NSData *_fileHash;	// 36 = 0x24
	NSString *_MMCSAccessHeader;	// 40 = 0x28
	NSDate *_MMCSAccessHeaderTimeStamp;	// 44 = 0x2c
	NSString *_MMCSReceipt;	// 48 = 0x30
	NSString *_GUID;	// 52 = 0x34
	NSString *_assetCollectionGUID;	// 56 = 0x38
	NSDate *_batchCreationDate;	// 60 = 0x3c
	NSDate *_photoCreationDate;	// 64 = 0x40
	id<NSCoding> _userInfo;	// 68 = 0x44
	unsigned _mediaAssetType;	// 72 = 0x48
	unsigned long long _protocolFileSize;	// 76 = 0x4c
}
@property(retain, nonatomic) NSString *GUID;	// G=0x304da411; S=0x304da421; @synthesize=_GUID
@property(retain, nonatomic) NSString *MMCSAccessHeader;	// G=0x304da391; S=0x304d9451; @synthesize=_MMCSAccessHeader
@property(retain, nonatomic) NSDate *MMCSAccessHeaderTimeStamp;	// G=0x304da3a1; S=0x304da3b1; @synthesize=_MMCSAccessHeaderTimeStamp
@property(retain, nonatomic) NSError *MMCSError;	// G=0x304d88b1; S=0x304d88c1; 
@property(retain, nonatomic) NSData *MMCSHash;	// G=0x304da32d; S=0x304da33d; @synthesize=_fileHash
@property(assign, nonatomic) unsigned long MMCSItemFlags;	// G=0x304d92a1; S=0x304d92a5; 
@property(assign, nonatomic) unsigned long long MMCSItemID;	// G=0x304d92c9; S=0x304d9311; 
@property(assign, nonatomic) unsigned long long MMCSItemSize;	// G=0x304da365; S=0x304da37d; @synthesize=_protocolFileSize
@property(retain, nonatomic) NSString *MMCSReceipt;	// G=0x304da3d9; S=0x304da3e9; @synthesize=_MMCSReceipt
@property(retain, nonatomic) NSURL *MMCSURL;	// G=0x304da24d; S=0x304da25d; @synthesize=_MMCSURL
@property(retain, nonatomic) NSString *MMCSUTI;	// G=0x304da2f5; S=0x304da305; @synthesize=_type
@property(retain, nonatomic) NSString *assetCollectionGUID;	// G=0x304da449; S=0x304da459; @synthesize=_assetCollectionGUID
@property(assign, nonatomic) BOOL assetDataAvailableOnServer;	// G=0x304da535; S=0x304da545; @synthesize=_assetDataAvailableOnServer
@property(retain, nonatomic) NSDate *batchCreationDate;	// G=0x304da481; S=0x304da491; @synthesize=_batchCreationDate
@property(retain, nonatomic) NSError *error;	// G=0x304da2bd; S=0x304da2cd; @synthesize=_error
@property(retain, nonatomic) NSData *fileData;	// G=0x304da285; S=0x304da295; @synthesize=_fileData
@property(retain, nonatomic) NSData *fileHash;	// G=0x304d8851; S=0x304d8861; 
@property(retain, nonatomic) NSData *masterAssetHash;	// G=0x304da1a5; S=0x304da1b5; @synthesize=_masterAssetHash
@property(assign, nonatomic) unsigned mediaAssetType;	// G=0x304da515; S=0x304da525; @synthesize=_mediaAssetType
@property(retain, nonatomic) NSDictionary *metadata;	// G=0x304da1dd; S=0x304da1ed; @synthesize=_metadata
@property(retain, nonatomic) NSString *path;	// G=0x304da215; S=0x304da225; @synthesize=_path
@property(retain, nonatomic) NSDate *photoCreationDate;	// G=0x304da4b9; S=0x304da4c9; @synthesize=_photoCreationDate
@property(assign, nonatomic) unsigned long long protocolFileSize;	// G=0x304d8891; S=0x304d88a1; 
@property(retain, nonatomic) NSString *type;	// G=0x304d8871; S=0x304d8881; 
@property(retain, nonatomic) id<NSCoding> userInfo;	// G=0x304da4f1; S=0x304da501; @synthesize=_userInfo
+ (id)MSASPAssetFromProtocolDictionary:(id)protocolDictionary;	// 0x3057a475
+ (id)asset;	// 0x304d88d1
+ (id)assetWithAsset:(id)asset;	// 0x304d897d
+ (BOOL)supportsSecureCoding;	// 0x304d98d5
- (id)init;	// 0x304d8da1
- (id)initWithCoder:(id)coder;	// 0x304d9c6d
- (id)initWithGUID:(id)guid;	// 0x304d88fd
- (void).cxx_destruct;	// 0x304da555
// declared property getter: - (id)GUID;	// 0x304da411
// declared property getter: - (id)MMCSAccessHeader;	// 0x304da391
// declared property getter: - (id)MMCSAccessHeaderTimeStamp;	// 0x304da3a1
// declared property getter: - (id)MMCSError;	// 0x304d88b1
// declared property getter: - (id)MMCSHash;	// 0x304da32d
// declared property getter: - (unsigned long)MMCSItemFlags;	// 0x304d92a1
// declared property getter: - (unsigned long long)MMCSItemID;	// 0x304d92c9
// declared property getter: - (unsigned long long)MMCSItemSize;	// 0x304da365
- (int)MMCSOpenNewFileDescriptor;	// 0x304d93e9
// declared property getter: - (id)MMCSReceipt;	// 0x304da3d9
// declared property getter: - (id)MMCSURL;	// 0x304da24d
// declared property getter: - (id)MMCSUTI;	// 0x304da2f5
- (id)MSASPProtocolDictionary;	// 0x30579fc9
- (unsigned long long)_fileSize;	// 0x304d9249
- (unsigned long long)_fileSizeOnDisk;	// 0x304d9515
- (void)addMetadataValue:(id)value forKey:(id)key;	// 0x304da0f9
// declared property getter: - (id)assetCollectionGUID;	// 0x304da449
// declared property getter: - (BOOL)assetDataAvailableOnServer;	// 0x304da535
// declared property getter: - (id)batchCreationDate;	// 0x304da481
- (id)copyWithZone:(NSZone *)zone;	// 0x304da149
- (id)description;	// 0x304d8ded
- (void)encodeWithCoder:(id)coder;	// 0x304d98d9
// declared property getter: - (id)error;	// 0x304da2bd
// declared property getter: - (id)fileData;	// 0x304da285
// declared property getter: - (id)fileHash;	// 0x304d8851
- (unsigned)hash;	// 0x304d9885
- (BOOL)isEqual:(id)equal;	// 0x304d9691
- (BOOL)isPhoto;	// 0x304d9209
- (BOOL)isVideo;	// 0x304d9229
// declared property getter: - (id)masterAssetHash;	// 0x304da1a5
// declared property getter: - (unsigned)mediaAssetType;	// 0x304da515
// declared property getter: - (id)metadata;	// 0x304da1dd
- (id)metadataValueForKey:(id)key;	// 0x304da129
// declared property getter: - (id)path;	// 0x304da215
// declared property getter: - (id)photoCreationDate;	// 0x304da4b9
// declared property getter: - (unsigned long long)protocolFileSize;	// 0x304d8891
// declared property setter: - (void)setAssetCollectionGUID:(id)guid;	// 0x304da459
// declared property setter: - (void)setAssetDataAvailableOnServer:(BOOL)server;	// 0x304da545
// declared property setter: - (void)setBatchCreationDate:(id)date;	// 0x304da491
// declared property setter: - (void)setError:(id)error;	// 0x304da2cd
// declared property setter: - (void)setFileData:(id)data;	// 0x304da295
// declared property setter: - (void)setFileHash:(id)hash;	// 0x304d8861
// declared property setter: - (void)setGUID:(id)guid;	// 0x304da421
// declared property setter: - (void)setMMCSAccessHeader:(id)header;	// 0x304d9451
- (void)setMMCSAccessHeader:(id)header andTimeStamp:(id)stamp;	// 0x304d94b5
// declared property setter: - (void)setMMCSAccessHeaderTimeStamp:(id)stamp;	// 0x304da3b1
// declared property setter: - (void)setMMCSError:(id)error;	// 0x304d88c1
// declared property setter: - (void)setMMCSHash:(id)hash;	// 0x304da33d
// declared property setter: - (void)setMMCSItemFlags:(unsigned long)flags;	// 0x304d92a5
// declared property setter: - (void)setMMCSItemID:(unsigned long long)anId;	// 0x304d9311
// declared property setter: - (void)setMMCSItemSize:(unsigned long long)size;	// 0x304da37d
// declared property setter: - (void)setMMCSReceipt:(id)receipt;	// 0x304da3e9
// declared property setter: - (void)setMMCSURL:(id)mmcsurl;	// 0x304da25d
// declared property setter: - (void)setMMCSUTI:(id)mmcsuti;	// 0x304da305
// declared property setter: - (void)setMasterAssetHash:(id)hash;	// 0x304da1b5
// declared property setter: - (void)setMediaAssetType:(unsigned)type;	// 0x304da525
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x304da1ed
- (void)setMetadataValue:(id)value forKey:(id)key;	// 0x304da03d
// declared property setter: - (void)setPath:(id)path;	// 0x304da225
// declared property setter: - (void)setPhotoCreationDate:(id)date;	// 0x304da4c9
// declared property setter: - (void)setProtocolFileSize:(unsigned long long)size;	// 0x304d88a1
// declared property setter: - (void)setType:(id)type;	// 0x304d8881
// declared property setter: - (void)setUserInfo:(id)info;	// 0x304da501
// declared property getter: - (id)type;	// 0x304d8871
// declared property getter: - (id)userInfo;	// 0x304da4f1
@end

