/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import <NSObject.h> // Unknown library
#import "UIDocumentInteractionControllerDelegate.h"

@class UIDocumentInteractionController, UIBarButtonItem;

@interface QLPopOverState : NSObject <UIDocumentInteractionControllerDelegate> {
	id _delegate;	// 4 = 0x4
	UIDocumentInteractionController *_documentInteractionController;	// 8 = 0x8
	int _popOverState;	// 12 = 0xc
	UIBarButtonItem *_barButtonItem;	// 16 = 0x10
}
@property(assign) int popOverState;	// G=0x33b3d1f5; S=0x33b3d209; @synthesize=_popOverState
- (id)initWithDocumentInteractionController:(id)documentInteractionController delegate:(id)delegate;	// 0x33b3cda1
- (id)activityItemForDocumentInteractionController:(id)documentInteractionController;	// 0x33b3d1b5
- (void)dealloc;	// 0x33b3ce19
- (void)didRotate;	// 0x33b3cff1
- (void)dismissMenuAnimated:(BOOL)animated;	// 0x33b3cf95
- (void)documentInteractionController:(id)controller willBeginSendingToApplication:(id)application;	// 0x33b3d16d
- (void)documentInteractionControllerDidDismissOptionsMenu:(id)documentInteractionController;	// 0x33b3d0f9
- (id)documentInteractionControllerViewControllerForPreview:(id)preview;	// 0x33b3d07d
- (void)documentInteractionControllerWillPresentOptionsMenu:(id)documentInteractionController;	// 0x33b3d09d
// declared property getter: - (int)popOverState;	// 0x33b3d1f5
- (void)presentOpenInMenuFromBarButtonItem:(id)barButtonItem animated:(BOOL)animated;	// 0x33b3cf09
- (void)presentOptionsMenuFromBarButtonItem:(id)barButtonItem animated:(BOOL)animated;	// 0x33b3ce7d
- (id)printInfoForDocumentInteractionController:(id)documentInteractionController;	// 0x33b3d1d5
- (BOOL)respondsToSelector:(SEL)selector;	// 0x33b3cff5
// declared property setter: - (void)setPopOverState:(int)state;	// 0x33b3d209
- (void)willRotate;	// 0x33b3cfed
@end
