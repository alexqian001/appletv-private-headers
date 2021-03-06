/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControlHeightFactory.h"
#import "BRProvider.h"
#import <NSObject.h> // Unknown library
#import "BRControlFactory.h"

@class BRDividerControl;

@interface BRDividerProvider : NSObject <BRControlFactory, BRControlHeightFactory, BRProvider> {
@private
	id<BRProvider> _provider;	// 4 = 0x4
	BRDividerControl *_topDivider;	// 8 = 0x8
	BOOL _dividerHidden;	// 12 = 0xc
	BOOL _showDivider;	// 13 = 0xd
}
@property(assign) BOOL dividerHidden;	// G=0x329ddced; S=0x329ddcbd; converted property
+ (id)providerWithProvider:(id)provider;	// 0x329ddb69
- (id)initWithProvider:(id)provider;	// 0x329dd9d5
- (void)_providerDataSetChanged:(id)changed;	// 0x329de041
- (void)_providerItemsModified:(id)modified;	// 0x329ddfcd
- (id)_shiftRangesDown:(id)down;	// 0x329ddeed
- (BOOL)_shouldShowDivider;	// 0x329dde9d
- (void)_updateTopDividerControl;	// 0x329dddfd
- (id)accessibilityLabel;	// 0x329de0a9
- (void)addDividerWithLabel:(id)label;	// 0x329ddbc5
- (void)addDividerWithLabel:(id)label andOrientation:(int)orientation;	// 0x329ddbd9
- (id)controlFactory;	// 0x329ddd1d
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x329de0c9
- (id)dataAtIndex:(long)index;	// 0x329ddd61
- (long)dataCount;	// 0x329ddd21
- (void)dealloc;	// 0x329ddad9
- (id)divider;	// 0x329ddd0d
// converted property getter: - (BOOL)dividerHidden;	// 0x329ddced
- (BOOL)dividerVisible;	// 0x329ddcfd
- (id)hashForDataAtIndex:(long)index;	// 0x329dddb5
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x329de125
- (id)provider;	// 0x329ddbb5
- (void)removeDivider;	// 0x329ddc7d
// converted property setter: - (void)setDividerHidden:(BOOL)hidden;	// 0x329ddcbd
@end

