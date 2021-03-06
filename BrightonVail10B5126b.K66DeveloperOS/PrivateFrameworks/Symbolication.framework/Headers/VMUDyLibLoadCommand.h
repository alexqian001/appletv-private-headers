/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMULoadCommand.h"

@class NSString;

@interface VMUDyLibLoadCommand : VMULoadCommand {
	NSString *_path;	// 16 = 0x10
	unsigned _currentVersion;	// 20 = 0x14
	unsigned _compatibilityVersion;	// 24 = 0x18
}
@property(readonly, assign) unsigned compatibilityVersion;	// G=0x355abef1; converted property
@property(readonly, assign) unsigned currentVersion;	// G=0x355abee1; converted property
@property(readonly, retain) NSString *path;	// G=0x355abed1; converted property
- (id)initWithMemory:(id)memory;	// 0x355abdd1
// converted property getter: - (unsigned)compatibilityVersion;	// 0x355abef1
// converted property getter: - (unsigned)currentVersion;	// 0x355abee1
- (void)dealloc;	// 0x355abf4d
- (id)description;	// 0x355abf05
- (BOOL)isLoadDyLib;	// 0x355abf01
// converted property getter: - (id)path;	// 0x355abed1
@end

