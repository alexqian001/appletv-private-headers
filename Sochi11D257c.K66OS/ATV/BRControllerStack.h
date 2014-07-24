/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSMutableArray;
@protocol BRViewHosting;

__attribute__((visibility("hidden")))
@interface BRControllerStack : BRControl {
	NSMutableArray *_stack;	// 84 = 0x54
	NSMutableArray *_transactions;	// 88 = 0x58
	NSMutableArray *_currentStackPath;	// 92 = 0x5c
	id<BRViewHosting> _controlHost;	// 96 = 0x60
	BOOL _processingTransactions;	// 100 = 0x64
}
@property(retain, nonatomic) id<BRViewHosting> controlHost;	// G=0x326581; S=0x326591; @synthesize=_controlHost
- (id)init;	// 0x325861
- (void)_addTransaction:(id)transaction;	// 0x3265a1
- (id)_checkSubstitutions:(id)substitutions;	// 0x327dd9
- (void)_performDepthLimitedCullingForController:(id)controller;	// 0x327c15
- (void)_processPopToClassTransaction:(id)classTransaction;	// 0x327409
- (void)_processPopToLabelTransaction:(id)labelTransaction;	// 0x327545
- (void)_processPopToTransaction:(id)transaction;	// 0x3271d1
- (void)_processPopTransaction:(id)transaction;	// 0x326e6d
- (void)_processPushTransaction:(id)transaction;	// 0x326d69
- (void)_processRemoveTransaction:(id)transaction;	// 0x327671
- (void)_processReplaceAllTransaction:(id)transaction;	// 0x3277d5
- (void)_processReplaceControllersAboveLabelTransaction:(id)transaction;	// 0x3279e9
- (void)_processSwapTransaction:(id)transaction;	// 0x32701d
- (void)_processTransactions;	// 0x3265f1
- (void)_setContent:(id)content direction:(int)direction oldTransition:(id)transition;	// 0x326831
- (void)_updateStackPathForPoppingController:(id)poppingController;	// 0x327d55
- (void)_updateStackPathForPushingController:(id)pushingController;	// 0x327cfd
- (id)accessibilityLabel;	// 0x326559
- (BOOL)brEventAction:(id)action;	// 0x3262cd
// declared property getter: - (id)controlHost;	// 0x326581
- (id)controllers;	// 0x3260b9
- (id)controllersLabeled:(id)labeled;	// 0x3260e5
- (id)controllersOfClass:(Class)aClass;	// 0x3261c9
- (int)count;	// 0x3262ad
- (void)dealloc;	// 0x325925
- (void)layoutSubcontrols;	// 0x325a9d
- (id)peekController;	// 0x326055
- (void)popController;	// 0x325ba9
- (void)popToController:(id)controller;	// 0x325ce5
- (void)popToControllerOfClass:(Class)aClass;	// 0x325d55
- (void)popToControllerWithLabel:(id)label;	// 0x325dd9
- (void)pushController:(id)controller;	// 0x325b29
- (void)removeController:(id)controller;	// 0x325e49
- (void)replaceAllControllersWithController:(id)controller;	// 0x325f39
- (void)replaceControllersAboveLabel:(id)label withController:(id)controller;	// 0x325fb9
- (id)rootController;	// 0x326075
// declared property setter: - (void)setControlHost:(id)host;	// 0x326591
- (id)stackPathForController:(id)controller;	// 0x3263f9
- (void)swapController:(id)controller;	// 0x325eb9
- (void)updateStackPathForController:(id)controller previousIdentifier:(id)identifier;	// 0x326491
@end
