/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface MRPatchwork : NSObject {
	NSMutableArray *_patches;	// 4 = 0x4
}
- (id)init;	// 0x3214499d
- (void)addPatch:(id)patch;	// 0x32144ab1
- (void)dealloc;	// 0x32144a01
- (id)patchworkWithPatch:(id)patch;	// 0x32144a51
- (void)removeAllPatches;	// 0x32144ad1
@end
