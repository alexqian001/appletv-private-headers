/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSDirectoryEnumerator.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSURLDirectoryEnumerator : NSDirectoryEnumerator {
@private
	CFURLEnumeratorRef _enumerator;	// 4 = 0x4
	id _errorHandler;	// 8 = 0x8
	BOOL shouldContinue;	// 12 = 0xc
}
@property(copy) id errorHandler;	// G=0x35e3eefd; S=0x35e231f9; @synthesize=_errorHandler
- (id)initWithURL:(id)url includingPropertiesForKeys:(id)keys options:(unsigned)options errorHandler:(id)handler;	// 0x35e23119
- (void)dealloc;	// 0x35e23299
- (id)directoryAttributes;	// 0x35e3eeb5
// declared property getter: - (id)errorHandler;	// 0x35e3eefd
- (id)fileAttributes;	// 0x35e3eeb1
- (void)finalize;	// 0x35e3eeb9
- (unsigned)level;	// 0x35e3ee9d
- (id)nextObject;	// 0x35e2321d
// declared property setter: - (void)setErrorHandler:(id)handler;	// 0x35e231f9
- (void)skipDescendants;	// 0x35e3ee89
- (void)skipDescendents;	// 0x35e3ee79
@end
