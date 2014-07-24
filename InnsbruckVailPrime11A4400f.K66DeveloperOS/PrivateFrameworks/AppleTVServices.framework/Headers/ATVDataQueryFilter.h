/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

#import "ATVDataBaseQueryFilter.h"
#import </libobjc.A.h>

@class NSString;

@interface ATVDataQueryFilter : NSObject <ATVDataBaseQueryFilter> {
	NSString *_property;	// 4 = 0x4
	int _op;	// 8 = 0x8
	id _value;	// 12 = 0xc
}
@property(assign, nonatomic) int op;	// G=0x3009f315; S=0x3009f325; @synthesize=_op
@property(retain, nonatomic) NSString *property;	// G=0x3009f2dd; S=0x3009f2ed; @synthesize=_property
@property(retain, nonatomic) id value;	// G=0x3009f335; S=0x3009f345; @synthesize=_value
+ (id)filterWithProperty:(id)property op:(int)op value:(id)value;	// 0x3009ef6d
- (id)initWithProperty:(id)property op:(int)op value:(id)value;	// 0x3009efdd
- (void).cxx_destruct;	// 0x3009f359
- (id)description;	// 0x3009f231
- (unsigned)hash;	// 0x3009f1a9
- (BOOL)isEqual:(id)equal;	// 0x3009f075
- (BOOL)isQueryFilter;	// 0x3009f2d9
// declared property getter: - (int)op;	// 0x3009f315
// declared property getter: - (id)property;	// 0x3009f2dd
// declared property setter: - (void)setOp:(int)op;	// 0x3009f325
// declared property setter: - (void)setProperty:(id)property;	// 0x3009f2ed
// declared property setter: - (void)setValue:(id)value;	// 0x3009f345
// declared property getter: - (id)value;	// 0x3009f335
@end
