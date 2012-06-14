/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDRun.h"

@class WDCharacterProperties;

__attribute__((visibility("hidden")))
@interface WDSpecialCharacter : WDRun {
@private
	WDCharacterProperties *mProperties;	// 8 = 0x8
	int mType;	// 12 = 0xc
}
@property(assign) int characterType;	// G=0x312b9ec5; S=0x31193c15; converted property
- (id)initWithParagraph:(id)paragraph;	// 0x311938f1
// converted property getter: - (int)characterType;	// 0x312b9ec5
- (void)clearProperties;	// 0x312b9e99
- (void)dealloc;	// 0x31193ec5
- (id)properties;	// 0x31193c05
- (int)runType;	// 0x311b5fad
// converted property setter: - (void)setCharacterType:(int)type;	// 0x31193c15
@end
