/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDAnimationShapeTarget.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface PDAnimationTextTarget : PDAnimationShapeTarget {
@private
	int mType;	// 8 = 0x8
	NSRange mRange;	// 12 = 0xc
}
@property(assign) NSRange range;	// G=0x3128596d; S=0x311b38ad; converted property
@property(assign) int type;	// G=0x3128595d; S=0x311b389d; converted property
- (id)init;	// 0x311b3871
- (id).cxx_construct;	// 0x311b386d
- (unsigned)hash;	// 0x31285985
- (BOOL)isEqual:(id)equal;	// 0x31285a11
// converted property getter: - (NSRange)range;	// 0x3128596d
// converted property setter: - (void)setRange:(NSRange)range;	// 0x311b38ad
// converted property setter: - (void)setType:(int)type;	// 0x311b389d
// converted property getter: - (int)type;	// 0x3128595d
@end

