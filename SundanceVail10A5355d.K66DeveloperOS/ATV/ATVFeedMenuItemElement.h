/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class ATVFeedImageElement, NSString, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedMenuItemElement : ATVFeedElement {
	NSString *_label;	// 4 = 0x4
	NSString *_label2;	// 8 = 0x8
	NSString *_rightLabel;	// 12 = 0xc
	ATVFeedImageElement *_image;	// 16 = 0x10
	ATVFeedImageElement *_defaultImage;	// 20 = 0x14
	ATVFeedElement *_preview;	// 24 = 0x18
	NSArray *_accessories;	// 28 = 0x1c
	int _ordinal;	// 32 = 0x20
	int _maxOrdinalDigits;	// 36 = 0x24
}
@property(retain, nonatomic) NSArray *accessories;	// G=0x146215; S=0x146225; @synthesize=_accessories
@property(retain, nonatomic) ATVFeedImageElement *defaultImage;	// G=0x1461d5; S=0x1461e5; @synthesize=_defaultImage
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x1461b5; S=0x1461c5; @synthesize=_image
@property(copy, nonatomic) NSString *label;	// G=0x146149; S=0x14615d; @synthesize=_label
@property(copy, nonatomic) NSString *label2;	// G=0x14616d; S=0x146181; @synthesize=_label2
@property(assign, nonatomic) int maxOrdinalDigits;	// G=0x146255; S=0x146265; @synthesize=_maxOrdinalDigits
@property(assign, nonatomic) int ordinal;	// G=0x146235; S=0x146245; @synthesize=_ordinal
@property(retain, nonatomic) ATVFeedElement *preview;	// G=0x1461f5; S=0x146205; @synthesize=_preview
@property(copy, nonatomic) NSString *rightLabel;	// G=0x146191; S=0x1461a5; @synthesize=_rightLabel
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x145cad
// declared property getter: - (id)accessories;	// 0x146215
- (void)dealloc;	// 0x146081
// declared property getter: - (id)defaultImage;	// 0x1461d5
// declared property getter: - (id)image;	// 0x1461b5
// declared property getter: - (id)label;	// 0x146149
// declared property getter: - (id)label2;	// 0x14616d
// declared property getter: - (int)maxOrdinalDigits;	// 0x146255
// declared property getter: - (int)ordinal;	// 0x146235
// declared property getter: - (id)preview;	// 0x1461f5
// declared property getter: - (id)rightLabel;	// 0x146191
// declared property setter: - (void)setAccessories:(id)accessories;	// 0x146225
// declared property setter: - (void)setDefaultImage:(id)image;	// 0x1461e5
// declared property setter: - (void)setImage:(id)image;	// 0x1461c5
// declared property setter: - (void)setLabel2:(id)a2;	// 0x146181
// declared property setter: - (void)setLabel:(id)label;	// 0x14615d
// declared property setter: - (void)setMaxOrdinalDigits:(int)digits;	// 0x146265
// declared property setter: - (void)setOrdinal:(int)ordinal;	// 0x146245
// declared property setter: - (void)setPreview:(id)preview;	// 0x146205
// declared property setter: - (void)setRightLabel:(id)label;	// 0x1461a5
@end

