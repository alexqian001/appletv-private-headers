/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface MRFrameManager : NSObject {
	NSMutableDictionary *mFrameSets;	// 4 = 0x4
	NSMutableDictionary *mFramePools;	// 8 = 0x8
}
+ (void)initialize;	// 0x364d7b0d
+ (id)sharedManager;	// 0x364d7b75
- (id)init;	// 0x364d7b85
- (void)cleanup;	// 0x364d7c55
- (void)dealloc;	// 0x364d7c15
- (id)frameWithFrameID:(id)frameID;	// 0x364d7e75
- (void)recycleFrame:(id)frame;	// 0x364d8211
- (void)releaseResources;	// 0x364d7cb9
- (id)resourcePathForFrameID:(id)frameID andResource:(id)resource;	// 0x364d8369
- (id)sizeScriptForFrameID:(id)frameID;	// 0x364d83d5
@end

