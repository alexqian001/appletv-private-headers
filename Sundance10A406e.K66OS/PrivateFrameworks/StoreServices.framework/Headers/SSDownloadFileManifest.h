/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class SSXPCConnection;

@interface SSDownloadFileManifest : NSObject {
	SSXPCConnection *_connection;	// 4 = 0x4
	int _manifestType;	// 8 = 0x8
}
@property(readonly, assign) int manifestType;	// G=0x312e0ac9; 
- (id)init;	// 0x312e071d
- (id)initWithManifestType:(int)manifestType;	// 0x312e0731
- (void)_removeItemsWithAssetPaths:(id)assetPaths completionBlock:(id)block;	// 0x312e0cf1
- (void)dealloc;	// 0x312e07bd
- (void)getPathsForFilesWithClass:(int)aClass completionBlock:(id)block;	// 0x312e0809
// declared property getter: - (int)manifestType;	// 0x312e0ac9
- (void)rebuildManifestWithCompletionBlock:(id)completionBlock;	// 0x312e0ad9
- (void)removeItemWithAssetPath:(id)assetPath completionBlock:(id)block;	// 0x312e0bad
- (void)removeItemsWithAssetPaths:(id)assetPaths completionBlock:(id)block;	// 0x312e0c79
@end
