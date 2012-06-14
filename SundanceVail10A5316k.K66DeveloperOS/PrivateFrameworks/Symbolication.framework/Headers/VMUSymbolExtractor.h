/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface VMUSymbolExtractor : NSObject {
	NSMutableArray *_symbols;	// 4 = 0x4
	NSMutableArray *_sourceInfos;	// 8 = 0x8
}
@property(readonly, retain) NSMutableArray *sourceInfos;	// G=0x313cab45; converted property
@property(readonly, retain) NSMutableArray *symbols;	// G=0x313cab35; converted property
+ (id)expandSourceInfos:(id)infos usingSymbols:(id)symbols;	// 0x313ca8a9
+ (id)extractLazySymbolOwnerFromHeader:(id)header;	// 0x313ca1f5
+ (unsigned)extractSymbolOwnerFlagsFromHeader:(id)header;	// 0x313ca155
+ (id)extractSymbolOwnerFromHeader:(id)header;	// 0x313ca2a9
- (id)init;	// 0x313caa99
- (void)dealloc;	// 0x313cab55
// converted property getter: - (id)sourceInfos;	// 0x313cab45
// converted property getter: - (id)symbols;	// 0x313cab35
@end
