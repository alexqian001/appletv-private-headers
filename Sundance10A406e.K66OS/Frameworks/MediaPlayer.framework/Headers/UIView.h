/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIView.h> // Unknown library
#import "MediaPlayer-Structs.h"


@interface UIView (MPAdditions)
- (id)mpAncestorViewController;	// 0x35cac1d5
- (void)mpPerformRecursiveBlock:(id)block;	// 0x35cac129
- (void)mpSetFrameOrigin:(CGPoint)origin;	// 0x35cac081
- (void)mpSetFrameSize:(CGSize)size;	// 0x35cac0d5
@end

@interface UIView (MPAlternateTracksAddition)
- (id)mpFirstLabelSubview;	// 0x35cd6511
@end

@interface UIView (MPFullScreenVideoOverlayAdditions)
- (BOOL)mpIsHiddenOrPendingIsHidden;	// 0x35ce2631
- (id)mpPendingValueOrValueForProperty:(id)property;	// 0x35ce25d1
- (id)mpPendingValues;	// 0x35ce2551
- (void)mpSetPendingIsHiddenValue:(id)value;	// 0x35ce2615
- (void)mpSetPendingValue:(id)value forProperty:(id)property;	// 0x35ce25a1
@end

@interface UIView (MPAdditions)
- (void)setFrameEndX:(float)x y:(float)y;	// 0x35d9d2d1
- (void)setFrameHeight:(float)height;	// 0x35d9d469
- (void)setFrameOrigin:(CGPoint)origin;	// 0x35d9d21d
- (void)setFrameSize:(CGSize)size;	// 0x35d9d3b5
- (void)setFrameWidth:(float)width;	// 0x35d9d409
- (void)setFrameX:(float)x;	// 0x35d9d271
- (void)setFrameY:(float)y;	// 0x35d9d355
@end

