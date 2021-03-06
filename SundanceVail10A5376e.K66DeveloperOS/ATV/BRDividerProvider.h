/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRProvider.h"
#import "BRControlHeightFactory.h"
#import "BRControlFactory.h"

@class BRHorizontalDividerControl;

__attribute__((visibility("hidden")))
@interface BRDividerProvider : XXUnknownSuperclass <BRControlFactory, BRControlHeightFactory, BRProvider> {
	id<BRProvider> _provider;	// 4 = 0x4
	BRHorizontalDividerControl *_topDivider;	// 8 = 0x8
	BOOL _dividerHidden;	// 12 = 0xc
	BOOL _showDivider;	// 13 = 0xd
}
@property(assign) BOOL dividerHidden;	// G=0x2c89a1; S=0x2c8975; converted property
+ (id)providerWithProvider:(id)provider;	// 0x2c884d
- (id)initWithProvider:(id)provider;	// 0x2c86c5
- (void)_providerDataSetChanged:(id)changed;	// 0x2c8cd1
- (void)_providerItemsModified:(id)modified;	// 0x2c8c5d
- (id)_shiftRangesDown:(id)down;	// 0x2c8b85
- (BOOL)_shouldShowDivider;	// 0x2c8b35
- (void)_updateTopDividerControl;	// 0x2c8a99
- (id)accessibilityLabel;	// 0x2c8d39
- (void)addDividerWithLabel:(id)label;	// 0x2c88a9
- (id)controlFactory;	// 0x2c89d1
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x2c8d59
- (id)dataAtIndex:(long)index;	// 0x2c8a11
- (long)dataCount;	// 0x2c89d5
- (void)dealloc;	// 0x2c87bd
- (id)divider;	// 0x2c89c1
// converted property getter: - (BOOL)dividerHidden;	// 0x2c89a1
- (BOOL)dividerVisible;	// 0x2c89b1
- (id)hashForDataAtIndex:(long)index;	// 0x2c8a5d
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x2c8dad
- (id)provider;	// 0x2c8899
- (void)removeDivider;	// 0x2c8935
// converted property setter: - (void)setDividerHidden:(BOOL)hidden;	// 0x2c8975
@end

