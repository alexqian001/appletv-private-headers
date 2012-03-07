/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "EDImmutableObject.h"
#import "OfficeImport-Structs.h"
#import "NSCopying.h"


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
@property(assign) int horizontalAlignment;	// G=0x343c39ed; S=0x344b7e59; converted property
@property(assign) int indent;	// G=0x343c39fd; S=0x344b7ed5; converted property
@property(assign) int textRotation;	// G=0x343c4e1d; S=0x344b7f2d; converted property
@property(assign, getter=isTextWrapped) bool textWrapped;	// G=0x343c3a0d; S=0x344b7f01; converted property
@property(assign) int verticalAlignment;	// G=0x343c3991; S=0x344b7ea9; converted property
+ (id)alignmentInfo;	// 0x344b7d39
- (id)init;	// 0x344b7d79
- (id)copyWithZone:(NSZone *)zone;	// 0x345a66b9
- (unsigned)hash;	// 0x345a668d
// converted property getter: - (int)horizontalAlignment;	// 0x343c39ed
// converted property getter: - (int)indent;	// 0x343c39fd
- (BOOL)isEqual:(id)equal;	// 0x344b8915
- (BOOL)isEqualToAlignmentInfo:(id)alignmentInfo;	// 0x344b8969
- (bool)isHorizontalAlignOverridden;	// 0x343c39dd
- (bool)isIndentOverridden;	// 0x343c5dc5
// converted property getter: - (bool)isTextWrapped;	// 0x343c3a0d
- (bool)isTextWrappedOverridden;	// 0x343c4fa5
- (bool)isVerticalAlignOverridden;	// 0x343c3981
- (void)setDoNotModify:(bool)modify;	// 0x344b7fa5
// converted property setter: - (void)setHorizontalAlignment:(int)alignment;	// 0x344b7e59
// converted property setter: - (void)setIndent:(int)indent;	// 0x344b7ed5
// converted property setter: - (void)setTextRotation:(int)rotation;	// 0x344b7f2d
// converted property setter: - (void)setTextWrapped:(bool)wrapped;	// 0x344b7f01
// converted property setter: - (void)setVerticalAlignment:(int)alignment;	// 0x344b7ea9
// converted property getter: - (int)textRotation;	// 0x343c4e1d
// converted property getter: - (int)verticalAlignment;	// 0x343c3991
@end
