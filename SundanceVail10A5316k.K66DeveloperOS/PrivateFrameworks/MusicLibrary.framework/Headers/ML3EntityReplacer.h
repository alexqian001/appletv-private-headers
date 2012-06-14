/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface ML3EntityReplacer : NSObject {
@private
	CFDictionaryRef _propertyToIndexPair;	// 4 = 0x4
	NSMutableArray *_statements;	// 8 = 0x8
}
@property(readonly, assign, nonatomic, getter=isOpen) BOOL open;	// G=0x34638879; 
- (id)initWithEntityClass:(Class)entityClass properties:(id)properties databaseConnection:(id)connection;	// 0x34637cf9
- (void).cxx_destruct;	// 0x34638bcd
- (void)bindDouble:(double)aDouble forProperty:(id)property;	// 0x346386c9
- (void)bindInt:(int)int forProperty:(id)property;	// 0x34638695
- (void)bindNullForProperty:(id)property;	// 0x34638665
- (void)bindPersistentID:(long long)anId;	// 0x34638891
- (void)clearBindings;	// 0x34638a05
- (void)close;	// 0x34638ad5
- (void)dealloc;	// 0x34637cb9
// declared property getter: - (BOOL)isOpen;	// 0x34638879
- (BOOL)perform;	// 0x34638701
- (void)statementForProperty:(id)property usingBlock:(id)block;	// 0x3463842d
@end
