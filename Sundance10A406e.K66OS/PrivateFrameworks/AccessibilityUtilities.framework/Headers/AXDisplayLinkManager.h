/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <NSObject.h> // Unknown library

@class CADisplayLink, NSMutableSet;

@interface AXDisplayLinkManager : NSObject {
	CADisplayLink *_displayLink;	// 4 = 0x4
	NSMutableSet *_activeTargetActions;	// 8 = 0x8
	NSMutableSet *_addedTargetActions;	// 12 = 0xc
	NSMutableSet *_removedTargetActions;	// 16 = 0x10
	BOOL _handlingDisplayRefresh;	// 20 = 0x14
	BOOL _shouldInvalidate;	// 21 = 0x15
	BOOL _shouldInvalidateAutomatically;	// 22 = 0x16
}
@property(retain, nonatomic, setter=_setActiveTargetActions:) NSMutableSet *_activeTargetActions;	// G=0x326c5dcd; S=0x326c5ddd; @synthesize
@property(retain, nonatomic, setter=_setAddedTargetActions:) NSMutableSet *_addedTargetActions;	// G=0x326c5ded; S=0x326c5dfd; @synthesize
@property(retain, nonatomic, setter=_setDisplayLink:) CADisplayLink *_displayLink;	// G=0x326c5675; S=0x326c5731; 
@property(assign, nonatomic, getter=_isHandlingDisplayRefresh, setter=_setHandlingDisplayRefresh:) BOOL _handlingDisplayRefresh;	// G=0x326c5e2d; S=0x326c5e3d; @synthesize
@property(retain, nonatomic, setter=_setRemovedTargetActions:) NSMutableSet *_removedTargetActions;	// G=0x326c5e0d; S=0x326c5e1d; @synthesize
@property(assign, nonatomic, setter=_setShouldInvalidate:) BOOL _shouldInvalidate;	// G=0x326c5e4d; S=0x326c5e5d; @synthesize
@property(readonly, assign, nonatomic) double duration;	// G=0x326c5615; 
@property(readonly, assign, nonatomic) int frameInterval;	// G=0x326c5655; 
@property(readonly, assign, nonatomic, getter=isPaused) BOOL paused;	// G=0x326c55f1; 
@property(assign, nonatomic) BOOL shouldInvalidateAutomatically;	// G=0x326c5e6d; S=0x326c5a4d; @synthesize=_shouldInvalidateAutomatically
@property(readonly, assign, nonatomic) double timestamp;	// G=0x326c5635; 
+ (id)currentDisplayLinkManager;	// 0x326c5365
+ (void)releaseCurrentDisplayLinkManager;	// 0x326c5415
- (id)init;	// 0x326c5479
// declared property getter: - (id)_activeTargetActions;	// 0x326c5dcd
// declared property getter: - (id)_addedTargetActions;	// 0x326c5ded
- (void)_displayDidRefresh:(id)_display;	// 0x326c5abd
// declared property getter: - (id)_displayLink;	// 0x326c5675
// declared property getter: - (BOOL)_isHandlingDisplayRefresh;	// 0x326c5e2d
// declared property getter: - (id)_removedTargetActions;	// 0x326c5e0d
// declared property setter: - (void)_setActiveTargetActions:(id)actions;	// 0x326c5ddd
// declared property setter: - (void)_setAddedTargetActions:(id)actions;	// 0x326c5dfd
// declared property setter: - (void)_setDisplayLink:(id)link;	// 0x326c5731
// declared property setter: - (void)_setHandlingDisplayRefresh:(BOOL)refresh;	// 0x326c5e3d
// declared property setter: - (void)_setRemovedTargetActions:(id)actions;	// 0x326c5e1d
// declared property setter: - (void)_setShouldInvalidate:(BOOL)_set;	// 0x326c5e5d
// declared property getter: - (BOOL)_shouldInvalidate;	// 0x326c5e4d
- (void)addTarget:(id)target selector:(SEL)selector;	// 0x326c57bd
- (void)addTarget:(id)target selector:(SEL)selector frameInterval:(int)interval;	// 0x326c57e1
- (void)dealloc;	// 0x326c5571
// declared property getter: - (double)duration;	// 0x326c5615
// declared property getter: - (int)frameInterval;	// 0x326c5655
- (void)invalidate;	// 0x326c5aa9
// declared property getter: - (BOOL)isPaused;	// 0x326c55f1
- (void)removeTarget:(id)target selector:(SEL)selector;	// 0x326c58fd
// declared property setter: - (void)setShouldInvalidateAutomatically:(BOOL)invalidateAutomatically;	// 0x326c5a4d
// declared property getter: - (BOOL)shouldInvalidateAutomatically;	// 0x326c5e6d
// declared property getter: - (double)timestamp;	// 0x326c5635
@end

