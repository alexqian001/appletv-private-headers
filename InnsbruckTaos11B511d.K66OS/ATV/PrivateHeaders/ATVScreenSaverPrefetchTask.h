/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, NSMutableDictionary, NSDictionary, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVScreenSaverPrefetchTask : XXUnknownSuperclass {
	int _index;	// 4 = 0x4
	NSArray *_assets;	// 8 = 0x8
	NSMutableArray *_loadingIDs;	// 12 = 0xc
	NSMutableDictionary *_loadingProxies;	// 16 = 0x10
	NSMutableDictionary *_metadata;	// 20 = 0x14
	NSTimer *_timer;	// 24 = 0x18
	int _loadAttemptCount;	// 28 = 0x1c
	NSDictionary *_userInfo;	// 32 = 0x20
}
@property(copy, nonatomic) NSDictionary *userInfo;	// G=0x24a01d; S=0x24a031; @synthesize=_userInfo
- (void)_imageLoadFailed:(id)failed;	// 0x24a80d
- (void)_imageWriteSucceeded:(id)succeeded;	// 0x24a775
- (void)_prefetch;	// 0x24a481
- (void)_reset;	// 0x24a041
- (void)_screenSaverDataReady:(id)ready;	// 0x24a191
- (void)_startPrefetchForItems:(id)items;	// 0x24a2d5
- (void)_updateMetadataCacheWithMetadata:(id)metadata;	// 0x24a8a1
- (void)dealloc;	// 0x249cc5
- (BOOL)isActive;	// 0x249ff9
- (BOOL)perform;	// 0x249d7d
// declared property setter: - (void)setUserInfo:(id)info;	// 0x24a031
- (void)stop;	// 0x249fa1
// declared property getter: - (id)userInfo;	// 0x24a01d
@end
