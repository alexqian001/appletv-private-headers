/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSSQLEntity, NSString;

@interface NSSQLStatement : NSObject {
	NSSQLEntity *_entity;	// 4 = 0x4
	NSMutableArray *_bindVariables;	// 8 = 0x8
	NSString *_sqlString;	// 12 = 0xc
	BOOL _isImpossibleCondition;	// 16 = 0x10
	NSSQLEntity *_fakeEntityForFetch;	// 20 = 0x14
}
@property(retain) NSMutableArray *bindVariables;	// G=0x30ef28e1; S=0x30f006c5; converted property
@property(readonly, retain) NSSQLEntity *entity;	// G=0x30ef2f2d; converted property
@property(readonly, retain) NSSQLEntity *fakeEntityForFetch;	// G=0x30fbd6b1; converted property
@property(assign, getter=isImpossibleCondition) BOOL impossibleCondition;	// G=0x30f00a95; S=0x30fbd6a1; converted property
@property(readonly, retain) NSString *sqlString;	// G=0x30ef1fd9; converted property
- (id)initWithEntity:(id)entity;	// 0x30efc265
- (id)initWithEntity:(id)entity sqlString:(id)string;	// 0x30ef1821
- (unsigned)addBindVariable:(id)variable;	// 0x30fbd625
// converted property getter: - (id)bindVariables;	// 0x30ef28e1
- (void)cacheFakeEntityForFetch:(id)fetch;	// 0x30fbd6c1
- (void)clearCaches;	// 0x30fbd621
- (void)dealloc;	// 0x30ef3ea5
- (id)description;	// 0x30fbd5a1
// converted property getter: - (id)entity;	// 0x30ef2f2d
// converted property getter: - (id)fakeEntityForFetch;	// 0x30fbd6b1
// converted property getter: - (BOOL)isImpossibleCondition;	// 0x30f00a95
- (BOOL)isReadOnly;	// 0x30fbd705
- (void)removeAllBindVariables;	// 0x30fbd681
// converted property setter: - (void)setBindVariables:(id)variables;	// 0x30f006c5
// converted property setter: - (void)setImpossibleCondition:(BOOL)condition;	// 0x30fbd6a1
- (void)setSQLString:(id)string;	// 0x30f00671
// converted property getter: - (id)sqlString;	// 0x30ef1fd9
@end
