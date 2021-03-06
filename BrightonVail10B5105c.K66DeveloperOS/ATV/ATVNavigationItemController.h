/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRViewController.h"

@class ATVFeedNavigationItemElement, ATVJSCallback;

__attribute__((visibility("hidden")))
@interface ATVNavigationItemController : BRViewController {
	ATVJSCallback *_lastEvent_ONLY_USE_ON_JSCONTEXT_QUEUE;	// 104 = 0x68
	BRController *_childController;	// 108 = 0x6c
	ATVFeedNavigationItemElement *_navigationItemElement;	// 112 = 0x70
}
@property(retain, nonatomic) BRController *childController;	// G=0x3b2b81; S=0x3b2b91; @synthesize=_childController
@property(retain, nonatomic) ATVFeedNavigationItemElement *navigationItemElement;	// G=0x3b2bb9; S=0x3b2bc9; @synthesize=_navigationItemElement
- (void).cxx_destruct;	// 0x3b2bf1
- (void)_callJavaScriptOnCancelHandler;	// 0x3b1edd
- (void)_clearLastEventInContext:(OpaqueJSContext *)context;	// 0x3b2b3d
- (void)_loadChildController;	// 0x3b201d
- (void)_presentControllerOrError:(id)error;	// 0x3b28f5
// declared property getter: - (id)childController;	// 0x3b2b81
// declared property getter: - (id)navigationItemElement;	// 0x3b2bb9
// declared property setter: - (void)setChildController:(id)controller;	// 0x3b2b91
// declared property setter: - (void)setNavigationItemElement:(id)element;	// 0x3b2bc9
- (void)wasPopped;	// 0x3b1e7d
- (void)wasPushed;	// 0x3b1d79
@end

