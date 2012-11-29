/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVInternetPhotosMonitor.h"

@class BRBackgroundTask;

__attribute__((visibility("hidden")))
@interface ATVDotMacMonitor : ATVInternetPhotosMonitor {
	BRBackgroundTask *_backgroundTask;	// 32 = 0x20
}
@property(readonly, retain) BRBackgroundTask *backgroundTask;	// G=0x1a113d; converted property
+ (void)initialize;	// 0x1a0601
+ (void)setSingleton:(id)singleton;	// 0x1a05f1
+ (id)singleton;	// 0x1a05e1
- (id)init;	// 0x1a0671
- (void)_addCollectionForTemporaryDataMonitoring:(id)temporaryDataMonitoring;	// 0x1a42b1
- (id)_authenticationsForAccountWithName:(id)name;	// 0x1a3f61
- (void)_collectionLoadFailure:(id)failure newCollectionInfo:(id)info status:(int)status;	// 0x1a2fdd
- (id)_dataForRelativePath:(id)relativePath forAccountWithName:(id)name secondaryAccount:(id)account;	// 0x1a3529
- (BOOL)_isAccountRegisteredForDataMonitoring:(id)dataMonitoring;	// 0x1a41ed
- (void)_performAccountIconImageLoad:(id)load;	// 0x1a312d
- (void)_performAccountLoad:(id)load;	// 0x1a1419
- (void)_performAccountMediaLoad:(id)load;	// 0x1a15b1
- (void)_performAssetCoverArtImageLoad:(id)load;	// 0x1a30ed
- (void)_performAssetFullSizeImageLoad:(id)load;	// 0x1a310d
- (void)_performAssetImageLoad:(id)load sizeKey:(id)key;	// 0x1a3205
- (void)_performAssetThumbnailImageLoad:(id)load;	// 0x1a30cd
- (void)_performAuthenticateCollection:(id)collection;	// 0x1a114d
- (void)_performCollectionAssetsLoad:(id)load;	// 0x1a1ea9
- (void)_performCollectionAssetsLoadForPhotoCollection:(id)photoCollection;	// 0x1a1f61
- (void)_performCollectionAssetsLoadForVideoCollection:(id)videoCollection;	// 0x1a2839
- (id)_queryParamsForPath:(id)path;	// 0x1a3fd5
- (void)_saveAuthenticationForAccountWithName:(id)name secondaryAccount:(id)account;	// 0x1a40f9
- (id)_transactionForAccountWithName:(id)name path:(id)path depth:(int)depth secondaryAccount:(id)account;	// 0x1a3c61
- (int)_xmlDataForRelativePath:(id)relativePath withDepth:(int)depth forAccountWithName:(id)name withParserDelegate:(id)parserDelegate;	// 0x1a3c01
- (id)_xmlDataForRelativePath:(id)relativePath withDepth:(int)depth forAccountWithName:(id)name withParserDelegate:(id)parserDelegate secondaryAccount:(id)account requiresAuthentication:(BOOL)authentication;	// 0x1a385d
- (void)authenticateCollection:(id)collection withUserName:(id)userName password:(id)password;	// 0x1a0809
// converted property getter: - (id)backgroundTask;	// 0x1a113d
- (void)cancelAuthenticateForCollection:(id)collection;	// 0x1a0c45
- (void)cancelLoadAccountIconForAccount:(id)account;	// 0x1a10bd
- (void)cancelLoadAccountWithName:(id)name;	// 0x1a0cb5
- (void)cancelLoadAssetsForCollection:(id)collection;	// 0x1a0e3d
- (void)cancelLoadCoverArtImageForAsset:(id)asset;	// 0x1a0fdd
- (void)cancelLoadFullSizeImageForAsset:(id)asset;	// 0x1a104d
- (void)cancelLoadMediaForAccount:(id)account;	// 0x1a0d11
- (void)cancelLoadThumbnailImageForAsset:(id)asset;	// 0x1a0f6d
- (void)dealloc;	// 0x1a0701
- (void)loadAccountIconForAccount:(id)account;	// 0x1a0bc9
- (void)loadAccountWithName:(id)name;	// 0x1a08e9
- (void)loadAssetsForCollection:(id)collection;	// 0x1a09cd
- (void)loadCoverArtImageForAsset:(id)asset;	// 0x1a0ad1
- (void)loadFullSizeImageForAsset:(id)asset;	// 0x1a0b4d
- (void)loadMediaForAccount:(id)account;	// 0x1a0951
- (void)loadThumbnailImageForAsset:(id)asset;	// 0x1a0a55
- (void)removeAccountWithName:(id)name;	// 0x1a0791
- (id)taskContext;	// 0x1a112d
@end
