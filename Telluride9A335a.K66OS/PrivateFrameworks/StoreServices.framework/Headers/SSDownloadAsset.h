/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSEntity.h"

@class SSURLRequestProperties, NSArray, NSString, NSURLRequest;

@interface SSDownloadAsset : SSEntity {
@private
	int _assetType;	// 28 = 0x1c
	SSURLRequestProperties *_localProperties;	// 32 = 0x20
}
@property(readonly, assign) NSURLRequest *URLRequest;	// G=0x30ea6535; 
@property(readonly, assign) SSURLRequestProperties *URLRequestProperties;	// G=0x30ea65fd; 
@property(readonly, assign) int assetType;	// G=0x30ea6b75; converted property
@property(readonly, assign) NSString *downloadFileName;	// G=0x30ea6b85; 
@property(readonly, assign) NSString *downloadPath;	// G=0x30ea6bb9; 
@property(readonly, assign, getter=isExternal) BOOL external;	// G=0x30ea6c11; 
@property(readonly, assign) long long fileSize;	// G=0x30ea6bd9; 
@property(readonly, assign) NSString *finalizedPath;	// G=0x30ea6bd5; 
@property(readonly, assign) NSArray *sinfs;	// G=0x30ea6519; 
+ (long long)_existsMessage;	// 0x30ea6589
+ (long long)_getExternalValuesMessage;	// 0x30ea6591
+ (long long)_getValueMessage;	// 0x30ea6599
+ (long long)_setValuesMessage;	// 0x30ea65a1
+ (id)assetWithURL:(id)url type:(int)type;	// 0x30ea6ac9
- (id)initWithURLRequest:(id)urlrequest;	// 0x30ea6421
- (id)initWithURLRequest:(id)urlrequest type:(int)type;	// 0x30ea6b49
// declared property getter: - (id)URLRequest;	// 0x30ea6535
// declared property getter: - (id)URLRequestProperties;	// 0x30ea65fd
- (id)_copyURLRequestProperties;	// 0x30ea6c41
- (id)_initWithDownloadMetadata:(id)downloadMetadata type:(id)type;	// 0x30ea6625
- (int)_legacyAssetType;	// 0x30ea69cd
- (void)_resetLocalIVars;	// 0x30ea65a9
// converted property getter: - (int)assetType;	// 0x30ea6b75
- (long long)bytesDownloaded;	// 0x30ea64e1
- (void *)copyXPCEncoding;	// 0x30ea69dd
- (void)dealloc;	// 0x30ea6495
// declared property getter: - (id)downloadFileName;	// 0x30ea6b85
// declared property getter: - (id)downloadPath;	// 0x30ea6bb9
// declared property getter: - (long long)fileSize;	// 0x30ea6bd9
// declared property getter: - (id)finalizedPath;	// 0x30ea6bd5
// declared property getter: - (BOOL)isExternal;	// 0x30ea6c11
// declared property getter: - (id)sinfs;	// 0x30ea6519
@end
