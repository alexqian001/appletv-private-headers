/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVAppViewController.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRControl, BRViewController;

__attribute__((visibility("hidden")))
@interface ATVAppProxyViewController : XXUnknownSuperclass <ATVAppViewController> {
	BRViewController *_parentController;	// 4 = 0x4
	BRControl *_proxyView;	// 8 = 0x8
}
@property(assign, nonatomic) __weak BRViewController *parentController;	// G=0x137225; S=0x137245; @synthesize=_parentController
@property(readonly, assign, nonatomic) BRControl *proxyView;	// G=0x137259; @synthesize=_proxyView
- (id)initWithView:(id)view;	// 0x137191
- (void).cxx_destruct;	// 0x137269
- (id)backgroundAudio;	// 0x137209
- (void)loadWithCompletion:(id)completion;	// 0x1371f1
// declared property getter: - (id)parentController;	// 0x137225
// declared property getter: - (id)proxyView;	// 0x137259
// declared property setter: - (void)setParentController:(id)controller;	// 0x137245
- (id)view;	// 0x1371f9
@end
