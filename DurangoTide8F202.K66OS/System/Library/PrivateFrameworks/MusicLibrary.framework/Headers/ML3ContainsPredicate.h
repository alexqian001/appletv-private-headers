/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "ML3PropertyPredicate.h"

@class NSArray;

@interface ML3ContainsPredicate : ML3PropertyPredicate {
@private
	NSArray *_values;	// 8 = 0x8
}
@property(copy, nonatomic) NSArray *values;	// G=0x31819be1; S=0x3181b421; @synthesize=_values
+ (id)predicateWithProperty:(id)property values:(id)values;	// 0x3181a949
- (id)initWithCoder:(id)coder;	// 0x3181a86d
- (id)initWithProperty:(id)property values:(id)values;	// 0x3181a905
- (void)appendSQLToMutableString:(id)mutableString entityClass:(Class)aClass;	// 0x3181a66d
- (void)bindToSqlite3Statement:(sqlite3_stmt *)sqlite3Statement bindingIndex:(inout int *)index;	// 0x3181b509
- (void)dealloc;	// 0x3181a8c9
- (id)description;	// 0x3181a709
- (void)encodeWithCoder:(id)coder;	// 0x3181a811
- (BOOL)isEqual:(id)equal;	// 0x3181a785
// declared property setter: - (void)setValues:(id)values;	// 0x3181b421
// declared property getter: - (id)values;	// 0x31819be1
@end

