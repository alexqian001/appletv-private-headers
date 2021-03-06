/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDSlideChild.h"

@class PDSlideMaster;

__attribute__((visibility("hidden")))
@interface PDSlideLayout : PDSlideChild {
@private
	int mSlideLayoutType;	// 44 = 0x2c
	PDSlideMaster *mSlideMaster;	// 48 = 0x30
}
@property(assign) int slideLayoutType;	// G=0x32bf6185; S=0x32bf4749; converted property
@property(retain) id slideMaster;	// G=0x32b7fa8d; S=0x32bf4739; converted property
- (id)initWithSlideMaster:(id)slideMaster;	// 0x32bf46cd
- (void)dealloc;	// 0x32baadad
- (id)defaultTheme;	// 0x32b7fa69
- (void)doneWithContent;	// 0x32d16b8d
- (id)masterGraphicForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index;	// 0x32bf4841
- (id)parentShapePropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index;	// 0x32bf47d5
- (id)parentSlideBase;	// 0x32b96ee9
- (id)parentTextBodyPropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index;	// 0x32bf4759
- (id)parentTextStyleForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index defaultTextListStyle:(id)style;	// 0x32b91315
- (id)parentTextStyleForTables;	// 0x32c17861
// converted property setter: - (void)setSlideLayoutType:(int)type;	// 0x32bf4749
// converted property setter: - (void)setSlideMaster:(id)master;	// 0x32bf4739
// converted property getter: - (int)slideLayoutType;	// 0x32bf6185
// converted property getter: - (id)slideMaster;	// 0x32b7fa8d
@end

