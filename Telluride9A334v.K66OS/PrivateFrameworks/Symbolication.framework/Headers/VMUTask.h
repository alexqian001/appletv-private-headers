/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library

@class VMUMachTaskContainer, NSArray;
@protocol VMUMemory;

@interface VMUTask : NSObject {
	id<VMUMemory> _memory;	// 4 = 0x4
	VMUMachTaskContainer *_machTaskContainer;	// 8 = 0x8
	BOOL _isTranslated;	// 12 = 0xc
	NSArray *_headers;	// 16 = 0x10
}
@property(readonly, retain) NSArray *headers;	// G=0x35bdf305; converted property
@property(readonly, assign) BOOL isTranslated;	// G=0x35bdf2e5; converted property
+ (id)findDyldHeaderInMemory:(id)memory address:(unsigned long long)address;	// 0x35bdf719
+ (BOOL)pidIsTranslated:(int)translated;	// 0x35bdf2e1
+ (id)taskWithMachTaskContainer:(id)machTaskContainer;	// 0x35bdf355
- (id)initWithMachTaskContainer:(id)machTaskContainer;	// 0x35bdf391
- (void)dealloc;	// 0x35bdf8e5
// converted property getter: - (id)headers;	// 0x35bdf305
// converted property getter: - (BOOL)isTranslated;	// 0x35bdf2e5
- (id)memory;	// 0x35bdf2f5
- (int)pid;	// 0x35bdf315
- (unsigned)task;	// 0x35bdf335
@end
