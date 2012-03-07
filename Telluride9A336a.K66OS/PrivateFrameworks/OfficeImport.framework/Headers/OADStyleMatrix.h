/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADStyleMatrix : NSObject {
@private
	NSMutableArray *mFills;	// 4 = 0x4
	NSMutableArray *mStrokes;	// 8 = 0x8
	NSMutableArray *mEffects;	// 12 = 0xc
	NSMutableArray *mBgFills;	// 16 = 0x10
}
- (id)init;	// 0x34c3ba31
- (void)addBgFill:(id)fill;	// 0x34d07959
- (void)addEffects:(id)effects;	// 0x34d07935
- (void)addFill:(id)fill;	// 0x34d066e5
- (void)addStroke:(id)stroke;	// 0x34d07365
- (id)bgFillAtIndex:(unsigned)index;	// 0x34d2b645
- (unsigned)bgFillCount;	// 0x34e24c75
- (void)dealloc;	// 0x34c0b0d9
- (id)effectsAtIndex:(unsigned)index;	// 0x34d37c49
- (id)effectsAtIndex:(unsigned)index color:(id)color;	// 0x34e24bed
- (unsigned)effectsCount;	// 0x34e24bcd
- (id)fillAtIndex:(unsigned)index;	// 0x34d2f37d
- (id)fillAtIndex:(unsigned)index color:(id)color;	// 0x34e24afd
- (unsigned)fillCount;	// 0x34e24add
- (id)strokeAtIndex:(unsigned)index;	// 0x34d37bd5
- (id)strokeAtIndex:(unsigned)index color:(id)color;	// 0x34e24b75
- (unsigned)strokeCount;	// 0x34e24b55
@end
