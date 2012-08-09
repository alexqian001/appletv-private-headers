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
@property(retain, nonatomic) NSArray *dataFilters;	// G=0xc3751; S=0xc3761; @synthesize=_dataFilters
@property(assign, nonatomic) int op;	// G=0xc3771; S=0xc3781; @synthesize=_op
- (id)initWithDataFilters:(id)dataFilters op:(int)op;	// 0xc34fd
// declared property getter: - (id)dataFilters;	// 0xc3751
- (void)dealloc;	// 0xc3579
- (id)description;	// 0xc3665
- (unsigned)hash;	// 0xc363d
- (BOOL)isEqual:(id)equal;	// 0xc35bd
- (BOOL)isQueryFilter;	// 0xc374d
// declared property getter: - (int)op;	// 0xc3771
// declared property setter: - (void)setDataFilters:(id)filters;	// 0xc3761
// declared property setter: - (void)setOp:(int)op;	// 0xc3781
@end
