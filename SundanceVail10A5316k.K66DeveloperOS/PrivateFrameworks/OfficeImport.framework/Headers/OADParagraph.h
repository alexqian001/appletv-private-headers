/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADCharacterProperties, OADParagraphProperties, NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADParagraph : NSObject {
@private
	OADParagraphProperties *mProperties;	// 4 = 0x4
	NSMutableArray *mTextRuns;	// 8 = 0x8
	OADCharacterProperties *mParagraphEndCharacterProperties;	// 12 = 0xc
}
@property(retain) id paragraphEndCharacterProperties;	// G=0x3106e7f1; S=0x312518e5; converted property
@property(retain) id properties;	// G=0x3106d2a9; S=0x312517ed; converted property
- (id)init;	// 0x3106ce25
- (id)addDateTimeField;	// 0x3113cc29
- (id)addFooterField;	// 0x31159db5
- (id)addGenericTextField;	// 0x31251849
- (id)addRegularTextRun;	// 0x3106d7c1
- (id)addSlideNumberField;	// 0x3106e829
- (id)addTextLineBreak;	// 0x31079585
- (void)applyProperties:(id)properties;	// 0x3125199d
- (id)bulletCharacterProperties;	// 0x31251971
- (void)dealloc;	// 0x3108c1e1
- (id)findFirstTextRunOfClass:(Class)aClass;	// 0x3115a0ed
- (BOOL)hasBulletCharacterProperties;	// 0x31251921
- (BOOL)isEmpty;	// 0x3107fa95
// converted property getter: - (id)paragraphEndCharacterProperties;	// 0x3106e7f1
- (id)plainText;	// 0x31167575
// converted property getter: - (id)properties;	// 0x3106d2a9
- (void)removeAllTextRuns;	// 0x31251829
- (void)removeUnnecessaryOverrides;	// 0x3107129d
// converted property setter: - (void)setParagraphEndCharacterProperties:(id)properties;	// 0x312518e5
- (void)setParentTextListStyle:(id)style;	// 0x3106f049
// converted property setter: - (void)setProperties:(id)properties;	// 0x312517ed
- (id)textRunAtIndex:(unsigned)index;	// 0x3106d945
- (unsigned)textRunCount;	// 0x3106d7a1
@end

