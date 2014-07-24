/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class UIColor, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedTableColumnDefinitionElement : ATVFeedElement {
	NSString *_title;	// 4 = 0x4
	NSString *_alignment;	// 8 = 0x8
	int _width;	// 12 = 0xc
	NSDictionary *_styleKeyValues;	// 16 = 0x10
}
@property(copy, nonatomic) NSString *alignment;	// G=0x127ab5; S=0x127ac9; @synthesize=_alignment
@property(retain, nonatomic) NSDictionary *styleKeyValues;	// G=0x127af9; S=0x127b09; @synthesize=_styleKeyValues
@property(copy, nonatomic) NSString *title;	// G=0x127a91; S=0x127aa5; @synthesize=_title
@property(readonly, assign, nonatomic) UIColor *titleColor;	// G=0x127a3d; 
@property(assign, nonatomic) int width;	// G=0x127ad9; S=0x127ae9; @synthesize=_width
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x127875
- (void).cxx_destruct;	// 0x127b31
// declared property getter: - (id)alignment;	// 0x127ab5
// declared property setter: - (void)setAlignment:(id)alignment;	// 0x127ac9
// declared property setter: - (void)setStyleKeyValues:(id)values;	// 0x127b09
// declared property setter: - (void)setTitle:(id)title;	// 0x127aa5
// declared property setter: - (void)setWidth:(int)width;	// 0x127ae9
// declared property getter: - (id)styleKeyValues;	// 0x127af9
// declared property getter: - (id)title;	// 0x127a91
// declared property getter: - (id)titleColor;	// 0x127a3d
// declared property getter: - (int)width;	// 0x127ad9
@end
