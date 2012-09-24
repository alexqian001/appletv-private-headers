/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVDataBaseQueryFilter.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface ATVDataQueryCompoundFilter : XXUnknownSuperclass <ATVDataBaseQueryFilter> {
	NSArray *_dataFilters;	// 4 = 0x4
	int _op;	// 8 = 0x8
}
@property(retain, nonatomic) NSArray *dataFilters;	// G=0xc825d; S=0xc826d; @synthesize=_dataFilters
@property(assign, nonatomic) int op;	// G=0xc827d; S=0xc828d; @synthesize=_op
- (id)initWithDataFilters:(id)dataFilters op:(int)op;	// 0xc8009
// declared property getter: - (id)dataFilters;	// 0xc825d
- (void)dealloc;	// 0xc8085
- (id)description;	// 0xc8171
- (unsigned)hash;	// 0xc8149
- (BOOL)isEqual:(id)equal;	// 0xc80c9
- (BOOL)isQueryFilter;	// 0xc8259
// declared property getter: - (int)op;	// 0xc827d
// declared property setter: - (void)setDataFilters:(id)filters;	// 0xc826d
// declared property setter: - (void)setOp:(int)op;	// 0xc828d
@end
