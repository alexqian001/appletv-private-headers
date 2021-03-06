/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class UIEvent, UITouch;

__attribute__((visibility("hidden")))
@interface UIGestureDelayedTouch : NSObject <NSCopying> {
@private
	UITouch *_touch;	// 4 = 0x4
	UITouch *_stateWhenDelayed;	// 8 = 0x8
	UITouch *_stateWhenDelivered;	// 12 = 0xc
	UIEvent *_event;	// 16 = 0x10
	int _delayCount;	// 20 = 0x14
	BOOL _cloneForSecondDelivery;	// 24 = 0x18
}
@property(assign) BOOL cloneForSecondDelivery;	// G=0x3012c6c5; S=0x3012c5e1; @synthesize=_cloneForSecondDelivery
@property(readonly, assign) int delayCount;	// G=0x30184f5d; converted property
@property(retain) UIEvent *event;	// G=0x3012c345; S=0x30119b45; @synthesize=_event
@property(retain) UITouch *stateWhenDelayed;	// G=0x30119b9d; S=0x3012c5b5; @synthesize=_stateWhenDelayed
@property(retain) UITouch *stateWhenDelivered;	// G=0x3012c649; S=0x302c07fd; @synthesize=_stateWhenDelivered
@property(retain) UITouch *touch;	// G=0x3011c779; S=0x30119b71; @synthesize=_touch
- (id)init;	// 0x3011992d
// declared property getter: - (BOOL)cloneForSecondDelivery;	// 0x3012c6c5
- (id)copyWithZone:(NSZone *)zone;	// 0x3012c4e9
- (void)dealloc;	// 0x3011c80d
- (int)decrementDelayCount;	// 0x3011c7f5
// converted property getter: - (int)delayCount;	// 0x30184f5d
- (id)description;	// 0x302c0209
// declared property getter: - (id)event;	// 0x3012c345
- (void)incrementDelayCount;	// 0x30119c99
- (int)phaseForDelivery;	// 0x3012c6d5
- (void)saveCurrentTouchState;	// 0x3012c5f1
// declared property setter: - (void)setCloneForSecondDelivery:(BOOL)secondDelivery;	// 0x3012c5e1
// declared property setter: - (void)setEvent:(id)event;	// 0x30119b45
// declared property setter: - (void)setStateWhenDelayed:(id)delayed;	// 0x3012c5b5
// declared property setter: - (void)setStateWhenDelivered:(id)delivered;	// 0x302c07fd
// declared property setter: - (void)setTouch:(id)touch;	// 0x30119b71
// declared property getter: - (id)stateWhenDelayed;	// 0x30119b9d
// declared property getter: - (id)stateWhenDelivered;	// 0x3012c649
- (int)timestampForDelivery;	// 0x3012c661
// declared property getter: - (id)touch;	// 0x3011c779
@end

