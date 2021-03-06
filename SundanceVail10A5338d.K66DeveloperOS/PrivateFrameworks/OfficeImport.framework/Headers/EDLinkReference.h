/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


@interface EDLinkReference : NSObject {
	unsigned mLinkIndex;	// 4 = 0x4
	unsigned mFirstSheetIndex;	// 8 = 0x8
	unsigned mLastSheetIndex;	// 12 = 0xc
}
@property(assign) unsigned firstSheetIndex;	// G=0x33acd229; S=0x33b7eec5; converted property
@property(assign) unsigned lastSheetIndex;	// G=0x33acd239; S=0x33b7eed5; converted property
@property(assign) unsigned linkIndex;	// G=0x33a23db5; S=0x33b7eee5; converted property
+ (id)linkReferenceWithLinkIndex:(unsigned)linkIndex firstSheetIndex:(unsigned)index lastSheetIndex:(unsigned)index3;	// 0x339f2529
- (id)init;	// 0x33b7ee69
- (id)initWithLinkIndex:(unsigned)linkIndex firstSheetIndex:(unsigned)index lastSheetIndex:(unsigned)index3;	// 0x339f2581
// converted property getter: - (unsigned)firstSheetIndex;	// 0x33acd229
- (unsigned)hash;	// 0x33b7eef5
- (BOOL)isEqual:(id)equal;	// 0x33af3955
- (BOOL)isEqualToLinkReference:(id)linkReference;	// 0x33af39b1
// converted property getter: - (unsigned)lastSheetIndex;	// 0x33acd239
// converted property getter: - (unsigned)linkIndex;	// 0x33a23db5
// converted property setter: - (void)setFirstSheetIndex:(unsigned)index;	// 0x33b7eec5
// converted property setter: - (void)setLastSheetIndex:(unsigned)index;	// 0x33b7eed5
// converted property setter: - (void)setLinkIndex:(unsigned)index;	// 0x33b7eee5
@end

