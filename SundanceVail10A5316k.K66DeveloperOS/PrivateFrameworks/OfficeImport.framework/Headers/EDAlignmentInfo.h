/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "NSCopying.h"
#import "EDImmutableObject.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EDAlignmentInfo : NSObject <NSCopying, EDImmutableObject> {
@private
	int mHorizontalAlignment;	// 4 = 0x4
	int mVerticalAlignment;	// 8 = 0x8
	int mIndent;	// 12 = 0xc
	int mTextRotation;	// 16 = 0x10
	bool mTextWrapped;	// 20 = 0x14
	bool mHorizontalAlignOverridden;	// 21 = 0x15
	bool mVerticalAlignOverridden;	// 22 = 0x16
	bool mIndentOverridden;	// 23 = 0x17
	bool mTextWrappedOveridden;	// 24 = 0x18
	bool mDoNotModify;	// 25 = 0x19
}
@property(assign) int horizontalAlignment;	// G=0x310befc5; S=0x3109c6d1; converted property
@property(assign) int indent;	// G=0x310c03a5; S=0x3109c74d; converted property
@property(assign) int textRotation;	// G=0x310c09b9; S=0x3109c7bd; converted property
@property(assign, getter=isTextWrapped) bool textWrapped;	// G=0x310c03b5; S=0x3109c785; converted property
@property(assign) int verticalAlignment;	// G=0x310c0355; S=0x3109c715; converted property
+ (id)alignmentInfo;	// 0x3109c5b9
- (id)init;	// 0x3109c601
- (id)copyWithZone:(NSZone *)zone;	// 0x31229551
- (unsigned)hash;	// 0x31229575
// converted property getter: - (int)horizontalAlignment;	// 0x310befc5
// converted property getter: - (int)indent;	// 0x310c03a5
- (BOOL)isEqual:(id)equal;	// 0x3109d679
- (BOOL)isEqualToAlignmentInfo:(id)alignmentInfo;	// 0x3109d6d5
- (bool)isHorizontalAlignOverridden;	// 0x310befb1
- (bool)isIndentOverridden;	// 0x310ca09d
// converted property getter: - (bool)isTextWrapped;	// 0x310c03b5
- (bool)isTextWrappedOverridden;	// 0x310c0ae1
- (bool)isVerticalAlignOverridden;	// 0x310c0341
- (void)setDoNotModify:(bool)modify;	// 0x3109c865
// converted property setter: - (void)setHorizontalAlignment:(int)alignment;	// 0x3109c6d1
// converted property setter: - (void)setIndent:(int)indent;	// 0x3109c74d
// converted property setter: - (void)setTextRotation:(int)rotation;	// 0x3109c7bd
// converted property setter: - (void)setTextWrapped:(bool)wrapped;	// 0x3109c785
// converted property setter: - (void)setVerticalAlignment:(int)alignment;	// 0x3109c715
// converted property getter: - (int)textRotation;	// 0x310c09b9
// converted property getter: - (int)verticalAlignment;	// 0x310c0355
@end
