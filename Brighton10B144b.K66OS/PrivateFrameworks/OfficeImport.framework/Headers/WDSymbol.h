/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDRun.h"

@class WDCharacterProperties, WDFont;

@interface WDSymbol : WDRun {
	WDCharacterProperties *mProperties;	// 8 = 0x8
	WDFont *mFont;	// 12 = 0xc
	unsigned short mCharacter;	// 16 = 0x10
}
@property(assign) unsigned short character;	// G=0x34944051; S=0x34943df1; converted property
@property(retain) id font;	// G=0x34944061; S=0x34943db5; converted property
- (id)initWithParagraph:(id)paragraph;	// 0x349439d5
// converted property getter: - (unsigned short)character;	// 0x34944051
- (void)clearProperties;	// 0x34ab775d
- (void)dealloc;	// 0x3494424d
// converted property getter: - (id)font;	// 0x34944061
- (id)properties;	// 0x34943d25
- (int)runType;	// 0x34943fc1
// converted property setter: - (void)setCharacter:(unsigned short)character;	// 0x34943df1
// converted property setter: - (void)setFont:(id)font;	// 0x34943db5
@end
