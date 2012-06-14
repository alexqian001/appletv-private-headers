/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library

@class VMUSymbolOwner;

@interface VMULinkedListEntry : NSObject {
	VMULinkedListEntry *_prev;	// 4 = 0x4
	VMULinkedListEntry *_next;	// 8 = 0x8
	unsigned _size;	// 12 = 0xc
	VMUSymbolOwner *_symbolOwner;	// 16 = 0x10
}
@property(retain) VMULinkedListEntry *next;	// G=0x32cbd521; S=0x32cbd541; converted property
@property(retain) VMULinkedListEntry *prev;	// G=0x32cbd511; S=0x32cbd531; converted property
@property(readonly, assign) unsigned size;	// G=0x32cbd4f1; converted property
@property(readonly, retain) VMUSymbolOwner *symbolOwner;	// G=0x32cbd501; converted property
+ (id)linkedListEntryWithSymbolOwner:(id)symbolOwner;	// 0x32cbd5c9
- (id)initWithSymbolOwner:(id)symbolOwner;	// 0x32cbd551
- (void)dealloc;	// 0x32cbd605
- (id)description;	// 0x32cbd675
// converted property getter: - (id)next;	// 0x32cbd521
// converted property getter: - (id)prev;	// 0x32cbd511
// converted property setter: - (void)setNext:(id)next;	// 0x32cbd541
// converted property setter: - (void)setPrev:(id)prev;	// 0x32cbd531
// converted property getter: - (unsigned)size;	// 0x32cbd4f1
// converted property getter: - (id)symbolOwner;	// 0x32cbd501
@end
