/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIGestureRecognizerFailureMap : NSObject {
	NSMutableArray *_gestureRecognizers;	// 4 = 0x4
	char *_failureMap;	// 8 = 0x8
	int _unmetFailureRequirementCount;	// 12 = 0xc
	int _unmetFailureDependentCount;	// 16 = 0x10
}
@property(readonly, assign) BOOL hasUnmetFailureRequirementsOrDependents;	// G=0x30a0d569; 
+ (void)buildFailureMapForGestureRecognizer:(id)gestureRecognizer;	// 0x309328d1
+ (void)buildFailureMapForGestureRecognizers:(id)gestureRecognizers;	// 0x3093290d
- (id)initWithRelatedGestures:(id)relatedGestures;	// 0x30932c61
- (void)_gestureRecognizerFinished:(id)finished withEvent:(id)event;	// 0x30a0d3f5
- (void)_queueRecognizersForResetIfFinished;	// 0x30a0d519
- (void)dealloc;	// 0x30936409
- (id)description;	// 0x30c4fcbd
- (void)gestureRecognizerBecameDirty:(id)dirty;	// 0x30a20b55
- (void)gestureRecognizerDeallocated:(id)deallocated;	// 0x30a0d721
- (void)gestureRecognizerFinished:(id)finished withEvent:(id)event;	// 0x30a0d3c5
// declared property getter: - (BOOL)hasUnmetFailureRequirementsOrDependents;	// 0x30a0d569
- (BOOL)isGestureRecognizerWaitingForGestureRecognizersToFail:(id)fail;	// 0x30a1a169
- (void)rebuildFailureMap;	// 0x30a1a3f1
- (void)reloadFailureMap;	// 0x30932db5
@end

