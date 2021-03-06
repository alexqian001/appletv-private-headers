/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class WDStyle, WDDocument, NSMutableArray;

@interface WDListDefinition : NSObject {
	int mType;	// 4 = 0x4
	NSMutableArray *mLevels;	// 8 = 0x8
	int mListId;	// 12 = 0xc
	WDDocument *mDocument;	// 16 = 0x10
	WDStyle *mListStyle;	// 20 = 0x14
	WDStyle *mListStyleLink;	// 24 = 0x18
}
@property(assign) int listId;	// G=0x33c032e9; S=0x33a393cd; converted property
@property(retain) id listStyle;	// G=0x33c032c9; S=0x33a3a165; converted property
@property(retain) id listStyleLink;	// G=0x33c032d9; S=0x33a3a1b1; converted property
@property(assign) int type;	// G=0x33c032b9; S=0x33a39715; converted property
- (id)initWithDocument:(id)document;	// 0x33a3931d
- (id)addLevel;	// 0x33a39725
- (id)copyWithZone:(NSZone *)zone;	// 0x33c032f9
- (void)dealloc;	// 0x33a5aea5
- (id)document;	// 0x33a3a1a1
- (id)levelAt:(int)at;	// 0x33a58ded
- (int)levelCount;	// 0x33a865a1
// converted property getter: - (int)listId;	// 0x33c032e9
// converted property getter: - (id)listStyle;	// 0x33c032c9
// converted property getter: - (id)listStyleLink;	// 0x33c032d9
// converted property setter: - (void)setListId:(int)anId;	// 0x33a393cd
// converted property setter: - (void)setListStyle:(id)style;	// 0x33a3a165
// converted property setter: - (void)setListStyleLink:(id)link;	// 0x33a3a1b1
// converted property setter: - (void)setType:(int)type;	// 0x33a39715
// converted property getter: - (int)type;	// 0x33c032b9
@end

