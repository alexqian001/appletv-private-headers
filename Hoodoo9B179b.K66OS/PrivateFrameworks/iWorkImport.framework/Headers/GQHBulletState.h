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
@property(assign) int currentLevel;	// G=0x35990979; S=0x35990b49; converted property
+ (CFStringRef)createLabelStr:(int)str number:(int)number;	// 0x35990ab1
- (id)init;	// 0x3599105d
- (CFStringRef)bulletChar:(int)aChar;	// 0x35990e69
- (int)bulletIndentForLevel:(int)level;	// 0x35990e0d
- (CFStringRef)createTieredNumberStringForLevel:(int)level;	// 0x35990be5
// converted property getter: - (int)currentLevel;	// 0x35990979
- (void)dealloc;	// 0x3599101d
- (BOOL)hasNumberAtLevel:(int)level;	// 0x35990f4d
- (int)labelTypeAtLevel:(int)level;	// 0x35990ec5
- (id)listStyleAtLevel:(int)level;	// 0x35990d25
- (int)numberAtLevel:(int)level;	// 0x35990f21
- (void)setBulletChar:(CFStringRef)aChar level:(int)level;	// 0x35990e95
- (void)setBulletIndent:(int)indent level:(int)level;	// 0x35990e39
// converted property setter: - (void)setCurrentLevel:(int)level;	// 0x35990b49
- (void)setLabelType:(int)type level:(int)level;	// 0x35990ef1
- (void)setListStyle:(id)style atLevel:(int)level;	// 0x35990d65
- (void)setNumber:(int)number level:(int)level;	// 0x35990f79
- (void)setTextIndent:(int)indent level:(int)level;	// 0x35990ddd
- (void)setType:(int)type level:(int)level;	// 0x35990fed
- (int)textIndentForLevel:(int)level;	// 0x35990db1
- (int)typeAtlevel:(int)atlevel;	// 0x35990fc1
@end

