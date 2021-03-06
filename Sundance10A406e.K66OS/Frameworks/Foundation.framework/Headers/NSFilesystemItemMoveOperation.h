/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSOperation.h"

@class NSString, NSError;

__attribute__((visibility("hidden")))
@interface NSFilesystemItemMoveOperation : NSOperation {
	id _delegate;	// 12 = 0xc
	NSString *_sourcePath;	// 16 = 0x10
	NSString *_destinationPath;	// 20 = 0x14
	NSError *_error;	// 24 = 0x18
}
@property(assign) id delegate;	// G=0x355761c1; S=0x355761d1; converted property
@property(readonly, retain) NSError *error;	// G=0x355761e1; converted property
+ (id)_errorWithErrno:(int)errno sourcePath:(id)path destinationPath:(id)path3;	// 0x35575fc9
+ (id)filesystemItemMoveOperationWithSourcePath:(id)sourcePath destinationPath:(id)path;	// 0x35576101
- (void)initWithSourcePath:(id)sourcePath destinationPath:(id)path;	// 0x35576045
- (void)_setError:(id)error;	// 0x35576219
- (void)dealloc;	// 0x35576089
// converted property getter: - (id)delegate;	// 0x355761c1
// converted property getter: - (id)error;	// 0x355761e1
- (BOOL)filesystemItemCopyOperation:(id)operation shouldProceedAfterError:(id)error copyingItemAtPath:(id)path toPath:(id)path4;	// 0x35576155
- (void)main;	// 0x3557625d
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x355761d1
@end

