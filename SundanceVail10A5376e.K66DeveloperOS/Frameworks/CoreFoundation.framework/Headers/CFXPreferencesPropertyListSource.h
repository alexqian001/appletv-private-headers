/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "CFXPreferencesSource.h"

@class CFXPreferencesPropertyListSourceSynchronizer;

__attribute__((visibility("hidden")))
@interface CFXPreferencesPropertyListSource : CFXPreferencesSource {
	unsigned short _mode;	// 14 = 0xe
	unsigned _owner;	// 16 = 0x10
	CFXPreferencesPropertyListSourceSynchronizer *_synchronizer;	// 20 = 0x14
	CFArrayRef _dirtyKeys;	// 24 = 0x18
	CFURLRef _url;	// 28 = 0x1c
	long _formatToWrite;	// 32 = 0x20
	CFXPreferencesStatInfo _statInfo;	// 36 = 0x24
	unsigned _group;	// 60 = 0x3c
}
- (id)initWithURL:(CFURLRef)url mode:(unsigned short)mode owner:(unsigned)owner group:(unsigned)group format:(long)format;	// 0x355cfe21
- (void)_assimilateSync:(id)sync;	// 0x355c60bd
- (void)_reenableSuddenTermination;	// 0x355c64a9
- (void)dealloc;	// 0x3564ea4d
- (id)description;	// 0x3564e895
- (void)finalize;	// 0x3564eaad
- (void)setValue:(void *)value forKey:(CFStringRef)key;	// 0x355e7bb1
- (unsigned char)synchronize;	// 0x355d0891
- (void)synchronizeInBackgroundWithCompletionBlock:(id)completionBlock;	// 0x355c5465
@end
