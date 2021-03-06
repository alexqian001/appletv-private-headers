/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLIntermediate.h"

@class NSSQLEntity, NSString, NSArray;

@interface NSSQLSelectIntermediate : NSSQLIntermediate {
	NSSQLEntity *_entity;	// 8 = 0x8
	NSString *_entityAlias;	// 12 = 0xc
	NSString *_correlationTarget;	// 16 = 0x10
	NSArray *_fetchColumns;	// 20 = 0x14
	BOOL _useDistinct;	// 24 = 0x18
	NSString *_columnAlias;	// 28 = 0x1c
	BOOL _isCount;	// 32 = 0x20
}
- (id)initForCorrelationTarget:(id)correlationTarget alias:(id)alias fetchColumns:(id)columns inScope:(id)scope;	// 0x2d12c7c1
- (id)initWithEntity:(id)entity alias:(id)alias fetchColumns:(id)columns inScope:(id)scope;	// 0x2d0662bd
- (void)dealloc;	// 0x2d069709
- (id)generateSQLStringInContext:(id)context;	// 0x2d06901d
- (BOOL)isSelectTargetScoped;	// 0x2d12c87d
- (BOOL)onlyFetchesAggregates;	// 0x2d12c881
- (void)setColumnAlias:(id)alias;	// 0x2d12c895
- (void)setFetchColumns:(id)columns;	// 0x2d12c8d9
- (void)setFetchEntity:(id)entity;	// 0x2d12c91d
- (void)setIsCount:(BOOL)count;	// 0x2d12c92d
- (void)setUseDistinct:(BOOL)distinct;	// 0x2d12c885
@end

