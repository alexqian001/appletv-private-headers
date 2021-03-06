/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADTableStyle, OADBackground, NSArray, PDTransition, NSString, PDAnimation;

@interface PDSlideBase : NSObject {
	NSString *mName;	// 4 = 0x4
	NSArray *mDrawables;	// 8 = 0x8
	OADBackground *mBackground;	// 12 = 0xc
	PDAnimation *mAnimation;	// 16 = 0x10
	PDTransition *mTransition;	// 20 = 0x14
	OADTableStyle *mDefaultTableStyle;	// 24 = 0x18
	unsigned mIsHidden : 1;	// 28 = 0x1c
	unsigned mIsDoneWithContent : 1;	// 28 = 0x1c
}
@property(retain) id background;	// G=0x36a4030d; S=0x36a38f9d; converted property
@property(retain) id defaultTableStyle;	// G=0x36c4f509; S=0x36b04b95; converted property
@property(assign) BOOL isHidden;	// G=0x36a3f8d1; S=0x36b7d059; converted property
@property(retain) id name;	// G=0x36c4f4b9; S=0x36b051f5; converted property
@property(retain) id transition;	// G=0x36b052c1; S=0x36b07879; converted property
+ (int)inheritedPlaceholderType:(int)type;	// 0x36a3931d
- (id)init;	// 0x369e6409
- (void)addSlideNumberPlaceholder:(id)placeholder;	// 0x36a3bbf5
- (id)animation;	// 0x36b027b9
// converted property getter: - (id)background;	// 0x36a4030d
- (id)colorMap;	// 0x36c4f501
- (id)colorScheme;	// 0x36c4f4f9
- (void)dealloc;	// 0x36a502cd
// converted property getter: - (id)defaultTableStyle;	// 0x36c4f509
- (id)defaultTheme;	// 0x36c4f4dd
- (void)doneWithContent;	// 0x36c4f519
- (id)drawables;	// 0x36a419a9
- (id)drawingTheme;	// 0x36c4f5dd
- (id)fontScheme;	// 0x36c4f4fd
- (void)generatePpt9Animations:(id)animations;	// 0x36c4f6d5
- (BOOL)hasPpt10Animations;	// 0x36c4f5e1
- (BOOL)hasPpt9Animations;	// 0x36c4f60d
// converted property getter: - (BOOL)isHidden;	// 0x36a3f8d1
- (id)masterGraphicForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x36c4f4f1
// converted property getter: - (id)name;	// 0x36c4f4b9
- (id)parentShapePropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x36c4f4ed
- (id)parentSlideBase;	// 0x36c4f4f5
- (id)parentTextBodyPropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x36c4f4e1
- (id)parentTextStyleForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index defaultTextListStyle:(id)style overrideIndex:(BOOL)index4;	// 0x36c4f4e5
- (id)parentTextStyleForTables;	// 0x36c4f4e9
- (id)placeholderWithType:(int)type placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x36a39345
- (id)placeholderWithType:(int)type placeholderTypeIndex:(int)index useBaseTypeMatch:(BOOL)match overrideIndex:(BOOL)index4;	// 0x36a39369
// converted property setter: - (void)setBackground:(id)background;	// 0x36a38f9d
// converted property setter: - (void)setDefaultTableStyle:(id)style;	// 0x36b04b95
- (void)setDrawables:(id)drawables defaultTextListStyle:(id)style;	// 0x36a34519
- (void)setInheritedTextStyle:(id)style placeholderType:(int)type defaultTextListStyle:(id)style3;	// 0x36c4f4c9
// converted property setter: - (void)setIsHidden:(BOOL)hidden;	// 0x36b7d059
// converted property setter: - (void)setName:(id)name;	// 0x36b051f5
- (void)setPpt9AnimationDataForCacheItem:(id)cacheItem order:(int)order;	// 0x36c4f7b5
// converted property setter: - (void)setTransition:(id)transition;	// 0x36b07879
- (id)styleMatrix;	// 0x36c4f505
// converted property getter: - (id)transition;	// 0x36b052c1
@end

