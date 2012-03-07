/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class BRControl;

@interface BRWindow : NSObject {
@private
	BRControl *_content;	// 4 = 0x4
	BRControl *_plane;	// 8 = 0x8
	int _level;	// 12 = 0xc
	BOOL _orderedIn;	// 16 = 0x10
	BOOL _opaque;	// 17 = 0x11
}
@property(assign) BOOL acceptsFocus;	// G=0x34193655; S=0x34193635; converted property
@property(retain) BRControl *content;	// G=0x34193451; S=0x341933ad; converted property
@property(assign) BOOL isOpaque;	// G=0x34193679; S=0x341935f1; converted property
@property(assign) int level;	// G=0x341934a5; S=0x34193461; converted property
@property(readonly, assign, getter=isOrderedIn) BOOL orderedIn;	// G=0x34193689; converted property
+ (void)_establishRootContext;	// 0x34193699
+ (void)_establishRootLayerBounds;	// 0x341939d5
+ (void)adjustToDisplayChange;	// 0x34193219
+ (BOOL)dispatchEvent:(id)event;	// 0x34193e09
+ (id)focusedLeafControl;	// 0x34193e41
+ (void)initialize;	// 0x341930b9
+ (CGRect)interfaceFrame;	// 0x341931f9
+ (CGSize)maxBounds;	// 0x341931e5
+ (id)rootLayer;	// 0x34193c95
+ (void)setMaxBounds:(CGSize)bounds;	// 0x34193cc1
+ (id)window;	// 0x341931ad
+ (id)windowList;	// 0x34193cb1
- (id)init;	// 0x3419326d
- (void)_addWindow:(id)window atIndex:(long)index;	// 0x34194159
- (id)_controlPlane;	// 0x34193e6d
- (void)_orderWindow:(id)window above:(id)above;	// 0x341940ad
- (void)_orderWindow:(id)window below:(id)below;	// 0x34194005
- (void)_orderWindowBack:(id)back;	// 0x34193f71
- (void)_orderWindowFront:(id)front;	// 0x34193edd
- (void)_orderWindowOut:(id)anOut;	// 0x34193e7d
- (void)_updateContent;	// 0x341943ad
- (void)_updateRenderedWindows;	// 0x34194209
// converted property getter: - (BOOL)acceptsFocus;	// 0x34193655
// converted property getter: - (id)content;	// 0x34193451
- (void)dealloc;	// 0x3419331d
// converted property getter: - (BOOL)isOpaque;	// 0x34193679
// converted property getter: - (BOOL)isOrderedIn;	// 0x34193689
// converted property getter: - (int)level;	// 0x341934a5
- (void)orderAbove:(id)above;	// 0x341935ad
- (void)orderBack;	// 0x34193529
- (void)orderBelow:(id)below;	// 0x34193569
- (void)orderFront;	// 0x341934e9
- (void)orderOut;	// 0x341934b5
// converted property setter: - (void)setAcceptsFocus:(BOOL)focus;	// 0x34193635
// converted property setter: - (void)setContent:(id)content;	// 0x341933ad
// converted property setter: - (void)setIsOpaque:(BOOL)opaque;	// 0x341935f1
// converted property setter: - (void)setLevel:(int)level;	// 0x34193461
@end
