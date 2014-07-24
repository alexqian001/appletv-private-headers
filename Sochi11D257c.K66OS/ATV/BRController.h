/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"
#import "BRContextMenuControlDelegate.h"

@class BRControllerStack, NSMutableSet, NSString, BRContextMenuControl;

__attribute__((visibility("hidden")))
@interface BRController : BRControl <BRContextMenuControlDelegate> {
	NSMutableSet *_labels;	// 84 = 0x54
	BRControllerStack *_stack;	// 88 = 0x58
	BOOL _depthLimited;	// 92 = 0x5c
	BRContextMenuControl *_contextMenu;	// 96 = 0x60
	BOOL _showsHeader;	// 100 = 0x64
	NSString *_title;	// 104 = 0x68
	id _wasPushedBlock;	// 108 = 0x6c
	id _wasPoppedBlock;	// 112 = 0x70
	id _wasBuriedBlock;	// 116 = 0x74
	id _wasExhumedBlock;	// 120 = 0x78
	int _maxDepthLimit;	// 124 = 0x7c
	NSString *_depthLimitLabel;	// 128 = 0x80
}
@property(retain, nonatomic) NSString *depthLimitLabel;	// G=0x3253c5; S=0x3253d5; @synthesize=_depthLimitLabel
@property(assign) BOOL depthLimited;	// G=0x3251f9; S=0x3251b1; converted property
@property(assign, nonatomic) int maxDepthLimit;	// G=0x3253a5; S=0x3253b5; @synthesize=_maxDepthLimit
@property(assign, nonatomic) BOOL showsHeader;	// G=0x3253e5; S=0x3253f5; @synthesize=_showsHeader
@property(retain) BRControllerStack *stack;	// G=0x3250b1; S=0x3250a1; converted property
@property(copy, nonatomic) NSString *title;	// G=0x3252f1; S=0x325305; @synthesize=_title
@property(copy, nonatomic) id wasBuriedBlock;	// G=0x32535d; S=0x325371; @synthesize=_wasBuriedBlock
@property(copy, nonatomic) id wasExhumedBlock;	// G=0x325381; S=0x325395; @synthesize=_wasExhumedBlock
@property(copy, nonatomic) id wasPoppedBlock;	// G=0x325339; S=0x32534d; @synthesize=_wasPoppedBlock
@property(copy, nonatomic) id wasPushedBlock;	// G=0x325315; S=0x325329; @synthesize=_wasPushedBlock
+ (id)controllerWithContentControl:(id)contentControl;	// 0x324ce5
- (id)init;	// 0x324d21
- (void)_contextMenuCancelItemSelected:(id)selected;	// 0x32566d
- (void)_handleWindowMaxBoundsChanged;	// 0x325229
- (BOOL)_showContextMenu;	// 0x3256a9
- (void)addLabel:(id)label;	// 0x3250f5
- (BOOL)brEventAction:(id)action;	// 0x324f5d
- (BOOL)canBeRemovedFromStack;	// 0x3250f1
- (id)cancelProviderForContextMenu;	// 0x325409
- (void)contextMenuDidDismiss:(id)contextMenu;	// 0x3255b1
- (int)contextMenuDimOption;	// 0x3255ad
- (BOOL)contextMenuIsVisible;	// 0x325539
- (id)controlForContextMenuPositioning;	// 0x3254c9
- (id)controlForContextMenuStart;	// 0x3254cd
- (id)controlToDim;	// 0x3255a9
- (void)controlWasDeactivated;	// 0x324f1d
- (void)dealloc;	// 0x324e15
// declared property getter: - (id)depthLimitLabel;	// 0x3253c5
// converted property getter: - (BOOL)depthLimited;	// 0x3251f9
- (id)description;	// 0x324ff5
- (void)didDismissContextMenu;	// 0x3255c1
- (void)dismissContextMenu;	// 0x325565
- (long)errorNumberForNoContent;	// 0x32520d
- (BOOL)isLabelled:(id)labelled;	// 0x325181
- (BOOL)isNetworkDependent;	// 0x3251a9
- (BOOL)isValidAfterDataUpdate;	// 0x325209
// declared property getter: - (int)maxDepthLimit;	// 0x3253a5
- (id)providersForContextMenu;	// 0x325405
- (BOOL)recreateOnReselect;	// 0x3251ad
- (void)removeLabel:(id)label;	// 0x325161
// declared property setter: - (void)setDepthLimitLabel:(id)label;	// 0x3253d5
// converted property setter: - (void)setDepthLimited:(BOOL)limited;	// 0x3251b1
// declared property setter: - (void)setMaxDepthLimit:(int)limit;	// 0x3253b5
// declared property setter: - (void)setShowsHeader:(BOOL)header;	// 0x3253f5
// converted property setter: - (void)setStack:(id)stack;	// 0x3250a1
// declared property setter: - (void)setTitle:(id)title;	// 0x325305
// declared property setter: - (void)setWasBuriedBlock:(id)block;	// 0x325371
// declared property setter: - (void)setWasExhumedBlock:(id)block;	// 0x325395
// declared property setter: - (void)setWasPoppedBlock:(id)block;	// 0x32534d
// declared property setter: - (void)setWasPushedBlock:(id)block;	// 0x325329
- (void)showDetailContextMenuWithProvider:(id)provider initialSelection:(long)selection;	// 0x3254d1
// declared property getter: - (BOOL)showsHeader;	// 0x3253e5
// converted property getter: - (id)stack;	// 0x3250b1
- (BOOL)suppressAutoDismissableDialogs;	// 0x325225
// declared property getter: - (id)title;	// 0x3252f1
- (BOOL)topOfStack;	// 0x3250c1
- (id)transitionType;	// 0x325215
- (void)wasBuried;	// 0x325619
// declared property getter: - (id)wasBuriedBlock;	// 0x32535d
- (void)wasExhumed;	// 0x325651
// declared property getter: - (id)wasExhumedBlock;	// 0x325381
- (void)wasPopped;	// 0x3255e1
// declared property getter: - (id)wasPoppedBlock;	// 0x325339
- (void)wasPushed;	// 0x3255c5
// declared property getter: - (id)wasPushedBlock;	// 0x325315
@end
