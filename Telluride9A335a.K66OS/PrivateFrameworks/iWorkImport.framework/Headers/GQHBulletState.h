/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GQHBulletState : NSObject {
@private
	CFArrayRef mLevels;	// 4 = 0x4
	int mCurrentLevel;	// 8 = 0x8
}
@property(assign) int currentLevel;	// G=0x304869e1; S=0x30486bb1; converted property
+ (CFStringRef)createLabelStr:(int)str number:(int)number;	// 0x30486b19
- (id)init;	// 0x304870c5
- (CFStringRef)bulletChar:(int)aChar;	// 0x30486ed1
- (int)bulletIndentForLevel:(int)level;	// 0x30486e75
- (CFStringRef)createTieredNumberStringForLevel:(int)level;	// 0x30486c4d
// converted property getter: - (int)currentLevel;	// 0x304869e1
- (void)dealloc;	// 0x30487085
- (BOOL)hasNumberAtLevel:(int)level;	// 0x30486fb5
- (int)labelTypeAtLevel:(int)level;	// 0x30486f2d
- (id)listStyleAtLevel:(int)level;	// 0x30486d8d
- (int)numberAtLevel:(int)level;	// 0x30486f89
- (void)setBulletChar:(CFStringRef)aChar level:(int)level;	// 0x30486efd
- (void)setBulletIndent:(int)indent level:(int)level;	// 0x30486ea1
// converted property setter: - (void)setCurrentLevel:(int)level;	// 0x30486bb1
- (void)setLabelType:(int)type level:(int)level;	// 0x30486f59
- (void)setListStyle:(id)style atLevel:(int)level;	// 0x30486dcd
- (void)setNumber:(int)number level:(int)level;	// 0x30486fe1
- (void)setTextIndent:(int)indent level:(int)level;	// 0x30486e45
- (void)setType:(int)type level:(int)level;	// 0x30487055
- (int)textIndentForLevel:(int)level;	// 0x30486e19
- (int)typeAtlevel:(int)atlevel;	// 0x30487029
@end
