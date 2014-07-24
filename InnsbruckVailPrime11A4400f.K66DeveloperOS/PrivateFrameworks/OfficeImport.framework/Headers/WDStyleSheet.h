/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>

@class WDStyle, WDDocument, WDParagraphProperties, WDCharacterProperties, NSMutableArray, NSMutableDictionary;

@interface WDStyleSheet : NSObject {
	NSMutableDictionary *mStyleDictionary;	// 4 = 0x4
	WDDocument *mDocument;	// 8 = 0x8
	WDCharacterProperties *mDefaultCharacterProperties;	// 12 = 0xc
	WDParagraphProperties *mDefaultParagraphProperties;	// 16 = 0x10
	WDStyle *mDefaultParagraphStyle;	// 20 = 0x14
	WDStyle *mDefaultCharacterStyle;	// 24 = 0x18
	WDStyle *mDefaultTableStyle;	// 28 = 0x1c
	WDStyle *mDefaultListStyle;	// 32 = 0x20
	NSMutableArray *mStylesInOrder;	// 36 = 0x24
	NSMutableDictionary *mIdDictionaryForName;	// 40 = 0x28
}
@property(retain) id defaultCharacterStyle;	// G=0x3194c699; S=0x3173edfd; converted property
@property(retain) id defaultListStyle;	// G=0x3181751d; S=0x3173ee7d; converted property
@property(retain) id defaultParagraphStyle;	// G=0x31812ec5; S=0x3173ed6d; converted property
@property(retain) id defaultTableStyle;	// G=0x3194c6a9; S=0x3173ee3d; converted property
- (id)initWithDocument:(id)document;	// 0x3172dd81
- (void)addStyle:(id)style name:(id)name;	// 0x31815879
- (void)createDefaultStyles;	// 0x3194c35d
- (id)createStyleWithId:(id)anId type:(int)type;	// 0x3173ea51
- (id)createStyleWithName:(id)name type:(int)type;	// 0x3194c285
- (void)dealloc;	// 0x317713dd
- (id)defaultCharacterProperties;	// 0x31741371
// converted property getter: - (id)defaultCharacterStyle;	// 0x3194c699
// converted property getter: - (id)defaultListStyle;	// 0x3181751d
- (id)defaultParagraphProperties;	// 0x318744bd
// converted property getter: - (id)defaultParagraphStyle;	// 0x31812ec5
// converted property getter: - (id)defaultTableStyle;	// 0x3194c6a9
- (id)document;	// 0x3172e4f1
- (void)initializeDefaultProperties;	// 0x3172de69
- (id)paragraphStyleWithStartingName:(id)startingName;	// 0x3194c1ad
- (void)removeStyleWithId:(id)anId;	// 0x3194c2b9
// converted property setter: - (void)setDefaultCharacterStyle:(id)style;	// 0x3173edfd
// converted property setter: - (void)setDefaultListStyle:(id)style;	// 0x3173ee7d
// converted property setter: - (void)setDefaultParagraphStyle:(id)style;	// 0x3173ed6d
// converted property setter: - (void)setDefaultTableStyle:(id)style;	// 0x3173ee3d
- (void)setName:(id)name forId:(id)anId;	// 0x3173ed2d
- (unsigned)styleCount;	// 0x3194c15d
- (id)styleIdForName:(id)name;	// 0x3173e9f5
- (id)styleNameToId:(id)anId;	// 0x3173e999
- (id)styleWithId:(id)anId;	// 0x3173ea31
- (id)styleWithName:(id)name;	// 0x3194c17d
- (id)styles;	// 0x3194c13d
@end
