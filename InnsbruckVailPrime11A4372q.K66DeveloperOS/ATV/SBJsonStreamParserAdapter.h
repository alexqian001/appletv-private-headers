/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBJsonStreamParserDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSMutableArray;
@protocol SBJsonStreamParserAdapterDelegate;

@interface SBJsonStreamParserAdapter : XXUnknownSuperclass <SBJsonStreamParserDelegate> {
	id<SBJsonStreamParserAdapterDelegate> delegate;	// 4 = 0x4
	unsigned levelsToSkip;	// 8 = 0x8
	unsigned depth;	// 12 = 0xc
	NSMutableArray *array;	// 16 = 0x10
	NSMutableDictionary *dict;	// 20 = 0x14
	NSMutableArray *keyStack;	// 24 = 0x18
	NSMutableArray *stack;	// 28 = 0x1c
	int currentType;	// 32 = 0x20
}
@property(assign) id<SBJsonStreamParserAdapterDelegate> delegate;	// G=0x52e391; S=0x52e3a5; @synthesize
@property(assign) unsigned levelsToSkip;	// G=0x52e3bd; S=0x52e3d1; @synthesize
- (id)init;	// 0x52dd6d
- (void)dealloc;	// 0x52de19
// declared property getter: - (id)delegate;	// 0x52e391
// declared property getter: - (unsigned)levelsToSkip;	// 0x52e3bd
- (void)parser:(id)parser found:(id)found;	// 0x52df69
- (void)parser:(id)parser foundBoolean:(BOOL)boolean;	// 0x52e2f1
- (void)parser:(id)parser foundNumber:(id)number;	// 0x52e371
- (void)parser:(id)parser foundObjectKey:(id)key;	// 0x52e121
- (void)parser:(id)parser foundString:(id)string;	// 0x52e381
- (void)parserFoundArrayEnd:(id)end;	// 0x52e265
- (void)parserFoundArrayStart:(id)start;	// 0x52e1cd
- (void)parserFoundNull:(id)null;	// 0x52e331
- (void)parserFoundObjectEnd:(id)end;	// 0x52e141
- (void)parserFoundObjectStart:(id)start;	// 0x52e089
- (void)pop;	// 0x52de7d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x52e3a5
// declared property setter: - (void)setLevelsToSkip:(unsigned)skip;	// 0x52e3d1
@end
