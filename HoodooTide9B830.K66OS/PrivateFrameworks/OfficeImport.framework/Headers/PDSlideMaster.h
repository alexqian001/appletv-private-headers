/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDSlideBase.h"

@class NSMutableArray, OADTheme, OADColorMap, OADTextListStyle;

__attribute__((visibility("hidden")))
@interface PDSlideMaster : PDSlideBase {
@private
	NSMutableArray *mSlideLayouts;	// 32 = 0x20
	OADTheme *mTheme;	// 36 = 0x24
	OADColorMap *mColorMap;	// 40 = 0x28
	OADTextListStyle *mTitleTextStyle;	// 44 = 0x2c
	OADTextListStyle *mBodyTextStyle;	// 48 = 0x30
	OADTextListStyle *mOtherTextStyle;	// 52 = 0x34
}
@property(retain) id bodyTextStyle;	// G=0x311a6d91; S=0x311a5051; converted property
@property(retain) id otherTextStyle;	// G=0x31233145; S=0x311a50a1; converted property
@property(retain, nonatomic) NSMutableArray *slideLayouts;	// G=0x312fe449; S=0x312fe459; @synthesize=mSlideLayouts
@property(retain) id theme;	// G=0x310e95cd; S=0x312fe5d9; converted property
@property(retain) id titleTextStyle;	// G=0x311a6d75; S=0x311a4e25; converted property
- (id)init;	// 0x311a341d
- (id)initWithDefaultsAndTheme:(id)defaultsAndTheme;	// 0x312fe61d
- (id)addSlideLayout;	// 0x311a703d
- (void)addSlideLayout:(id)layout;	// 0x311a70d9
// converted property getter: - (id)bodyTextStyle;	// 0x311a6d91
- (id)colorMap;	// 0x3116e3a5
- (id)colorScheme;	// 0x3116e42d
- (void)dealloc;	// 0x3117333d
- (id)defaultTheme;	// 0x3122db39
- (void)doneWithContent;	// 0x312fe4f9
- (id)drawingTheme;	// 0x312fe481
- (id)fontScheme;	// 0x31291305
- (id)masterGraphicForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x311a6d8d
// converted property getter: - (id)otherTextStyle;	// 0x31233145
- (id)parentShapePropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x311a6d89
- (id)parentSlideBase;	// 0x312fe445
- (id)parentTextBodyPropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x311a6d85
- (id)parentTextStyleForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index defaultTextListStyle:(id)style overrideIndex:(BOOL)index4;	// 0x31168dc9
- (id)parentTextStyleForTables;	// 0x312be6d9
- (id)placeholderWithType:(int)type placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x31168d51
// converted property setter: - (void)setBodyTextStyle:(id)style;	// 0x311a5051
// converted property setter: - (void)setOtherTextStyle:(id)style;	// 0x311a50a1
// declared property setter: - (void)setSlideLayouts:(id)layouts;	// 0x312fe459
// converted property setter: - (void)setTheme:(id)theme;	// 0x312fe5d9
// converted property setter: - (void)setTitleTextStyle:(id)style;	// 0x311a4e25
- (id)slideLayoutAtIndex:(unsigned)index;	// 0x311a875d
- (unsigned)slideLayoutCount;	// 0x311a873d
- (id)slideLayoutOfType:(int)type;	// 0x311a8a25
// declared property getter: - (id)slideLayouts;	// 0x312fe449
- (id)styleMatrix;	// 0x312b2d95
// converted property getter: - (id)theme;	// 0x310e95cd
// converted property getter: - (id)titleTextStyle;	// 0x311a6d75
@end
