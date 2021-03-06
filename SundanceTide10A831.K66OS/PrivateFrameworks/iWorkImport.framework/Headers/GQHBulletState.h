/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface GQHBulletState : NSObject {
	CFArrayRef mLevels;	// 4 = 0x4
	int mCurrentLevel;	// 8 = 0x8
}
@property(assign) int currentLevel;	// G=0x35d11629; S=0x35d11589; converted property
+ (CFStringRef)createLabelStr:(int)str number:(int)number;	// 0x35d10f79
- (id)init;	// 0x35d11019
- (CFStringRef)bulletChar:(int)aChar;	// 0x35d112e5
- (int)bulletIndentForLevel:(int)level;	// 0x35d11341
- (CFStringRef)createTieredNumberStringForLevel:(int)level;	// 0x35d11455
// converted property getter: - (int)currentLevel;	// 0x35d11629
- (void)dealloc;	// 0x35d1111d
- (BOOL)hasNumberAtLevel:(int)level;	// 0x35d11201
- (int)labelTypeAtLevel:(int)level;	// 0x35d11289
- (id)listStyleAtLevel:(int)level;	// 0x35d11415
- (int)numberAtLevel:(int)level;	// 0x35d1122d
- (void)setBulletChar:(CFStringRef)aChar level:(int)level;	// 0x35d112b5
- (void)setBulletIndent:(int)indent level:(int)level;	// 0x35d11311
// converted property setter: - (void)setCurrentLevel:(int)level;	// 0x35d11589
- (void)setLabelType:(int)type level:(int)level;	// 0x35d11259
- (void)setListStyle:(id)style atLevel:(int)level;	// 0x35d113c9
- (void)setNumber:(int)number level:(int)level;	// 0x35d111b9
- (void)setTextIndent:(int)indent level:(int)level;	// 0x35d1136d
- (void)setType:(int)type level:(int)level;	// 0x35d1115d
- (int)textIndentForLevel:(int)level;	// 0x35d1139d
- (int)typeAtlevel:(int)atlevel;	// 0x35d1118d
@end

