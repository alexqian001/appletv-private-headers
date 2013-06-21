/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class WDDocument, NSMutableArray, WDListDefinition;

@interface WDListDefinitionTable : NSObject {
	NSMutableArray *mListDefinitions;	// 4 = 0x4
	CFDictionaryRef mListDefinitionMap;	// 8 = 0x8
	unsigned mNextIdIndex;	// 12 = 0xc
	WDDocument *mDocument;	// 16 = 0x10
	WDListDefinition *mLastKnownGoodListDefinition;	// 20 = 0x14
}
- (id)initWithDocument:(id)document;	// 0x34ab5bad
- (id)addDefinition;	// 0x34c8b335
- (id)addDefinition:(int)definition;	// 0x34ac0bb5
- (void)dealloc;	// 0x34ae2799
- (id)definitionAt:(int)at;	// 0x34c8b315
- (int)definitionCount;	// 0x34c8b2f5
- (id)definitionWithId:(int)anId;	// 0x34ac1c81
- (id)document;	// 0x34b0461d
- (int)nextId;	// 0x34c8b365
- (void)setLastKnowGoodListDefinition:(id)definition;	// 0x34ac0cf9
@end
